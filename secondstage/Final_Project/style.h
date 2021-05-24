#include <windows.h>
#ifndef STYLE
#define STYLE

class style{
	public:
	HANDLE  hConsole;
	style();
	void operator+ (int input);
};

#endif
