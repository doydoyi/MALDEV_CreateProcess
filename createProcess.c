#include <windows.h>
#include <stdlib.h>
#include <stdio.h>

int main(void){
    
    /*BOOL CreateProcessW(
    [in, optional]      LPCSTR                lpApplicationName,
    [in, out, optional] LPSTR                 lpCommandLine,
    [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
    [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
    [in]                BOOL                  bInheritHandles,
    [in]                DWORD                 dwCreationFlags,
    [in, optional]      LPVOID                lpEnvironment,
    [in, optional]      LPCSTR                lpCurrentDirectory,
    [in]                LPSTARTUPINFOA        lpStartupInfo,
    [out]               LPPROCESS_INFORMATION lpProcessInformation
    );*/

    // STARTUPINFOW startup_info;
    // PROCESS_INFORMATION process_info;
    // ^^ Unchanged structures ^^
    
    STARTUPINFOW startup_info = { 0 };
    PROCESS_INFORMATION process_info = { 0 };
    // ^^ Changed structures ^^

    if(!CreateProcessW( 
        L"C:\\Windows\\System32\\notepad.exe",
        NULL,
        NULL,
        NULL,
        FALSE,
        BELOW_NORMAL_PRIORITY_CLASS,
        NULL,
        NULL,
        &startup_info,
        &process_info
    )){
        printf("(-) Process couldn't be run %ld", GetLastError());
        return EXIT_FAILURE;
    };

    printf("Process ID: %ld", process_info.dwProcessId);
    return EXIT_SUCCESS;
}