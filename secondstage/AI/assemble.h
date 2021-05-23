#include <iostream>
using namespace std;
#include "key.h"
#include "security_holes.h"
#include "password.h"
#ifndef REZ_ASSEMBLE_GAMES
#define REZ_ASSEMBLE_GAMES
class assemble{
	public:
	bool pass;
	bool rezpass;
	bool bakpass;
	bool hesampass;
	keyGenerator first;
	Security_Holes second;
	GameThree third;
	assemble();
	void gamelogic();
	bool rez_gamerun(int);
	void rez_game_resetloose();
	bool baktash_gamerun();
	bool hesam_gamerun();
};
#endif
