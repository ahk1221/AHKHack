// dllmain.cpp : Defines the entry point for the DLL application.
#include "AHKHack.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
	if (ul_reason_for_call == DLL_PROCESS_ATTACH)
	{
		CreateThread(nullptr, 0, MainThread, nullptr, 0, nullptr);
	}

    return TRUE;
}

