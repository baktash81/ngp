#include<iostream>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h> 
#include <windows.h>
using namespace std;
#ifndef HESAM_PASSWORD
#define HESAM_PASSWORD
class GameThree{
	private:
		string MainKey;
		int warning;
		int Point = 500;
		string Key_Suggest;
		HANDLE  hConsole;
	public:
		bool pass;
		GameThree();
		void input();	
		void print_1();
		string generate_Key();	
		void checking(string keyC);
		bool next();
	public:
		void gamerunner();

};
#endif
