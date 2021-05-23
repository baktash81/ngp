#include <iostream>
using namespace std;
#include "key.h"
#include "security_holes.h"
class assemble{
	public:
	bool pass;
	bool rezpass;
	bool bakpass;
	bool hesampass;
	keyGenerator first;
	Security_Holes second;
	assemble();
	void gamelogic();
	bool rez_gamerun();
	bool baktash_gamerun();
	void hesam_gamerun();
};
