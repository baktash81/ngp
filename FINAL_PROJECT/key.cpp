#include <iostream>  //output
#include <ctime>  	//timing
#include <cstdlib> // random
#include <unistd.h> //sleep
#include <windows.h>
#include <string>
using namespace std;
#include "key.h"
void keyGenerator::gamerunner(){
			// assemblening the other functions and runnig the game
			cout << "go from 0 to 1 by keys 'a' , 's' , 'd' and 'w' with facing to blocks." << endl << endl ;
			while(true){
				initialize();
				table_drawer();
				
				if(validator()){
					cout << endl << "TRUE" << endl  ;
					emtiaz = emtiaz + 10 ;
					cout << endl;
					
				}else{
					cout << endl << "FALSE" << endl ;
					cout << endl;
					loose = loose + 1 ;
				}
				cout << "SCORE IS : " << emtiaz << endl ;
				cout << "YOU CAN TYR " << (3  - loose) << " MORE TIMES !" << endl ;
				sleep(1);
				if(emtiaz == 20){
					len = 10;
				}else if (emtiaz == endemtiaz){
					pass = true;
					break;
				}else if(emtiaz == 30){
					len = 11;
				}else if(emtiaz == 40){
					len = 12;
				}else if(emtiaz == 50){
					len = 13;
				}
				
				if (loose == 3){
					pass = false;
					break;
				}
			}
			
}
void keyGenerator::setendemtiaz(int input){
	// gozashan emtiaz nahayi
	endemtiaz = input ;
}
void keyGenerator::initialize(){
			// initializing each data member each time
			first_i = rand()%len;
			first_j = rand()%len;
			second_i = rand()%len;
			second_j = rand()%len;
			
			
			// if both were the same
			while((abs(first_j-second_j) <= 1) || (abs(first_i-second_i) <= 1)){
				second_i = rand()%len;
				second_j = rand()%len;
			}
			
			// block cells initializations (i)
			blocked_i = rand()%len ;
			//check if it has same value as 0 and 1 i's and check if the wall is between these to cells
			if(first_i > second_i ){
				while(blocked_i == first_i ||  blocked_i == second_i || blocked_i > first_i ||  blocked_i < second_i ){
					blocked_i = rand()%len ;
				}
			}else if(first_i < second_i ){
				while(blocked_i == first_i ||  blocked_i == second_i || blocked_i < first_i ||  blocked_i > second_i ){
					blocked_i = rand()%len ;
				}
			}else{
				while(blocked_i == first_i){
					blocked_i = rand()%len ;
				}
			}
			// free of block "cell" initialization (j)
			no_blocked_j = rand()%len ;

			

			// block cells initializations (j)
			blocked_j = rand()%len ;
			
			// block cells initializations (j)
			if(first_j > second_j ){
				while(blocked_j == first_j ||  blocked_j == second_j || blocked_j > first_j ||  blocked_j < second_j ){
					blocked_j = rand()%len ;
				}
			}else if(first_j < second_j ){
				while(blocked_j == first_j ||  blocked_j == second_j || blocked_j < first_j ||  blocked_j > second_j ){
					blocked_j = rand()%len ;
				}
			}else{
				while(blocked_j == first_j ){
					blocked_j = rand()%len ;
				}
			}
			
			// barressi konim ke sorrakh soton nayofte ro divar radif
			while(blocked_j == no_blocked_j){
				no_blocked_j = rand()%len ;
			}
			
			no_blocked_i = rand()%len ;
			if(first_j == second_j && first_i != second_i){
				if(blocked_j > first_j){
					while(blocked_j <= no_blocked_j){
						no_blocked_j = rand()%len ;
					}	
				}else{
					while(blocked_j >= no_blocked_j){
						no_blocked_j = rand()%len ;
					}
				}
			}else if(first_j != second_j && first_i == second_i){
				if(blocked_i > first_i){
					while(blocked_i <= no_blocked_i){
						no_blocked_i = rand()%len ;
					}	
				}else{
					while(blocked_i >= no_blocked_i){
						no_blocked_i = rand()%len ;
					}
				}
			}
			
			// free of block "cell" initialization (i)
			if((first_j > second_j && first_i > second_i ) || (first_j < second_j && first_i < second_i )){
				if(no_blocked_j > blocked_j){
					while( no_blocked_i >= blocked_i ){
						no_blocked_i = rand()%len ;
					}
				}else{
					while(no_blocked_i <= blocked_i){
						no_blocked_i = rand()%len ;
					}
				}
			}else if((first_j < second_j && first_i > second_i) || (first_j > second_j && first_i < second_i)){
				if(no_blocked_j > blocked_j){
					while(no_blocked_i <= blocked_i ){
						no_blocked_i = rand()%len ;
					}
				}else{
					while(no_blocked_i >= blocked_i){
						no_blocked_i = rand()%len ;
					}
				}
			}
			
			// these couts are for testing
			/*
			cout << "6" << endl ;
			cout << "first is : ( " <<  first_i << " , " << first_j << " )" << endl ;
			cout << "second is : ( " <<  second_i << " , " << second_j << " )" << endl ;
			cout << "wall i : " << blocked_i << endl ;
			cout << "wall j is: " << blocked_j << endl ;
			cout << "free in i wall : " << no_blocked_j << endl ;
			cout << "free in j wall : " << no_blocked_i << endl ;
			*/
}

