#include <iostream>
#include <cstdlib>
#include "random.h"
#include "member.h"
#include "map.h"
using namespace std;

int main() {
    srand(2);
    int score;
    while(true) {
        string yn;
        cout << "Enter the level :  ";
        int lvl;
        cin >> lvl;
        cout<<endl;
        Map m(lvl);
        m.print();
        string p, c1, c2;
        cout << endl << "what is the Position(s)? :  ";
        cin >> p;
        if(lvl==1) {
            c1 = m.get_position();
            cout << endl << "p : " << c1 << endl;
            if (p == c1 )
                cout << "Correct :)" << endl;
            else
                cout << "Incorrect :(" << endl;
        }
        else if(lvl==2){
            c1.append(m.get_str(0));c1.append(m.get_str(1));
            c2.append(m.get_str(1));c2.append(m.get_str(0));
            if(p==c1 || p==c2)
                cout << "Correct :)" << endl;
            else
                cout << "Incorrect :(" << endl;
        }
        cout<<"Would you like to play again?(y,n) :  ";cin>>yn;
        if(yn=="N" or yn=="n")
            break;
    }
    return 0;
}
