#include "security_holes.h"
#include <iostream>
#include <cstdlib>
using namespace std;

string Security_Holes::toupper(string str) {
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i]) && islower(str[i]))
            str[i] = str[i]-32;
    }
    return str;
}

bool Security_Holes::isDigit(string s) {
    // check the string is number or not
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])==false)
            return false;
    }
    return true;
}

int Security_Holes::tonum(string str) {
    // change the string format of number to integer format
    char * arr;
    int x=0;
    arr = new char [str.length()];
    for(int i=0;i<str.length();i++)
        arr[i] = str[i];
    for(int i=0;i<str.length();i++)
        x = x*10 + (arr[i]-'0');
    delete [] arr;
    return x;
}

int Security_Holes::get_score() const {
    return score;
}

void Security_Holes::rungame() {
    
    while(true) {
        status=false;
        cout << "Enter the level (level 1 : 50 scores, level 2 : 100 scores) :  ";
        cin >> strlvl;
        cout<<endl;
        if(isDigit(strlvl) && tonum(strlvl)<3 && tonum(strlvl)>0)
            lvl = tonum(strlvl);
        else
            continue;
        Map m(lvl);
        m.print();
        string p, c1, c2;
        cout << endl << "what is the Position(s)? :  ";
        cin >> p;
        p = toupper(p);
        if(lvl==1) {
            c1 = m.get_position();
            if (p == c1 ) {
                score+=50;
                cout << "Correct :)"<<endl<<"Your score in this game is : "<<score<<endl;
            }
            else
                cout << "Incorrect :(" << endl;
        }
        else if(lvl==2){
            c1.append(m.get_str(0));c1.append(m.get_str(1));
            c2.append(m.get_str(1));c2.append(m.get_str(0));
            if(p==c1 || p==c2) {
                score+=100;
                cout << "Correct :)" <<endl<<"Your score in this game is : "<<score<<endl;
            }
            else
                cout << "Incorrect :(" << endl;
        }
		if(score>=reach_score)
			break;


    }
}
