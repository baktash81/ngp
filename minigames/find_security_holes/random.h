

#ifndef REFLEXES_RANDOM_H
#define REFLEXES_RANDOM_H

class Random{
private:
    char Ascii_member;
    int different_place[2][2];
public:
    Random();
    char get_Ascii();
    friend class Member;
};
#endif //REFLEXES_RANDOM_H
