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
	first.gamerunner();
	if(first.pass){
		second.rungame();
	}
	if(second.get_score() > 200){
		cout <<" ---------------------------------------------------" << endl ;
		cout <<"|   -           AI is down. you won :)           -  |" << endl ;
		cout <<" ---------------------------------------------------" << endl ;
	}
}

bool assemble::baktash_gamerun(){
	second.rungame();
	bakpass = (second.get_score() > 200);
	return second.get_score() > 200 ;
}

bool assemble::rez_gamerun(){
	first.gamerunner();
	rezpass = first.pass;
	return first.pass;
}

void assemble::hesam_gamerun(){
	
}

