#include <windows.h> //Required for all WinAPI calls

int main() {

	//Display a simple message box with a message, title and OK button
	MessageBoxA(
		NULL,		//NO PARENT WINDOW
		"Interaction with Win32 API", //MESSAGE TEXT
		"MessageBox output", //WINDOW TITLE
		MB_OK | MB_ICONINFORMATION //BUTTON AND ICON TYPE
	);
	return 0;
}