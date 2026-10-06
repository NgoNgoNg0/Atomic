#include "PlayScene.h"

#include "BallManager.h"
#include "TitleScene.h"
#include "ResultScene.h"

#include "Framework/SceneManager.h"
#include "Framework/Texture.h"
#include "Framework/Font.h"
#include "Framework/Animator.h"
#include "Framework/AudioClip.h"
#include "Framework/Graphics.h"
#include "Framework/ResourceManager.h"
#include "Framework/Vector2.h"
#include "Framework/Color.h"
#include "Framework/Rect.h"
#include "Framework/Mouse.h"
#include "Framework/Persistence.h"

#include <fstream>
#include <string>
#include <memory>
#include <iostream>
#include <filesystem>

PlayScene::PlayScene()
	: m_howToPlayButton("Assets/Image/HowToBefor.png", "Assets/Image/HowToAfter.png", Rect{ Graphics::GetWindowSize(0.75f).x, 0, Graphics::GetWindowSize(0.25f).x, Graphics::GetWindowSize(0.17f).y })
	, m_retirementButton("Assets/Image/RetireBefor.png", "Assets/Image/RetireAfter.png", Rect{ Graphics::GetWindowSize(0.76f).x, Graphics::GetWindowSize(0.9f).y, Graphics::GetWindowSize(0.24f).x, Graphics::GetWindowSize(0.1f).y })
	, m_LeftButton("Assets/Image/TriangleLBefor.png", "Assets/Image/TriangleLAfter.png", Rect{ Graphics::GetWindowSize(0.0f).x, Graphics::GetWindowSize(0.42f).y, Graphics::GetWindowSize(0.1f).x, Graphics::GetWindowSize(0.2f).y })
	, m_RightButton("Assets/Image/TriangleRBefor.png", "Assets/Image/TriangleRAfter.png", Rect{ Graphics::GetWindowSize(0.9f).x, Graphics::GetWindowSize(0.42f).y, Graphics::GetWindowSize(0.1f).x, Graphics::GetWindowSize(0.2f).y })
	, m_returnButton("Assets/Image/ReturnBefor.png", "Assets/Image/ReturnAfter.png", Rect{ Graphics::GetWindowSize(0.9f).x, Graphics::GetWindowSize(0.0f).y, Graphics::GetWindowSize(0.1f).x, Graphics::GetWindowSize(0.18f).y })
	, m_yesButton("Assets/Image/YesBefor.png", "Assets/Image/YesAfter.png", Rect{ Graphics::GetWindowSize(0.25f).x, Graphics::GetWindowSize(0.55f).y, Graphics::GetWindowSize(0.23f).x, Graphics::GetWindowSize(0.2f).y })
	, m_noButton("Assets/Image/NoBefor.png", "Assets/Image/NoAfter.png", Rect{ Graphics::GetWindowSize(0.52f).x, Graphics::GetWindowSize(0.55f).y, Graphics::GetWindowSize(0.23f).x, Graphics::GetWindowSize(0.2f).y })
	, m_page(0)
	, m_currentShow(play)
	, m_timer(3.0f)
{
	ResourceManager<Texture>::Register("PlaySceneBack", "Assets/Image/PlayBackGround.png");
	ResourceManager<Texture>::Register("BeakerDown", "Assets/Image/BeakerDown.png");
	ResourceManager<Texture>::Register("BeakerUp", "Assets/Image/BeakerUp.png");
	ResourceManager<Texture>::Register("ChangeBox", "Assets/Image/ChangeBox.png");
	ResourceManager<Texture>::Register("PredictionBox", "Assets/Image/PredictionBox.png");
	ResourceManager<Texture>::Register("ScoreBox", "Assets/Image/ScoreBox.png");
	ResourceManager<Texture>::Register("Really", "Assets/Image/Really.png");
	ResourceManager<Texture>::Register("HighScore", "Assets/Image/HighScore.png");
	ResourceManager<Texture>::RegisterSequence("PopUp", "Assets/Image/PopUp", ".png", 0, 7);
	ResourceManager<Font>::Register("Default", "Assets/Fonts/MochiyPopOne-Regular.ttf", 32);
	ResourceManager<Font>::Register("HighScoreFont", "Assets/Fonts/MochiyPopOne-Regular.ttf", Graphics::GetWindowSize(8.0f / 108.f).y);
	ResourceManager<AudioClip>::Register("PlayBGM", "Assets/Sounds/PlayBGM.mp3");
	ResourceManager<AudioClip>::Register("GameOverSound", "Assets/Sounds/GameOverSound.mp3");
	ResourceManager<AudioClip>::Register("ButtonSound", "Assets/Sounds/ButtonSound.mp3");
	m_click.Initialize();
	m_BGM.SetClip(ResourceManager<AudioClip>::Get("PlayBGM"));
	m_ButtonSE.SetClip(ResourceManager<AudioClip>::Get("ButtonSound"));
	m_BGM.Play(-1);

    char* pref_path = SDL_GetPrefPath("MyCompany", "MyGame");
    if (pref_path)
    {
        std::filesystem::path load_path(pref_path);
        load_path /= "HighScore.txt";
        
        std::ifstream file(load_path);
        if (file.is_open())
        {
            file >> m_highScore;
            file.close();
        }
        else
        {
            m_highScore = 0; // ファイルがない場合は初期値
        }
        SDL_free(pref_path);
    }


	BallManager::Initialize();
}

