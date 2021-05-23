#include <iostream>
#include <unistd.h> //sleep
#include <string>
#include <cstdlib> // random
#include <unistd.h> //sleep
#include <windows.h> //changing the color
#include <fstream>
#include "keygenerator/key.h"
#include "../minigames/find_security_holes/security_holes.h"
using namespace std;
class ZeroToUniversity{
	public:
		// to activate "hack the lms"
		bool scores_checked = false;
		
		// lms hack method
		keyGenerator lms;
		
		// goverment hack method
		keyGenerator goverment;
		
		// AI hack method
		keyGenerator AI;
		Security_Holes turnoff;
		
		// score of chloe classmates and her too(first amount of "score table")
		int vahid_math = 18 ;
		int vahid_AP = 19 ;
		int vahid_physic = 16;
		int mohsen_math = 19;
		int mohsen_AP = 18;
		int mohsen_physic = 17 ;
		int chloe_math = 18 ;
		int chloe_AP = 2;
		int chloe_physic = 14 ;
		
		// email inbox
		string email[3];
		int inbox;
		
		// to check which index of inbox should be filled
		bool mohsenemailsent;
		bool vahidemailsent;
		
		// to activate hack the 158.58.187.219
		bool privatefilechecked;
		
		// "PC AI" color
		int ai_color;
		HANDLE  hConsole;
		
		// constructor
		ZeroToUniversity(){
			// first value of email inbox
			email[0] = "NONE" ;
			email[1] = "NONE" ;
			inbox = 0;
			mohsenemailsent = false;
			vahidemailsent =false;
			privatefilechecked = false;
			
			// red color for phrase "PC AI"
			ai_color = 12 ;
			
			hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		}
		
		// simple function just to print all choices in one form
		void OutputChoices(string choices[] , int len){

			for(int i = 0 ; i < len ; i++){
				cout << endl <<char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << i+1 <<" :" << choices[i] << endl ;
			}
		}
		
		// simple function just to print all Text in one form
		void OutputText(string choices[] , int len){
			cout << endl ;
			for(int i = 0 ; i < len ; i++){
				cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << choices[i] << endl ;
			}
		}
		
		// one Input place for all rooms
		void Inputplace(){
			cout << endl <<  "INPUT: " ;
		}
		
