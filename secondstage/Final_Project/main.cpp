#include <iostream>
#include <unistd.h> //sleep
#include <string>
#include <cstdlib> // random
#include <unistd.h> //sleep
#include <fstream>
#include "assemble.h"
#include "style.h"
#include "array.h"
using namespace std;
class ZeroToUniversity{
	private:
		// to activate "hack the lms"
		bool scores_checked = false;
		
		// lms hack
		assemble final;
		
		// goverment hack
		assemble goverment;
		
		// AI turn off
		assemble AI;
		
		style color;
		// score of chloe classmates and her too(first amount of "score table")
	public:
		static int hesam_math  ;
		static int hesam_AP  ;
		static int hesam_physic ;
		static int baktash_math ;
		static int baktash_AP ;
		static int baktash_physic  ;
		static int chloe_math ;
		static int chloe_AP ;
		static int chloe_physic ;
	private:	
		// email inbox
		string email[3];
		int inbox;
		//Array <string,256> gmail;
		// to check which index of inbox should be filled
		bool baktashemailsent;
		bool hesamemailsent;
		
		// to activate hack the 158.58.187.219
		bool privatefilechecked;
		
		// "PC AI" color
		int ai_color;
		// constructor
	public:
		ZeroToUniversity(){
			// first value of email inbox
			email[0] = "NONE" ;
			email[1] = "NONE" ;
			inbox = 0;
			baktashemailsent = false;
			hesamemailsent =false;
			privatefilechecked = false;
			
			// red color for phrase "PC AI"
			ai_color = 12 ;
		}
	private:
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
				color+ai_color ;
				cout << "PC AI : " ; 
				
				// change color to defualt color(7)
				color + 7 ;
				// PC AI says:
				cout << "So we are in iust datacenter. Hey is that private folder ?" << endl ;
				
				// user can choose on of these to go:
				string alpha[] = { "TABLE_STUDENTS_SCORE" , "PRIVATE FILES" , "back"};
				
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
				// clear past inputs and outputs
				system("cls");
				
				// AI output
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "As you see there is some info that you can access the ITO with it. \n The web address added to your browser.\n Lets see what's happening there." << endl ;
				
				// private file reading from "file/privatefile.txt"
				string alpha[20];
				ifstream privatefile ("file/privatefile.txt" );
				if(!privatefile){
					cout << "Error file not found!" << endl ;
				}
				string i;
				int n = 0 ;
				while(getline(privatefile , i)){
					alpha[n] = i;
					n++;
				}
				privatefile.close();
				
				// output text and check user input(inke user chikar mikhd bokone)
				OutputText(alpha , n);
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
		