PlayScene::~PlayScene()
{
    if (BallManager::GetScore() > m_highScore)
    {
        // 1. SDL3を使って、このアプリ専用の安全な書き込み可能パスを取得
        // 引数: "組織名や開発者名", "アプリ名" （自由に変更してください）
        char* pref_path = SDL_GetPrefPath("MyCompany", "MyGame");
        
        if (pref_path)
        {
            // 2. 取得したパスとファイル名を結合する
            std::filesystem::path save_path(pref_path);
            save_path /= "HighScore.txt";
            
            // 3. ファイルを開いて書き込む（ios::out を明示）
            std::ofstream file(save_path, std::ios::out | std::ios::trunc);
            if (file.is_open())
            {
                file << BallManager::GetScore();
                file.close();
                
                // 内部変数も更新
                m_highScore = BallManager::GetScore();

                // Webではブラウザの保存領域へ書き出す(他のプラットフォームでは何もしない)
                Persistence::Flush();
            }
            
            // 4. SDLが確保したメモリを解放する
            SDL_free(pref_path);
        }
    }
}

void PlayScene::Update()
{
		m_timer.Update();
		m_click.Update();
	if (m_timer.IsFinished())
	{
		SceneManager::ChangeScene(std::make_unique<ResultScene>(BallManager::GetScore(), m_highScore));
	}
	switch (m_currentShow)
	{
	case play:

		m_howToPlayButton.Update();
		m_retirementButton.Update();
		if (m_howToPlayButton.isMouseClicked())
		{
			m_ButtonSE.Play(0);
			m_currentShow = howTo;
			break;
		}
		if (m_retirementButton.isMouseClicked())
		{
			m_ButtonSE.Play(0);
			m_currentShow = retire;
			break;
		}
		if (!m_timer.IsRunning()) 
		{
			BallManager::Update();
		}
		if (BallManager::isGameOver() && !m_timer.IsRunning())
		{
			m_BGM.SetClip(ResourceManager<AudioClip>::Get("GameOverSound"));
			m_BGM.Play(0);
			m_timer.Start(3.0f);
		}
		break;
	case howTo:

		m_returnButton.Update();
		m_LeftButton.Update();
		m_RightButton.Update();
		if (m_returnButton.isMouseClicked())
		{
			m_ButtonSE.Play(0);
			m_currentShow = play;
		}
		if (m_LeftButton.isMouseClicked())
		{
			m_ButtonSE.Play(0);
			m_page = (m_page +7) % 8;
		}
		if (m_RightButton.isMouseClicked())
		{
			m_ButtonSE.Play(0);
			m_page = (m_page + 1) % 8;
		}
		if (Mouse::GetButtonDown(MouseButton::Left))
		{
			m_click.Trigger();
		}
		break;
	case retire:

		m_yesButton.Update();
		m_noButton.Update();
		if (m_yesButton.isMouseClicked())
		{
			m_ButtonSE.Play(0);
			m_timer.Start(0.5f);
		}
		if (m_noButton.isMouseClicked())
		{
			m_ButtonSE.Play(0);
			m_currentShow = play;
		}
		if (Mouse::GetButtonDown(MouseButton::Left))
		{
			m_click.Trigger();
		}
		break;
	default:
		break;
	}
}

