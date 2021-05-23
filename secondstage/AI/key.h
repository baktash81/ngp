#include <iostream>  //output
#include <ctime>  	//timing
#include <cstdlib> // random
#include <unistd.h> //sleep
#include <windows.h>
#include <string>
#ifndef REZ_KEY
#define REZ_KEY
using namespace std;
class keyGenerator{
	private:
		int success ;
		int fail  ;
		int first_i ;
		int first_j ;
		int second_i ;
		int second_j ;
		int blocked_i;
		int no_blocked_j; // ---------o----------
		int blocked_j; 
		int no_blocked_i;
		int len ;
		int emtiaz;
		int number_colors;
		int block_colors;
		string key;
		int loose;
		int endemtiaz;
		HANDLE  hConsole;
	public:
		bool pass ;
		keyGenerator(){
			// constructor
			success = 0 ;
			fail = 0;
			len = 9 ;
			pass = false;
			emtiaz  = 0 ;
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			number_colors = 10;
			block_colors = 6; 
			loose = 0;
			endemtiaz = 50;
		}
		
		void gamerunner();
		void setendemtiaz(int);
		void resetloose();
	private:	
		void initialize();	
		void table_drawer();
		bool validator();
};
#endif
