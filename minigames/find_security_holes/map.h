#ifndef REFLEXES_MAP_H
#define REFLEXES_MAP_H
#include "member.h"
class Map{
private :
    int level;
    Member m;Random r;
    char array[20][20];
    char width[20] = {'A','B','C','D','E','F','G','H','I','J',
                            'K','L','M','N','O','P','Q','R','S','T'};
public:
    Map(int level);
    string get_position();
    string get_str(int index);
    void print() const;
};

#endif //REFLEXES_MAP_H
