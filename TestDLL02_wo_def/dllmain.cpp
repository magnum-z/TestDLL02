// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

DECLDIR SampleFunction(MSIHANDLE hModule)
{
    MessageBox(NULL, TEXT("Install"), TEXT("SampleFunction"), MB_OK);
    return ERROR_SUCCESS;
}

DECLDIR SampleFunction2(MSIHANDLE hModule)
{
    MessageBox(NULL, TEXT("Remove"), TEXT("SampleFunction2"), MB_OK);
    return ERROR_SUCCESS;
}