		// LMS database:
		void Indocs(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// changing the output color to red
				SetConsoleTextAttribute(hConsole, ai_color);
				
				cout << "PC AI : " ; 
				
				// change color to defualt color(7)
				SetConsoleTextAttribute(hConsole, 7);
				
				// PC AI says:
				cout << "so we are in iust datacenter. hey is that privat folder ?" << endl ;
				
				// user can choose on of these to go:
				string alpha[] = { "TABLE1_STUDENTS_SCORE" , "PRIVATE FILES" , "back"};
				
				// output choices
				OutputChoices(alpha , 3);
				
				string input;
				Inputplace();
				
				// get the users input(inju karbar tasmim migire ke koja bere)
				getline(cin , input);
				
				//check users input and call the function
				if(input == "3"){
					return;
				}else if(input == "2"){
					PrivateFiles();
				}else if(input == "1"){
					tablescores();
				}
			}
		}
		
		// private files
		void PrivateFiles(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "as you see there is some info that you can access the central park with it. \n the web address added to your browser.\n lets see what'a happeing there.'" << endl ;
				string alpha[] = { "hello" , "Dont visit this website : 158.58.187.219 "};
				ofstream privatefile("file/privatefile.txt" , ios::in || )
				OutputText(alpha , 2);
				privatefilechecked = true;
				string choic[] = {"back"};
				OutputChoices(choic , 1);
				string input;
				Inputplace();
				getline(cin , input);	
				if(input == "1"){
					return;
				}
			}
		}
		void table_edit(){
			while(true){
				system("cls");
				cout << " name : math , AP , physics " << endl;
				cout << " mohsen : "<< mohsen_math << " , " << mohsen_AP << " , " << mohsen_physic << endl ;
				cout << " vahid : "<< vahid_math << " , " << vahid_AP << " , " << vahid_physic << endl ;
				cout << " chloe : "<< chloe_math << " , " << chloe_AP << " , " << chloe_physic << endl ;
				cout << endl << "select to edit (example : vahid.math ) :" << endl;
				string choic[] = { "back"};
				OutputChoices(choic , 1);
				string input;
				Inputplace();
				getline(cin , input);
					
				int changed = 0;
				// template needed
				if(( input == "mohsen.math" || input == "mohsen.physics" ||input == "mohsen.AP" || input == "mohsen.ap" ||input == "vahid.AP" || input == "vahid.ap" ||input == "vahid.physics" ||input == "vahid.math" || input == "chloe.AP" || input == "chloe.ap" || input == "chloe.physics" || input == "chloe.math" )){
					cout << "change number to : ";
					cin >> changed;	
				}else if (input == "1"){
					
				}else{
					cout << "entry didn't found!" << endl ;
				}
				if(changed < 0 || changed > 20){
					cout << "input incorect !" << endl ;
					input = "p" ;
					sleep(2);
				}else {
					if((input == "mohsen.math" || input == "mohsen.physics" || input == "mohsen.AP" || input == "mohsen.ap") && !mohsenemailsent ){
						mohsenemailsent = true;
						inbox++;
						int index ;
						if(vahidemailsent){
							index = 1 ;
						}else{
							index = 0 ;
						}
						email[index] = "Mohsen : i feel my scores had changed but i dont know why";
					}else if((input == "vahid.math" || input == "vahid.physics" || input == "vahid.AP" || input == "vahid.ap") && !vahidemailsent){
						vahidemailsent = true;
						inbox++;
						int index ;
						if(mohsenemailsent){
							index = 1 ;
						}else{
							index = 0 ;
						}
						email[index] = "vahid : whats wrong with LMS? my scores had changed!";
					}
					if(input == "mohsen.math"){
						mohsen_math = changed;
						
					}else if(input == "mohsen.physics"){
						mohsen_physic = changed;
						
					}else if(input == "mohsen.AP" || input == "mohsen.ap" ){
						mohsen_AP = changed;
						
					}else if(input == "vahid.AP" || input == "vahid.ap"){
						vahid_AP = changed;
						
					}else if(input == "vahid.physics"){
						vahid_physic = changed;
						
					}else if(input == "vahid.math"){
						vahid_math = changed;
						
					}else if(input == "chloe.AP" || input == "chloe.ap"){
						chloe_AP = changed;
						
					}else if(input == "chloe.physics"){
						chloe_physic = changed;
						
					}else if(input == "chloe.math"){
						chloe_math = changed;
						
					}else if (input == "1"){
						return;
					}
					
				}
			}	
		}
		void tablescores(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "hey chloe ,use 'edit table' to change your scores." << endl << endl ;
				cout << " name : math , AP , physics " << endl;
				cout << " mohsen : "<< mohsen_math << " , " << mohsen_AP << " , " << mohsen_physic << endl ;
				cout << " vahid : "<< vahid_math << " , " << vahid_AP << " , " << vahid_physic << endl ;
				cout << " chloe : "<< chloe_math << " , " << chloe_AP << " , " << chloe_physic << endl ;
				string choic[] = {"edit table" ,"back"};
				OutputChoices(choic , 2);
				string input;
				Inputplace();
				getline(cin , input);	
				if(input == "2"){
					return;
				}else if(input == "1"){
					table_edit();
				}
			}
		}
		void Inscores(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				if(chloe_AP > 9){
					cout << "everything is great! :)"<< endl << endl ;
				}else{
					cout << "Ops! it seems your ap score is to slow. but i think you can hack..." << endl << endl ;
				}
				
				cout << "name : chloe" << endl ;
				cout << "lastname : clem" << endl ;
				//cout << "here is scores chart :" << endl ;
				if(chloe_math > 9){
					SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "math" <<" : " << chloe_math << endl ;
				}else{
					SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "math" <<" : " << chloe_math << endl ;
				}
				
				if(chloe_AP > 9){
					SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "AP" <<" : " << chloe_AP << endl ;
				}else{
					SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "AP" <<" : " << chloe_AP << endl ;
				}
				
				if(chloe_physic > 9){
					SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "physics" <<" : " << chloe_physic << endl ;
				}else{
					SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "physics" <<" : " << chloe_physic << endl ;
				}
				SetConsoleTextAttribute(hConsole, 7);
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
			}
			}
		}
		void Inlms(){
			
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "we are in LMS." << endl << endl ;				
				string alpha[3];
				if(!scores_checked){
					alpha[0] = "see your scores";
					alpha[1] =  "back";
					OutputChoices(alpha , 2);
					
					string input;
					Inputplace();
					getline(cin , input);
					if(input == "1"){
						Inscores();
						scores_checked = true;
					}else if(input == "2"){
						return;
					}	
				}else{
					if(!lms.pass){
						alpha[0] = "see your scores" ;
						alpha[1] = "hack the site";
						alpha[2] =  "back";
						OutputChoices(alpha , 3);
						string input;
						Inputplace();
						getline(cin , input);
						if(input == "1"){
							Inscores();
							scores_checked = true;
						}else if(input == "3"){
							return;
						}else if(input == "2"){
							lms.gamerunner();
							if(lms.pass){
								Indocs();
							}
						}
					}else{
						alpha[0] = "see your scores" ;
						alpha[1] = "see the site database (hecked early)";
						alpha[2] =  "back";
						OutputChoices(alpha , 3);
						string input;
						Inputplace();
						getline(cin , input);
						if(input == "1"){
							Inscores();
							
						}else if(input == "3"){
							return;
						}else if(input == "2"){
							Indocs();
						}
					}
				}
			}
		}
		void Inbank(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "!!! ACCESS DENIED !!!" << endl << endl ;				
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
				}
			}
		}
		void Inbours(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "!!! ACCESS DENIED !!!" << endl << endl ;
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
				}
			}
		}
		
		//final stage
		void TurnAiOff(){
			system("cls");
			SetConsoleTextAttribute(hConsole, ai_color);
			cout << " PC AI : " ; 
			SetConsoleTextAttribute(hConsole, 7);
			cout << "I'm sorry, I had to use that private data to hack VAJA." << endl << endl ;
			sleep(2);
			SetConsoleTextAttribute(hConsole, ai_color);
			cout << " PC AI : " ; 
			SetConsoleTextAttribute(hConsole, 7);
			cout << "this how my programmers coded me!" << endl << endl ;
			sleep(2);
			SetConsoleTextAttribute(hConsole, ai_color);
			cout << " PC AI : " ; 
			SetConsoleTextAttribute(hConsole, 7);
			cout << "goodbye..." << endl << endl ;
			sleep(2);
			cout << "(now you have to turn AI of with these security steps!)" << endl << endl ;
			sleep(2);
			system("cls");
			cout << "this is the AI Structure use its weak points an poisen it by Injecting a code :" << endl ;
			AI.gamerunner();
			if(AI.pass){
				turnoff.rungame();
			}
		}
		void Inhackinfo(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "let me get it for you" << endl << endl ;
				cout << "loading..." << endl ;
				sleep(2);
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "here is information :" << endl << endl ;
				cout << "name : chloe\nlastname : clem\nlocation : 0km farther\nuser IP : 85.133.195.18\nyour IP : 85.133.195.18" << endl ;
				
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "how is it possible ? you didn't access the site ..." << endl << endl ;
				
				
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					TurnAiOff();
				}
			}
		}
		void Invaja(){
			while(true){
				system("cls");
				cout << endl <<" ---------------------------------------------------" << endl ;
				cout <<"|      -    YOU CAN'T ACCESS THIS WEBSITE     -     |" << endl ;
				cout <<" ---------------------------------------------------" << endl << endl ;
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "it seem's someone is hacking this webiste before you !" << endl << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				cout <<"|   -   site is being hacked by some one else    -  |" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				string alpha[] = {"see hacker information" , "back"};
				OutputChoices(alpha , 2);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "2"){
					return;
				}else if(input == "1"){
					Inhackinfo();
				}
			}	
		}
		void Ingoverment(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "we have many access right now." << endl << endl ;
				cout << "you can access these places via our platform :" << endl;
				string alpha[] = {"bank" , "bours" , "vesarat ettelaat" ,"back"};
				OutputChoices(alpha , 4);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "4"){
					return;
				}else if(input == "1"){
					Inbank();
				}else if(input == "2"){
					Inbours();
				}else if(input == "3"){
					Invaja();
				}
			}
		}
		void InChrome(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "Internet is open ! choose the site you want to go: " << endl << endl ;
				if(privatefilechecked){
					if(!goverment.pass){
						string alpha[] = {"university LMS" , "email" , "158.58.187.219" , "back"};
						if(inbox == 1){
							alpha[1] = "email (1)";
						}else if(inbox == 2){
							alpha[1] = "email (2)";
						}
						OutputChoices(alpha , 4);
						string input;
						Inputplace();
						getline(cin , input);
						
						
						if(input == "4"){
							return;
						}else if(input == "1"){
							Inlms();
						}else if(input == "2"){
							Inemail();
						}else if(input == "3"){
							goverment.gamerunner();
							if(goverment.pass){
								Ingoverment();
							}
						}
					}else{
						string alpha[] = {"university LMS" , "email" , "158.58.187.219 (hecked early)" , "back"};
						if(inbox == 1){
							alpha[1] = "email (1)";
						}else if(inbox == 2){
							alpha[1] = "email (2)";
						}
						OutputChoices(alpha , 4);
						string input;
						Inputplace();
						getline(cin , input);
						
						
						if(input == "4"){
							return;
						}else if(input == "1"){
							Inlms();
						}else if(input == "2"){
							Inemail();
						}else if(input == "3"){	
							Ingoverment();
						}
					}

				
				}else{
					string alpha[] = {"university LMS" , "email" , "back"};
					if(inbox == 1){
						alpha[1] = "email (1)";
					}else if(inbox == 2){
						alpha[1] = "email (2)";
					}
					OutputChoices(alpha , 3);
					string input;
					Inputplace();
					getline(cin , input);
					
					
					if(input == "3"){
						return;
					}else if(input == "1"){
						Inlms();
					}else if(input == "2"){
						Inemail();
					}		
				}

			}
		}
		void Inemail(){
			
			while(true){
				system("cls");
				cout << "your inbox :" << endl ;
				if (inbox == 0){
					cout << endl <<"inbox is empty!" << endl ;
				}else{
					OutputText(email , inbox);
				}
				string a[] = {"back"};
				OutputChoices(a , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
				}
			}
		}
		void Intasks(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "let's do from the first !" << endl << endl ;
				cout << "here is your tasks:" << endl ;
				string test[] = {"check your scores in LMS" , "study for phisycs" , "study for math" , "depression test"};
				OutputText(test , 4);
				string a[] = {"back"};
				OutputChoices(a , 1);
				string g;
				Inputplace();
				getline(cin , g);
				if(g == "1"){
					return;
				}
			}
		}
		void guessthenumber(){
			// template needed
			system("cls");
			SetConsoleTextAttribute(hConsole, ai_color);
			cout << " PC AI : " ; 
			SetConsoleTextAttribute(hConsole, 7);
			cout << "enter -1 to exit" << endl << endl ;
			cout << "guess a number (1 - 100): ";
			int number = rand()%100 ;
			while(true){
				
				int input;
				
				cin >> input;
				if(input == number){
					cout << "hoooray thats true!" << endl ;
					sleep(2);
					return;
				}else if(input == -1){
					return;
				}else if(input > number){
					cout << "guess the smaller one!" << endl ;
				}else if(input < number){
					cout << "guess the bigger one!" << endl ;
				}
				cout << "number : " ;
			}
		}
		void Indesktopgame(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "games folder is open" << endl << endl ;
				string a[] = {"guess the number!" , "back"};
				OutputChoices(a , 2);
				string g;
				Inputplace();
				getline(cin , g);
				if(g == "2"){
					return;
				}else if(g == "1"){
					guessthenumber();
				}
			}
		}
		void start(){
			while(true){
				system("cls");
				SetConsoleTextAttribute(hConsole, ai_color);
				cout << " PC AI : " ; 
				SetConsoleTextAttribute(hConsole, 7);
				cout << "hello chloe, check your task managment app. " << endl << endl ;
				string a[] = {"Internet" , "task managment app" , "games" , "shutdown"};
				OutputChoices(a , 4);
				string g;
				Inputplace();
				getline(cin , g);
				if(g == "1"){
					InChrome();
				}else if(g == "2"){
					Intasks();
				}else if(g == "4"){
					cout << "bye !" ;
					return;
				}else if(g == "3"){
					Indesktopgame();
				}
			}
		}
};

int main(){
	ZeroToUniversity test;
	test.start();
	cout << "hello" ;
	return 0;
}
