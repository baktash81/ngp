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
	final.gamerunner();
	firststagepass = final.pass;
	
	if(final.pass){
		second.set_reach_score(200);
		second.rungame();
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

