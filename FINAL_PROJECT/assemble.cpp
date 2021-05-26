#include <iostream>
using namespace std;
#include "key.h"
#include "security_holes.h"
#include "assemble.h"
assemble::assemble(){
	pass = false ;
}


void assemble::gamelogic(){
	//first game :
	cout << "(Now you have to turn AI off with these security steps!)" << endl << endl ;
	sleep(2);
	cout << "This is the AI Structure use its weak points an poisen it by Injecting a code :" << endl ;
	cout << "YOU HAVE TO REACH TO SCORE 50 TO PASS." << endl ;
	final.gamerunner();
	firststagepass = final.pass;
	system("cls");
	if(firststagepass){
		cout << "Find the security holes :" << endl ;
		cout << "YOU HAVE TO REACH TO SCORE 200 TO PASS." << endl ;
		second.set_reach_score(200);
		second.rungame();
		system("cls");
		cout << "NO LIMITS JUST GUESS THE FINAL PASS (3 chars , first uppercase alphabet, two others integer) :" << endl ;
		goverment.gamerunner();	
	}
	
}

bool assemble::baktash_gamerun(int input){
	second.set_reach_score(input);
	second.rungame();
	bakpass = (second.get_score() > 200);
	return second.get_score() > 200 ;
}

bool assemble::rez_gamerun(int sc){
	if(sc != 0){
		lms.setendemtiaz(sc);
	}
	lms.gamerunner();
	rezpass = lms.pass;
	return lms.pass;
}
void assemble::rez_game_resetloose(){
	lms.resetloose();
}
bool assemble::hesam_gamerun(){
	goverment.gamerunner();
	hesampass = goverment.pass;
	return hesampass;
}

