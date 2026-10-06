# 元素パズル (Atomic)

元素を落として、ぶつけて、化合物を作る落ちものパズルです。C++ と SDL3 で作られていて、iPhone アプリと Web 版の両方で動きます。

## 遊ぶ

**▶ [ブラウザで遊ぶ](https://ngongong0.github.io/Atomic/)**

- 初回の読み込みは約 40 MB です。
- 音は、ブラウザによっては、最初のクリックのあとに鳴り始めます。
- ハイスコアは、そのブラウザの中に保存されます(別のブラウザには引き継がれません)。

## 遊び方

1. 画面の上から、元素(O、C、H、N、S、Cl、Na)を、ビーカーに落とします。クリック(タップ)した位置に落ちます。
2. 手が余っている元素や分子同士がぶつかると、結合して、新しい化合物になります。結合するとスコアが入ります。
3. ビーカーから溢れるとゲームオーバーです。スコアに応じて、結果画面で、ランク(C / B / A / S)が出ます(1500 未満が C、3000 未満が B、5000 未満が A、それ以上が S)。

| ボタン | 働き |
|---|---|
| 元素交換 | いま持っている元素と、保持している元素を入れ替える |
| 化合予想 | ピペットの下にあるボールとぶつかったときに、何ができるか表示する |
| 遊び方 | 遊び方のページを開く |
| リタイア | ゲームをやめる |

反物質(黒い玉)は、ぶつかった相手と一緒に消えます(スコアは入りません)。

## 化合物のしくみ

化合物や反応の一覧は、書いていません。計算で作っています([`SDLTest/Chemistry.cpp`](SDLTest/Chemistry.cpp))。

- 各ボールは、原子と結合でできた小さな分子です。原子には、結合できる手(価数)があります。
- ぶつかった2つのボールで、手が余っている原子の組を調べて、結合エネルギーが最大の組で、結合します。
- 結合エネルギーが、`kMinBondEnergy`(現在 250 kJ/mol)より小さければ、反応しません。この値が、難易度のつまみです。
- 手が余っていない分子(安定な分子)は、反応しません。
- 1つの分子は、最大 8 原子です。

## ビルド

依存ライブラリは [vcpkg](https://github.com/microsoft/vcpkg) で入れます(SDL3、SDL3_image、SDL3_ttf、SDL3_mixer)。必要なものは、`vcpkg.json` に書いてあります。

### Web(Emscripten)

[emsdk](https://github.com/emscripten-core/emsdk) を入れて、有効にしてから、次を実行します。

```bash
vcpkg install --triplet wasm32-emscripten --x-manifest-root=. --x-install-root=vcpkg_wasm

cmake -S . -B build-web -DCMAKE_BUILD_TYPE=Release \
  -DCMAKE_TOOLCHAIN_FILE=$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake \
  -DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=$EMSDK/upstream/emscripten/cmake/Modules/Platform/Emscripten.cmake \
  -DVCPKG_TARGET_TRIPLET=wasm32-emscripten \
  -DVCPKG_INSTALLED_DIR=$PWD/vcpkg_wasm -DVCPKG_MANIFEST_INSTALL=OFF
cmake --build build-web
```

`build-web/SDLTest/` に、`SDLTest.html`、`.js`、`.wasm`、`.data` ができます。`file://` では動かないので、HTTP サーバーで配信します(例:`python3 -m http.server`)。

`master` にプッシュすると、GitHub Actions([`.github/workflows/pages.yml`](.github/workflows/pages.yml))が、ビルドして、GitHub Pages に公開します。

### iOS(Xcode)

CMake で、Xcode のプロジェクトを作ります。実機は `arm64-ios-release`、Simulator は `arm64-ios-simulator-release` の triplet を使います(Simulator の例):

```bash
vcpkg install --triplet arm64-ios-simulator-release --x-manifest-root=. --x-install-root=vcpkg_ios_sim

cmake -S . -B build-ios -G Xcode \
  -DCMAKE_SYSTEM_NAME=iOS -DCMAKE_OSX_SYSROOT=iphonesimulator -DCMAKE_OSX_ARCHITECTURES=arm64 \
  -DCMAKE_TOOLCHAIN_FILE=$VCPKG_ROOT/scripts/buildsystems/vcpkg.cmake \
  -DVCPKG_TARGET_TRIPLET=arm64-ios-simulator-release \
  -DVCPKG_INSTALLED_DIR=$PWD/vcpkg_ios_sim -DVCPKG_MANIFEST_INSTALL=OFF
```

生成された `SDLTest.xcodeproj` を Xcode で開きます。Bundle Identifier、Team(署名)、起動画面(`Launch Screen.storyboard`)は、Xcode 側で設定します。アプリアイコン(`AtomicIcon.icon`)と、120 Hz の設定(`SDLTest/Info.plist.in`)は、CMake が取り込みます。

> CMakeLists を変えたあとは、CMake を実行し直して、Xcode のプロジェクトを再生成してください。

## フォルダ

| 場所 | 内容 |
|---|---|
| `SDLTest/` | ゲーム本体(シーン、ボール、化合物の生成など) |
| `SDLTest/Framework/` | 描画、入力、音、時間、シーン管理などの共通部分 |
| `SDLTest/web/` | Web 版のページの雛形(`shell.html`) |
| `Assets/` | 画像、音、動画の連番画像、フォント(アプリと Web 版に同梱されるもの) |
| `LegacyFonts/` | 以前使っていたフォント(配布物には同梱しない) |

物理は、1/60 秒の固定ステップで動き、描画は補間されます。フレームレートが違っても、ゲームの速さは変わりません。

## フォント

`Assets/Fonts/` のフォントは、SIL Open Font License 1.1 です。ライセンスの全文は、同じフォルダにあります。

| ファイル | 用途 |
|---|---|
| `MPLUS1p-Bold.ttf` | ボール内の化学式(M PLUS 1p) |
| `MochiyPopOne-Regular.ttf` | スコアの数字(Mochiy Pop One) |

`LegacyFonts/` のフォント(HG創英角ポップ体、Calibri Bold)は、再配布が許可されていないため、アプリにも Web 版にも含めません。`Assets/` には戻さないでください。
