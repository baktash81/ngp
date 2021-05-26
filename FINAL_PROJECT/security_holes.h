#include <iostream>
#include "random.h"
#include "member.h"
#include "map.h"
using namespace std;
#ifndef REFLEXES_SECURITY_HOLES_H
#define REFLEXES_SECURITY_HOLES_H


class Security_Holes {
public :
    void rungame();
    void set_reach_score(int Rch){
    	reach_score = Rch;
	}
    string toupper(string str);
    bool isDigit(string s);
    int tonum(string str);
    int get_score() const;
    

private:
    int score=0;
    int reach_score;
    string yn,strlvl;
    int lvl=0;
    bool status;
};


#endif //REFLEXES_SECURITY_HOLES_H
