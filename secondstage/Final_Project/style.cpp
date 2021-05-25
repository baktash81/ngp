#include <windows.h>
#include "style.h"

style::style(){
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}
void style::operator+ (int input){
	SetConsoleTextAttribute(hConsole, input);
}