void keyGenerator::table_drawer(){
			// output the table and its cells
			cout << "    " ;
			for(int i =0 ; i < len ; i++){
				if(i >= 9){
					cout << i <<" " ;
				}else{
					cout << i <<"  " ;
				}
			}
			cout << endl ;
			cout << "   " ;
			for(int i =0 ; i < len ; i++){
				cout << "---" ;
			}
			cout << endl ;
			// main table
			for(int j = 0 ; j < len ; j++){
				// j axis
				
				if(j >= 10){
					cout << j <<"|" ;
				}else{
					cout << j <<" |" ;
				}
				//entries :
				for(int i =0 ; i < len ; i++){
					if(i == first_i && j ==first_j){
						SetConsoleTextAttribute(hConsole, number_colors);
						cout << " 0" ;
						SetConsoleTextAttribute(hConsole, 15);
						cout << "|";
					}else if (i == second_i && j ==second_j) {
						SetConsoleTextAttribute(hConsole, number_colors);
						cout << " 1" ;
						SetConsoleTextAttribute(hConsole, 15);
						cout << "|";
					}else if((i == blocked_i || j == blocked_j)){
						if(i == no_blocked_i || j ==no_blocked_j ){
							cout << "  |";
						}else{
							//color the block: 10 -> green
							SetConsoleTextAttribute(hConsole, block_colors);
							cout << char(178) << char(178) ;
							//set back to defualt: 15 -> white
							SetConsoleTextAttribute(hConsole, 15);
							cout << "|";
						}
					}else{
						cout << "  |";
					}	
				}
				cout << endl ;
				cout << "   " ;
				for(int i =0 ; i < len ; i++){
					cout << "---" ;
				}
				cout << endl ;
			}
}
void keyGenerator::resetloose(){
	loose = 0;
}
bool keyGenerator::validator(){
			// validate the input string
			cout << "INPUT THE KEY : " ;
			//cin >> key;
			getline(cin , key);
			
			int i_go = first_i ;
			int j_go = first_j ;
			for(int i =0; key[i] != '\0' ; i++){
				if(key[i] == 'w' || key[i] == 'W'){
					j_go--;
				}else if (key[i] == 'A' || key[i] == 'a'){
					i_go--;
				}else if(key[i] == 's' || key[i] == 'S'){
					j_go++;
				}else if(key[i] == 'd' || key[i] == 'D'){
					i_go++;
				}
				if(i_go == blocked_i){
					if(j_go != no_blocked_j){
						return 0;
					}
				}
				if(j_go == blocked_j){
					if(i_go != no_blocked_i){
						return 0;
					}
				}
			}
			
			if(i_go == second_i && j_go == second_j){
				return true;
			}else{
				return false;
			}
		}

