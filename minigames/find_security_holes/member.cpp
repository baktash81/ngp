#include <iostream>
#include <string>
#include <cstring>
#include "member.h"
using namespace std;



Member::Member(int &level){
    Random r;
    character = r.Ascii_member;
    dcharacter = r.Ascii_member+32;
    switch (level) {
        case 1:
            for (int i =0;i<20;i++){
                for (int j = 0; j < 20; j++) {
                    if(i==r.different_place[0][0] && j==r.different_place[0][1]){
                        chararray[i][j] = dcharacter;
                        position.push_back(width[j]);position.append(to_string(i+1));
                    }
                    else
                        chararray[i][j] = character;
                }
            }
            break;
        case 2:
            for (int i =0;i<20;i++) {
                for (int j = 0; j < 20; j++) {
                    if (i == r.different_place[0][0] && j == r.different_place[0][1]) {
                        chararray[i][j] = dcharacter;
                        position.push_back(width[j]);position.append(to_string(i+1));
                        str[0].push_back(width[j]);str[0].append(to_string(i+1));

                    }
                    else if (i == r.different_place[1][0] && j == r.different_place[1][1]) {
                        chararray[i][j] = dcharacter;
                        position.push_back(width[j]);position.append(to_string(i+1));
                        str[1].push_back(width[j]);str[1].append(to_string(i+1));
                    }
                    else
                        chararray[i][j] = character;
                }
            }
            break;
    }

}
string Member::get_position() {
    return position;
}

string Member::get_str(int index) {
    return str[index];
}


