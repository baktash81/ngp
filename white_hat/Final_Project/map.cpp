#include <iostream>
#include "map.h"
#include <stdlib.h>
#include <fstream>
#include <unistd.h>
#include <windows.h>
#include <iomanip>
using namespace std;
Map::Map(int level):m(level) {this->level = level;}
void Map::print() const {
    const char separator= ' ';
    const int numWidth= 3;
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int y=0;y<21;y++) {
        if(y==0) {
            cout<<"   ";
            for (int i = 0; i < 4; i++)
                cout << "  ";
            for (int i = 1; i < 21; i++) {
                SetConsoleTextAttribute(hConsole, 10);
                cout << left << setw(numWidth) << setfill(separator) << i;
            }
            cout << endl;
        }
        else {
            for (int j = 0; j < 4; j++)
                cout << "  ";
            SetConsoleTextAttribute(hConsole, 4);
            cout << width[y-1] << "  ";
            SetConsoleTextAttribute(hConsole, 9);
            for (int i = 0; i < 20; i++) {
                    cout << left << setw(numWidth) << setfill(separator) << m.get_character(i, y-1);
            }
            SetConsoleTextAttribute(hConsole, 15);
            cout<<endl;
        }
    }
    cout<<endl;

}
string Map::get_position() {
    return m.get_position();
}
string Map::get_str(int index) {
    return m.get_str(index);
}