		// editing the scores table(in database)
		void table_edit(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// output the table
				cout << " Name   : math , AP , physics " << endl;
				cout << " baktash : "<< baktash_math << " , " << baktash_AP << " , " << baktash_physic << endl ;
				cout << " hesam  : "<< hesam_math << " , " << hesam_AP << " , " << hesam_physic << endl ;
				cout << " chloe  : "<< chloe_math << " , " << chloe_AP << " , " << chloe_physic << endl ;
				
				// showing how it works:
				cout << endl << "Select to edit (example : hesam.math ) :" << endl;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string choic[] = { "back"};
				OutputChoices(choic , 1);
				string input;
				Inputplace();
				getline(cin , input);
					
				int changed = 0; 
				
				///////////////////// template needed/////////////////////////
				
				//check if user input is true:
				if(( input == "baktash.math" || input == "baktash.physics" ||input == "baktash.AP" || input == "baktash.ap" ||input == "hesam.AP" || input == "hesam.ap" ||input == "hesam.physics" ||input == "hesam.math" || input == "chloe.AP" || input == "chloe.ap" || input == "chloe.physics" || input == "chloe.math" )){
					cout << "Change number to : ";
					cin >> changed;	
				}else if (input == "1"){
					// back
				}else{
					// user input didnt match!
					cout << "Entry didn't found!" << endl ;
				}
				
				// check for valid input for changed score
				if(changed < 0 || changed > 20){
					cout << "input incorect !" << endl ;
					input = "p" ;
					sleep(2);
				}else {
					
					//if baktash score is changed, sent email to him
					if((input == "baktash.math" || input == "baktash.physics" || input == "baktash.AP" || input == "baktash.ap") && !baktashemailsent ){
						baktashemailsent = true;
						inbox++;
						int index ;
						if(hesamemailsent){
							index = 1 ;
						}else{
							index = 0 ;
						}
						// email content (baktash)
						email[index] = "baktash : I feel my scores had changed but I dont know why";
						
					//if hesam score is changed, sent email to him
					}else if((input == "hesam.math" || input == "hesam.physics" || input == "hesam.AP" || input == "hesam.ap") && !hesamemailsent){
						hesamemailsent = true;
						inbox++;
						int index ;
						if(baktashemailsent){
							index = 1 ;
						}else{
							index = 0 ;
						}
						// email content (hesam)
						email[index] = "hesam : Whats wrong with LMS? my scores had changed!";
					}
					
					//finally changing the score !
					if(input == "baktash.math"){
						baktash_math = changed;
						
					}else if(input == "baktash.physics"){
						baktash_physic = changed;
						
					}else if(input == "baktash.AP" || input == "baktash.ap" ){
						baktash_AP = changed;
						
					}else if(input == "hesam.AP" || input == "hesam.ap"){
						hesam_AP = changed;
						
					}else if(input == "hesam.physics"){
						hesam_physic = changed;
						
					}else if(input == "hesam.math"){
						hesam_math = changed;
						
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
		
		// normal input of the scores(in database)
		void tablescores(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "Hey chloe ,use 'edit table' to change your scores." << endl << endl ;
				
				// table
				cout << " Name   : math , AP , physics " << endl;
				cout << " baktash : "<< baktash_math << " , " << baktash_AP << " , " << baktash_physic << endl ;
				cout << " hesam  : "<< hesam_math << " , " << hesam_AP << " , " << hesam_physic << endl ;
				cout << " chloe  : "<< chloe_math << " , " << chloe_AP << " , " << chloe_physic << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
		
		// chloe scores in LMS (not database ? before hacking)
		void Inscores(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				
				// age nomre AP kam tar az 10 bood AI yechi dg bege :)
				if(chloe_AP > 9){
					cout << "Everything is great! :)"<< endl << endl ;
				}else{
					cout << "Ops! it seems your ap score is to slow. but i think you can hack..." << endl << endl ;
				}
				
				// output the information
				cout << "name : chloe" << endl ;
				cout << "lastname : clem" << endl ;
				
				// changing the color if the scores if it is less than 10 :)
				if(chloe_math > 9){
					color + 10 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "math" <<" : " << chloe_math << endl ;
				}else{
					color + 12 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "math" <<" : " << chloe_math << endl ;
				}
				
				if(chloe_AP > 9){
					color + 10 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "AP" <<" : " << chloe_AP << endl ;
				}else{
					color + 12 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "AP" <<" : " << chloe_AP << endl ;
				}
				
				if(chloe_physic > 9){
					color + 10 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "physics" <<" : " << chloe_physic << endl ;
				}else{
					color + 12 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "physics" <<" : " << chloe_physic << endl ;
				}
				
				//defualt output color
				color + 7 ;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
		
		// lms before database room
		void Inlms(){
			
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "We are in LMS." << endl << endl ;	
				
							
				string alpha[3];
				// barresi konim ke age nomre haro dide bashe baadesh betoone hack kone va gozine "hack" fa'al beshe !
				if(!scores_checked){
					//befor checking scores
					alpha[0] = "see your scores";
					alpha[1] =  "back";
					OutputChoices(alpha , 2);
					// output text and check user input(inke user chikar mikhd bokone)
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
					//after checking scores
					
					// "lms.pass" baressi konim age ghablan site ro hack karde dg lazm nabashe dobare hack kone
					if(!final.rezpass){
						
						// before hacking
						alpha[0] = "see your scores" ;
						alpha[1] = "hack the site";
						alpha[2] =  "back";
						OutputChoices(alpha , 3);
						string input;
						Inputplace();
						// output text and check user input(inke user chikar mikhd bokone)
						getline(cin , input);
						if(input == "1"){
							Inscores();
							scores_checked = true;
						}else if(input == "3"){
							return;
						}else if(input == "2"){
							system("cls");
							if(final.rez_gamerun(30)){
								Indocs();
							}else{
								final.rez_game_resetloose();
							}
						}
					}else{
						
						// after hacking
						alpha[0] = "see your scores" ;
						alpha[1] = "see the site database (hecked early)";
						alpha[2] =  "back";
						OutputChoices(alpha , 3);
						string input;
						Inputplace();
						// output text and check user input(inke user chikar mikhd bokone)
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
		
		// bank and bours room (they are the same)
		void Inbank(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "!!! ACCESS DENIED !!!" << endl << endl ;				
				
				// output text and check user input(inke user chikar mikhd bokone)
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
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "!!! ACCESS DENIED !!!" << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
		//safhe akhar ke neshun bedim bord ya na !
		void finalpage(){
			if(AI.firststagepass){
				cout <<" ---------------------------------------------------" << endl ;
				cout <<"|   -          :) AI is down. you won :)           -  |" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				exit(0);
			}else{
				cout <<" ---------------------------------------------------" << endl ;
				cout <<"|   -          :( AI stole the date. :(           -  |" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				exit(0);
			}
		}
		//final stage (az inju be baad bayad AI ro khamush koni !
		void TurnAiOff(){
			// clear past inputs and outputs
			system("cls");
			
			// AI output:
			color + ai_color ;
			cout << " PC AI : " ; 
			color + 7 ;
			cout << "I'm sorry, I had to use that private data to hack VAJA." << endl << endl ;
			sleep(2);
			color + ai_color ;
			cout << " PC AI : " ; 
			color + 7 ;
			cout << "This how my programmers coded me!" << endl << endl ;
			sleep(2);
			color + ai_color ;
			cout << " PC AI : " ; 
			color + 7 ;
			cout << "Goodbye..." << endl << endl ;
			sleep(2);
			
			
			// clear past inputs and outputs
			system("cls");
			
			// output game tips
			
			
			AI.gamelogic();
			finalpage();
		}
		
		// showning the hackers info
		void Inhackinfo(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "let me get it for you" << endl << endl ;
				cout << "loading..." << endl ;
				sleep(2);
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "Here is information :" << endl << endl ;
				cout << "Name : chloe\nlastname : clem\nlocation : 0km farther\nuser IP : 85.133.195.18\nyour IP : 85.133.195.18" << endl ;
				
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "How is it possible ? you didn't access the site ..." << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
		
		// in vesarat etelat :)
		void Invaja(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				cout << endl <<" ---------------------------------------------------" << endl ;
				cout <<"|      -    YOU CAN'T ACCESS THIS WEBSITE     -     |" << endl ;
				cout <<" ---------------------------------------------------" << endl << endl ;
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "It seem's someone is hacking this webiste before you !" << endl << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				cout <<"|   -   site is being hacked by some one else    -  |" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
		
		// dakhele portal vesrat fan avari. az in portal be marakez dg dastresi darim
		void Ingoverment(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "We have many access right now." << endl << endl ;
				cout << "You can access these places via our platform :" << endl;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
		
		// chloe browser
		void InChrome(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "Internet is open ! choose the site you want to go: " << endl << endl ;
				
				//baressi konim ke aya private file check shude ke basesh site "158.58.187.219" in ro baz konim ya na
				if(privatefilechecked){
					// private file check shude :
					
					// baressi konim k aya ghablan site ro hack karde ya na (ke dobare hack nakone
					if(!goverment.hesampass){
						//befor hacking "158.58.187.219"
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
							system("cls");
							if(goverment.hesam_gamerun()){
								Ingoverment();
							}
						}
					}else{
						//after hacking "158.58.187.219"
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
					// private file check nashude :
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
		
		// chloe email 
		void Inemail(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// email output
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
		
		// in taskmanager app
		void Intasks(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output:
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "let's do from the first !" << endl << endl ;
				cout << "here is your tasks:" << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string test[] = {"Check your scores in LMS" , "Study for physics" , "Study for math" , "Depression test"};
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
		
		//simple desktopgame (guess the password)
		void guessthenumber(){
			/////////////////// template needed /////////////////////////
			
			// clear past inputs and outputs
			system("cls");
			
			// AI output:
			color + ai_color ;
			cout << " PC AI : " ; 
			color + 7 ;
			cout << "enter -1 to exit" << endl << endl ;
			cout << "guess a number (1 - 100): ";
			
			// addad tasdofi ke bayad hads zade beshe
			float number = rand()%100 ;
			while(true){
				float input;
				cin >> input;
				if(input == number){
					cout << "Hoooray thats true!" << endl ;
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
		
		// desktop game directory
		void Indesktopgame(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				cout << "games folder is open" << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
		
		//desktop
	public:
		void start(){
			while(true){
				// clear past inputs and outputs
				system("cls");
				
				// AI output
				color + ai_color ;
				cout << " PC AI : " ; 
				color + 7 ;
				
				
				cout << "hello chloe, check your task managment app. " << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
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
int ZeroToUniversity::hesam_math = 18 ;
int ZeroToUniversity::hesam_AP = 19 ;
int ZeroToUniversity::hesam_physic = 16 ;
int ZeroToUniversity::baktash_math = 19 ;
int ZeroToUniversity::baktash_AP = 18 ;
int ZeroToUniversity::baktash_physic = 17 ;
int ZeroToUniversity::chloe_math = 18 ;
int ZeroToUniversity::chloe_AP = 2 ;
int ZeroToUniversity::chloe_physic = 14 ;
int main(){
	ZeroToUniversity test;
	srand(12);
	//run the game :
	test.start();
	
	return 0;
}