void PlayScene::FixedUpdate()
{
	// Physics only runs while playing, mirroring the condition in Update().
	if (m_currentShow == play && !m_timer.IsRunning())
	{
		BallManager::FixedUpdate();
	}
	else
	{
		BallManager::ResetInterpolation();
	}
}

void PlayScene::Draw() 
{
	Graphics::DrawTexture(ResourceManager<Texture>::Get("PlaySceneBack"), Rect{ 0, 0, Graphics::GetWindowSize(1.0f).x, Graphics::GetWindowSize(1.0f).y });
	Graphics::DrawTexture(ResourceManager<Texture>::Get("BeakerDown"), Rect{ Graphics::GetWindowSize(0.05f).x, Graphics::GetWindowSize(0.2f).y, Graphics::GetWindowSize(0.55f).x, Graphics::GetWindowSize(0.8f).y });
	Graphics::DrawTexture(ResourceManager<Texture>::Get("ChangeBox"), Rect{Graphics::GetWindowSize(0.61f).x, Graphics::GetWindowSize(0.57f).y, Graphics::GetWindowSize(0.18f).x, Graphics::GetWindowSize(0.3f).y });
	Graphics::DrawTexture(ResourceManager<Texture>::Get("PredictionBox"), Rect{Graphics::GetWindowSize(0.8f).x, Graphics::GetWindowSize(0.57f).y, Graphics::GetWindowSize(0.18f).x, Graphics::GetWindowSize(0.3f).y });
	Graphics::DrawTexture(ResourceManager<Texture>::Get("ScoreBox"), Rect{Graphics::GetWindowSize(0.6f).x, Graphics::GetWindowSize(0.14f).y, Graphics::GetWindowSize(0.39f).x, Graphics::GetWindowSize(0.44f).y });
	Graphics::DrawTexture(ResourceManager<Texture>::Get("HighScore"), Rect{Graphics::GetWindowSize(0.62f).x, Graphics::GetWindowSize(0.425f).y, Graphics::GetWindowSize(0.16f).x, Graphics::GetWindowSize(0.105f).y});
	m_howToPlayButton.Draw();
	m_retirementButton.Draw();
	Graphics::DrawText(ResourceManager<Font>::Get("HighScoreFont"), std::to_string(m_highScore), Vector2{ Graphics::GetWindowSize(0.8f).x, Graphics::GetWindowSize(0.416f).y }, Color{255, 239, 108}, false);
	BallManager::Draw();
	Graphics::DrawTexture(ResourceManager<Texture>::Get("BeakerUp"), Rect{ Graphics::GetWindowSize(0.05f).x, Graphics::GetWindowSize(0.2f).y, Graphics::GetWindowSize(0.55f).x, Graphics::GetWindowSize(0.8f).y });

	switch (m_currentShow)
	{
	case play:

		m_howToPlayButton.Draw();
		m_retirementButton.Draw();
		break;
	case howTo:

		Graphics::DrawTexture(ResourceManager<Texture>::Get("PopUp" + std::to_string(m_page)), Rect{ 0, 0, Graphics::GetWindowSize(1.0f).x, Graphics::GetWindowSize(1.0f).y });
		m_returnButton.Draw();
		m_LeftButton.Draw();
		m_RightButton.Draw();
		break;
	case retire:
		
		Graphics::DrawTexture(ResourceManager<Texture>::Get("Really"), Rect{ Graphics::GetWindowSize(0.2f).x, Graphics::GetWindowSize(0.2f).y, Graphics::GetWindowSize(0.6f).x, Graphics::GetWindowSize(0.6f).y });
		m_yesButton.Draw();
		m_noButton.Draw();
	default:
		break;
	}
	m_click.Draw();
}
