#include "Persistence.h"

#ifdef __EMSCRIPTEN__
#include <emscripten/emscripten.h>

namespace
{
	bool g_ready = false;
}

extern "C" EMSCRIPTEN_KEEPALIVE void PersistenceLoaded()
{
	g_ready = true;
}

namespace Persistence
{
	void Initialize()
	{
		// SDL_GetPrefPath returns paths under /libsdl on the web.
		EM_ASM({
			FS.mkdir('/libsdl');
			FS.mount(IDBFS, {}, '/libsdl');
			FS.syncfs(true, function (error) {
				if (error) {
					console.error('Failed to load saved data:', error);
				}
				Module._PersistenceLoaded();
			});
		});
	}

	bool IsReady()
	{
		return g_ready;
	}

	void Flush()
	{
		EM_ASM({
			FS.syncfs(false, function (error) {
				if (error) {
					console.error('Failed to save data:', error);
				}
			});
		});
	}
}

#else

namespace Persistence
{
	void Initialize() {}
	bool IsReady() { return true; }
	void Flush() {}
}

#endif
