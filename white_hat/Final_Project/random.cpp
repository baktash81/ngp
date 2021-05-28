#include <iostream>
#include <cstdlib>
#include "random.h"
using namespace std;
Random::Random() {
    int min=65,max=90;
    Ascii_member = (rand()%(max-min+1))+min;
    different_place[0][0] = (rand())%20;
    different_place[0][1] = (rand())%20;
    different_place[1][0] = (rand())%20;
    different_place[1][1] = (rand())%20;
}
char Random::get_Ascii() {
    return Ascii_member;
}
