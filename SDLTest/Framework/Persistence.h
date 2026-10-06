#pragma once

// Makes files written under SDL_GetPrefPath survive a page reload on the web
// build (IndexedDB via Emscripten's IDBFS). On native platforms every call is a
// no-op and the data is always ready.
namespace Persistence
{
	// Starts loading the saved files. Call once at startup.
	void Initialize();

	// True once the saved files have been loaded and can be read.
	bool IsReady();

	// Writes files changed since the last call back to persistent storage.
	void Flush();
}
