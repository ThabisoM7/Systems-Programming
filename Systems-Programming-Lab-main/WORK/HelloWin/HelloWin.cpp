#include <iostream>
#include <windows.h>
#include <stdio.h>

int main()
{
    SYSTEM_INFO s1;
    ::GetNativeSystemInfo(&s1);

    printf("Number of Logical Processors %d\n", s1.dwNumberOfProcessors);
    printf("Page size %d Bytes\n", s1.dwPageSize);
    printf("Processor Mask: 0x%p\n", (PVOID)s1.dwActiveProcessorMask);
    printf("Minimum process address: 0%p\n", s1.lpMinimumApplicationAddress);
    printf("Maximum process address: 0x%p\n", s1.lpMaximumApplicationAddress);
 

        //Display a simple message box with a message, title and OK button
        MessageBoxA(
            NULL,		//NO PARENT WINDOW
            "Interaction with Win32 API", //MESSAGE TEXT
            "MessageBox output", //WINDOW TITLE
            MB_OK | MB_ICONINFORMATION //BUTTON AND ICON TYPE
        );
        return 0;
    }

