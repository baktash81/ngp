#include<iostream>
#include <unistd.h> 
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include "password.h"
using namespace std;

	GameThree::GameThree(){
		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		pass = false;
		warning=0;
	}
	void GameThree::input(){
		cin >> Key_Suggest;
		checking(Key_Suggest);
		while(	next()!= true){
			cin >> Key_Suggest;
			//cout << "in while"<<endl;
			if(Key_Suggest.length() != 3){
				cout << "ATTIONSION : The password consists of three characters."<<endl;
			}
			else{
				checking(Key_Suggest);
			}
		}					
	}	
	void GameThree::print_1(){	
		//cout << "NOTICE : PASSWORD CONSISTED OF THREE CHARACTERS."<<'\n'<<"First character:CAPITAL ENGLISH WORD"<<'\n'<<"Second character:Number"<<'\n'<<"Second character:Number"<<endl;
		//cout<<"====================="<<'\n'<<'\n'<<endl;
		cout << "(guess the password !)" << endl ;
		cout << "Please Enter Password:"<<endl;
		cout << char(219)<<' '<<char(219)<<' '<<char(219)<<endl;			

	}
	string GameThree::generate_Key(){
		srand (0);
		int charNum1 = ((rand() % 26) + 1)+64;
		MainKey.push_back(char(charNum1));
		int charNum2 = rand() % 10 ;
		MainKey.push_back(char(charNum2 + 48));
		int charNum3= rand() % 10 ;
		MainKey.push_back(char(charNum3 + 48));			
		return MainKey;
	}		
	void GameThree::checking(string keyC){	
		warning = 0;
		for(int i=0; i<3 ; i++){
			if(keyC[i] != MainKey[i]){
				if(i==0){
					SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << " " ;
					SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==1){
					//cout << "The second character is wrong."<<endl;
					SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << " " ;
					SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==2){
					//cout << "The third character is wrong."<<endl;
					SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << " " ;
					SetConsoleTextAttribute(hConsole, 7);
				}
				warning++;
			}		
			if(keyC[i] == MainKey[i]){
				if(i==0){
					//cout << "The first character is True."<<endl;
					SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << " " ;
					SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==1){
					//cout << "The second character is True."<<endl;
					SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << " " ;
					SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==2){
					//cout << "The third character is True."<<endl;
					SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << " " ;
					SetConsoleTextAttribute(hConsole, 7);
				}					
			}
									
		}
		cout << endl ;	
		if(warning != 0){
			//cout << "Password is incorrect."<<endl;
		}
		else{
			pass = true;
			cout << "LOCK BREAKED"<<endl;
			sleep(2);
		}	
		//cout << "warning:"<<warning<<endl;	
		Point = Point - 20;
		//cout << Point<<endl;		
		cout << "..............."<<endl;
	}	
bool GameThree::next(){
		if(warning != 0){
			return false;
		}
		else{
			return true;
		}				
	}	
void GameThree::gamerunner(){
		this->generate_Key();
		this->print_1();
		this->input();
		return;
}

