
#ifndef REFLEXES_MEMBER_H
#define REFLEXES_MEMBER_H
#include "random.h"
#include <string>
using namespace std;


class Member{
private :
    char width[20] = {'A','B','C','D','E','F','G','H','I','J',
                      'K','L','M','N','O','P','Q','R','S','T'};
    char character;
    char dcharacter;
    char chararray[20][20];
    string str[2];
    string position;
public:
    Member(int&);
    string get_position();
    char get_character(int i,int y) const {
        return chararray[i][y];
    }
    string get_str(int index);
};

#endif //REFLEXES_MEMBER_H
