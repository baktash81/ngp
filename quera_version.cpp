#include <iostream>
#include <iostream>  //output
#include <ctime>  	//timing
#include <cstdlib> // random
#include <stdio.h>
#include <time.h>
#include <unistd.h> //sleep
//#include <windows.h>
#include <string>
#include <iomanip>
using namespace std;

template <class T , int N>
class Array{
	private:
		int point;
		T stack[N];	
	public:
		Array(){point = 0;}
		void append(T input);
		T& operator[](int n){ return stack[n]; }
		bool operator+=(T input){append(input);}
		int get_point(){return point;}
};

template <class T , int N>
void Array<T,N>::append(T input){
	if(point == N){
		cout << "inbox is full :|" << endl ;
	}else{
		stack[point++] = input;
			
	}
}


class keyGenerator{
	private:
		int success ;
		int fail  ;
		int first_i ;
		int first_j ;
		int second_i ;
		int second_j ;
		int blocked_i;
		int no_blocked_j; // ---------o----------
		int blocked_j; 
		int no_blocked_i;
		int len ;
		int emtiaz;
		int number_colors;
		int block_colors;
		string key;
		int loose;
		int endemtiaz;
		//HANDLE  hConsole;
	public:
		bool pass ;
		keyGenerator(){
			// constructor
			success = 0 ;
			fail = 0;
			len = 9 ;
			pass = false;
			emtiaz  = 0 ;
			//hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
			number_colors = 10;
			block_colors = 6; 
			loose = 0;
			endemtiaz = 50;
		}
		
		void gamerunner();
		void setendemtiaz(int);
		void resetloose();
	private:	
		void initialize();	
		void table_drawer();
		bool validator();
};






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



class GameThree{
	private:
		string MainKey;
		int warning;
		int Point = 500;
		string Key_Suggest;
		//HANDLE  hConsole;
	public:
		bool pass;
		GameThree();
		void input();	
		void print_1();
		string generate_Key();	
		void checking(string keyC);
		bool next();
	public:
		void gamerunner();

};


class Random{
private:
    char Ascii_member;
    int different_place[2][2];
public:
    Random();
    char get_Ascii();
    friend class Member;
};

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


/*class style{
	public:
	HANDLE  hConsole;
	style();
	void operator+ (int input);
};
*/



class Trade{
	private:
		char ret;
		float amount_stock=0;
		int cash = 10000;
		char accept;
		//style color;
	public:
		Trade(){
			
		}
		
		void rungame(){
			//color + 12 ;
			cout << " PC AI:";
			//color + 7;
			cout << " I decided to hack the acount bank of one of the IUST Professors " <<'\n'<<endl;
			cout<<"And i do it  :] "<<endl;	
			cout << "If you accept this amount, press the A key."<<endl;
			cin >> accept;
			if(accept == 'A'){
				
				state:	//system("cls");
					
					cout << "Cash:"<<cash<<endl;
					cout << "Now, What do you want to do with your money?"<<endl;
					
					cout <<"1. buy a car"<<'\n'<<"2. buy a home"<<'\n'<<"3. Stock"<<'\n'<<"4. Finish Game"<<endl;
					
					int mode;
					cin >> mode;
					
					if(mode == 1){
						
						cout << "Purchase offers"<<endl;
						
						cout << "1.Toyota Landcruiser with 45000$"<<endl;
						cout << "2.BMW 528i with 63000$ "<<endl;
						cout << "3.Volvo XC90 with 78000$"<<endl;
						cout << "4.Kia Optima with 30000$"<<endl;
						cout << "5.Back"<<endl;
						
						
						int choose_car;
						cin >> choose_car;
						if(choose_car==1){
							cout << "Congratulations! You own a Toyota Land Cruiser."<<endl;
							cash = cash - 45000;
							cout << "cash asset:"<<cash<<endl;
						} 
						if(choose_car==2){
							cout << "Congratulations! You own a BMW 528i."<<endl;
							cash = cash - 63000;
							cout << "cash asset:"<<cash<<endl;
						} 			
						if(choose_car==3){
							cout << "Congratulations! You own a Volvo XC90."<<endl;
							cash = cash - 78000;
							cout << "cash asset:"<<cash<<endl;
						} 			
						if(choose_car==4){
							cout << "Congratulations! You own a Kia Optima."<<endl;
							cash = cash - 30000;
							cout << "cash asset:"<<cash<<endl;
						}
						if(choose_car == 5){
							goto state;
						} 
						cout <<"for Return, please enter R:"<<endl;
						cin >> ret;
						if(ret=='R'){
							goto state;
						}
					}
				
					if(mode == 2){
						cout << "Purchase offers"<<endl;
						
						cout<<"1. In Turkey : 50000 $"<<'\n'<<"2. In Iran   : 110000$"<<'\n'<<"3. In Spain  : 90000 $"<<'\n'<<"4. In UAE    : 100000$"<<'\n'<<"5.Back"<<endl;
						
						int choose_home;
						cin >> choose_home;
						if(choose_home == 1){
							if(cash>50000){
								cout << "Congratulations! You own a home in Turkey."<<endl;
								cash -= 50000;	
							}	
							else{
								cout<<"Sorry, your balance in not enough."<<endl;
							}
						}
						if(choose_home == 2){
							if(cash>110000){
								cout << "Congratulations! You own a home in Iran."<<endl;
								cash -= 110000;	
							}	
							else{
								cout<<"Sorry, your balance in not enough."<<endl;
							}
						}
						if(choose_home == 3){
							if(cash>90000){
								cout << "Congratulations! You own a home in Spain."<<endl;	
								cash -= 90000;	
							}	
							else{
								cout<<"Sorry, your balance in not enough."<<endl;
						}
					}
						if(choose_home == 4){
							if(cash>100000){
								cout << "Congratulations! You own a home in UAE."<<endl;
								cash -= 100000;	
							}	
							else{
								cout<<"Sorry, your balance in not enough."<<endl;				
						}				
					}
					
						if(choose_home == 5){
							goto state;
						}
						
					cout << "cash asset:"<<cash<<endl;
					cout <<"for Return, please enter R:"<<endl;
						cin >> ret;
						if(ret=='R'){
							goto state;
						}
				}
				
				
				
					if(mode == 3){
						cout << "You Can Trade with apple stock in a week."<<'\n'<<"Oscillation range: -30% to +30%"<<endl;
						cout <<"Are you ready?(Enter R)"<<endl;
						char ready;
						cin >> ready;
						if(ready == 'R'){
						//system("cls");
						cout << "Apple stock"<<endl;
						float price = 110;
						srand(time(NULL));
						float Changes;
						int b = (2*(price*0.3));
						float a = rand() % b ;
						if(a>(price*0.3)){
							Changes = (+1)*(a);
						}
						if(a<(price*0.3)){
							Changes = (-1)*(a);
						}
						price += Changes;
						
						
						cout << price<<endl;
						
						cout<<"What do you want to do?"<<'\n'<<"1.Buy"<<'\n'<<"2.Sell"<<'\n'<<"3.Back"<<endl;
						
						int bs;
						cin >> bs;
						
						if(bs==1){
							cout << "Cash Asset:"<<cash<<endl;	
							cout<<"How many of this stock do you want?"<<endl;
							
							float amount_buy;
							cin >> amount_buy;
							float Payable = amount_buy*price;
							
							
							if(Payable <= cash ){
								cout << "OK"<<endl;
								amount_stock += amount_buy;
								cash -= Payable;
								cout << "Your Apple stock assets:"<<amount_stock<<endl;
								cout << "Your Cash Asset :"<<cash<<endl;
							}
							
							else{
								cout << "Sorry, Your balace in not enough."<<endl;
							}
							
						}
						if(bs==2){
							
							cout << "Your Apple stock assets:"<<amount_stock<<endl;
							
							cout << "How much of your stock do you want to sell?"<<endl;
							
							float amount_sell;
							cin >>amount_sell;
							
							if(amount_sell >= amount_stock){
								amount_stock -= amount_sell;
								cout << "Successfully sold "<<  amount_sell   <<" shares of Apple stock."<<endl;
								cash += (price * amount_sell);
								
									
							}
							else{
								cout <<"Sorry, Your balance is not enough"<<endl;
							}
							cout << "stock assets:"<<amount_stock<<endl;
						}
							if(bs==3){
								goto state;
							}
						cout <<"for Return, please enter R:"<<endl;
						cin >> ret;
						if(ret=='R'){
							goto state;
						}
					}
						}
					
						
					if(mode == 4){
						
					}
				
			}
		}
};



void keyGenerator::gamerunner(){
			// assemblening the other functions and runnig the game
			
			while(true){
				initialize();
				table_drawer();
				
				if(validator()){
					cout << endl << "TRUE" << endl  ;
					emtiaz = emtiaz + 10 ;
					cout << endl;
					
				}else{
					cout << endl << "FALSE" << endl ;
					cout << endl;
					loose = loose + 1 ;
				}
				cout << "SCORE IS : " << emtiaz << endl ;
				cout << "YOU CAN TYR " << (3  - loose) << " MORE TIMES !" << endl ;
				//sleep(1);
				if(emtiaz == 20){
					len = 10;
				}else if (emtiaz == endemtiaz){
					pass = true;
					break;
				}else if(emtiaz == 30){
					len = 11;
				}else if(emtiaz == 40){
					len = 12;
				}else if(emtiaz == 50){
					len = 13;
				}
				
				if (loose == 3){
					pass = false;
					break;
				}
			}
			
}
void keyGenerator::setendemtiaz(int input){
	// gozashan emtiaz nahayi
	endemtiaz = input ;
}
void keyGenerator::initialize(){
			// initializing each data member each time
			first_i = rand()%len;
			first_j = rand()%len;
			second_i = rand()%len;
			second_j = rand()%len;
			
			
			// if both were the same
			while((abs(first_j-second_j) <= 1) || (abs(first_i-second_i) <= 1)){
				second_i = rand()%len;
				second_j = rand()%len;
			}
			
			// block cells initializations (i)
			blocked_i = rand()%len ;
			//check if it has same value as 0 and 1 i's and check if the wall is between these to cells
			if(first_i > second_i ){
				while(blocked_i == first_i ||  blocked_i == second_i || blocked_i > first_i ||  blocked_i < second_i ){
					blocked_i = rand()%len ;
				}
			}else if(first_i < second_i ){
				while(blocked_i == first_i ||  blocked_i == second_i || blocked_i < first_i ||  blocked_i > second_i ){
					blocked_i = rand()%len ;
				}
			}else{
				while(blocked_i == first_i){
					blocked_i = rand()%len ;
				}
			}
			// free of block "cell" initialization (j)
			no_blocked_j = rand()%len ;

			

			// block cells initializations (j)
			blocked_j = rand()%len ;
			
			// block cells initializations (j)
			if(first_j > second_j ){
				while(blocked_j == first_j ||  blocked_j == second_j || blocked_j > first_j ||  blocked_j < second_j ){
					blocked_j = rand()%len ;
				}
			}else if(first_j < second_j ){
				while(blocked_j == first_j ||  blocked_j == second_j || blocked_j < first_j ||  blocked_j > second_j ){
					blocked_j = rand()%len ;
				}
			}else{
				while(blocked_j == first_j ){
					blocked_j = rand()%len ;
				}
			}
			
			// barressi konim ke sorrakh soton nayofte ro divar radif
			while(blocked_j == no_blocked_j){
				no_blocked_j = rand()%len ;
			}
			
			no_blocked_i = rand()%len ;
			if(first_j == second_j && first_i != second_i){
				if(blocked_j > first_j){
					while(blocked_j <= no_blocked_j){
						no_blocked_j = rand()%len ;
					}	
				}else{
					while(blocked_j >= no_blocked_j){
						no_blocked_j = rand()%len ;
					}
				}
			}else if(first_j != second_j && first_i == second_i){
				if(blocked_i > first_i){
					while(blocked_i <= no_blocked_i){
						no_blocked_i = rand()%len ;
					}	
				}else{
					while(blocked_i >= no_blocked_i){
						no_blocked_i = rand()%len ;
					}
				}
			}
			
			// free of block "cell" initialization (i)
			if((first_j > second_j && first_i > second_i ) || (first_j < second_j && first_i < second_i )){
				if(no_blocked_j > blocked_j){
					while( no_blocked_i >= blocked_i ){
						no_blocked_i = rand()%len ;
					}
				}else{
					while(no_blocked_i <= blocked_i){
						no_blocked_i = rand()%len ;
					}
				}
			}else if((first_j < second_j && first_i > second_i) || (first_j > second_j && first_i < second_i)){
				if(no_blocked_j > blocked_j){
					while(no_blocked_i <= blocked_i ){
						no_blocked_i = rand()%len ;
					}
				}else{
					while(no_blocked_i >= blocked_i){
						no_blocked_i = rand()%len ;
					}
				}
			}
			
			// these couts are for testing
			/*
			cout << "6" << endl ;
			cout << "first is : ( " <<  first_i << " , " << first_j << " )" << endl ;
			cout << "second is : ( " <<  second_i << " , " << second_j << " )" << endl ;
			cout << "wall i : " << blocked_i << endl ;
			cout << "wall j is: " << blocked_j << endl ;
			cout << "free in i wall : " << no_blocked_j << endl ;
			cout << "free in j wall : " << no_blocked_i << endl ;
			*/
}

void keyGenerator::table_drawer(){
			// output the table and its cells
			cout << "    " ;
			for(int i =0 ; i < len ; i++){
				if(i >= 9){
					cout << i <<" " ;
				}else{
					cout << i <<"  " ;
				}
			}
			cout << endl ;
			cout << "   " ;
			for(int i =0 ; i < len ; i++){
				cout << "---" ;
			}
			cout << endl ;
			// main table
			for(int j = 0 ; j < len ; j++){
				// j axis
				
				if(j >= 10){
					cout << j <<"|" ;
				}else{
					cout << j <<" |" ;
				}
				//entries :
				for(int i =0 ; i < len ; i++){
					if(i == first_i && j ==first_j){
						//SetConsoleTextAttribute(hConsole, number_colors);
						cout << " 0" ;
						//SetConsoleTextAttribute(hConsole, 15);
						cout << "|";
					}else if (i == second_i && j ==second_j) {
						//SetConsoleTextAttribute(hConsole, number_colors);
						cout << " 1" ;
						//SetConsoleTextAttribute(hConsole, 15);
						cout << "|";
					}else if((i == blocked_i || j == blocked_j)){
						if(i == no_blocked_i || j ==no_blocked_j ){
							cout << "  |";
						}else{
							//color the block: 10 -> green
							//SetConsoleTextAttribute(hConsole, block_colors);
							cout << char(178) << char(178) ;
							//set back to defualt: 15 -> white
							//SetConsoleTextAttribute(hConsole, 15);
							cout << "|";
						}
					}else{
						cout << "  |";
					}	
				}
				cout << endl ;
				cout << "   " ;
				for(int i =0 ; i < len ; i++){
					cout << "---" ;
				}
				cout << endl ;
			}
}
void keyGenerator::resetloose(){
	loose = 0;
}
bool keyGenerator::validator(){
			// validate the input string
			cout << "INPUT THE KEY : " ;
			//cin >> key;
			getline(cin , key);
			
			int i_go = first_i ;
			int j_go = first_j ;
			for(int i =0; key[i] != '\0' ; i++){
				if(key[i] == 'w' || key[i] == 'W'){
					j_go--;
				}else if (key[i] == 'A' || key[i] == 'a'){
					i_go--;
				}else if(key[i] == 's' || key[i] == 'S'){
					j_go++;
				}else if(key[i] == 'd' || key[i] == 'D'){
					i_go++;
				}
				if(i_go == blocked_i){
					if(j_go != no_blocked_j){
						return 0;
					}
				}
				if(j_go == blocked_j){
					if(i_go != no_blocked_i){
						return 0;
					}
				}
			}
			
			if(i_go == second_i && j_go == second_j){
				return true;
			}else{
				return false;
			}
		}


Map::Map(int level):m(level) {this->level = level;}
void Map::print() const {
    const char separator= ' ';
    const int numWidth= 3;
    //HANDLE  hConsole;
    //hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for(int y=0;y<21;y++) {
        if(y==0) {
            cout<<"   ";
            for (int i = 0; i < 4; i++)
                cout << "  ";
            for (int i = 1; i < 21; i++) {
                //SetConsoleTextAttribute(hConsole, 10);
                cout << left << setw(numWidth) << setfill(separator) << i;
            }
            cout << endl;
        }
        else {
            for (int j = 0; j < 4; j++)
                cout << "  ";
            //SetConsoleTextAttribute(hConsole, 4);
            cout << width[y-1] << "  ";
            //SetConsoleTextAttribute(hConsole, 9);
            for (int i = 0; i < 20; i++) {
                    cout << left << setw(numWidth) << setfill(separator) << m.get_character(i, y-1);
            }
            //SetConsoleTextAttribute(hConsole, 15);
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


string tostring(int num){
    string s="";
    if(num<10){
        char c = num+'0';
        s.push_back(c);
    }
    else if (num>=10){
        char d = (num/10)+'0';
        s.push_back(d);
        char y = (num%10)+'0';
        s.push_back(y);
    }
    return s;
}

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
                        position.push_back(width[j]);position.append(tostring(i+1));
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
                        position.push_back(width[j]);position.append(tostring(i+1));
                        str[0].push_back(width[j]);str[0].append(tostring(i+1));

                    }
                    else if (i == r.different_place[1][0] && j == r.different_place[1][1]) {
                        chararray[i][j] = dcharacter;
                        position.push_back(width[j]);position.append(tostring(i+1));
                        str[1].push_back(width[j]);str[1].append(tostring(i+1));
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

	GameThree::GameThree(){
		//hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		pass = false;
		warning=0;
		
	}
	void GameThree::input(){
		cin >> Key_Suggest;
		checking(Key_Suggest);
		while(	next()!= true){
			cin >> Key_Suggest;
			//cout << "in while"<<endl;
			if(Key_Suggest.length() != 3){
				cout << "ATTIONSION : The password consists of three characters."<<endl;
			}
			else{
				checking(Key_Suggest);
			}
		}					
	}	
	void GameThree::print_1(){	
		//cout << "NOTICE : PASSWORD CONSISTED OF THREE CHARACTERS."<<'\n'<<"First character:CAPITAL ENGLISH WORD"<<'\n'<<"Second character:Number"<<'\n'<<"Second character:Number"<<endl;
		//cout<<"====================="<<'\n'<<'\n'<<endl;
		//cout << "(guess the password !)" << endl ;
		cout << "Please Enter Password:"<<endl;
		cout << char(219)<<' '<<char(219)<<' '<<char(219)<<endl;			

	}
	string GameThree::generate_Key(){
		
		int charNum1 = ((rand() % 26) + 1)+64;
		MainKey.push_back(char(charNum1));
		int charNum2 = rand() % 10 ;
		MainKey.push_back(char(charNum2 + 48));
		int charNum3= rand() % 10 ;
		MainKey.push_back(char(charNum3 + 48));			
		return MainKey;
	}		
	void GameThree::checking(string keyC){	
		warning = 0;
		for(int i=0; i<3 ; i++){
			if(keyC[i] != MainKey[i]){
				if(i==0){
					//SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << " " ;
					//SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==1){
					//cout << "The second character is wrong."<<endl;
					//SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << " " ;
					//SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==2){
					//cout << "The third character is wrong."<<endl;
					//SetConsoleTextAttribute(hConsole, 12);
					cout << char(219) << " " ;
					//SetConsoleTextAttribute(hConsole, 7);
				}
				warning++;
			}		
			if(keyC[i] == MainKey[i]){
				if(i==0){
					//cout << "The first character is True."<<endl;
					//SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << " " ;
					//SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==1){
					//cout << "The second character is True."<<endl;
					//SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << " " ;
					//SetConsoleTextAttribute(hConsole, 7);
				}
				if(i==2){
					//cout << "The third character is True."<<endl;
					//SetConsoleTextAttribute(hConsole, 10);
					cout << char(219) << " " ;
					//SetConsoleTextAttribute(hConsole, 7);
				}					
			}
									
		}
		cout << endl ;	
		if(warning != 0){
			//cout << "Password is incorrect."<<endl;
		}
		else{
			pass = true;
			cout << "LOCK BREAKED"<<endl;
			//sleep(2);
		}	
		//cout << "warning:"<<warning<<endl;	
		Point = Point - 20;
		//cout << Point<<endl;		
		cout << "..............."<<endl;
	}	
bool GameThree::next(){
		if(warning != 0){
			return false;
		}
		else{
			return true;
		}				
	}	
void GameThree::gamerunner(){
		this->generate_Key();
		this->print_1();
		this->input();
		cin.ignore();
		return;
}

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


/*style::style(){
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}
void style::operator+ (int input){
	SetConsoleTextAttribute(hConsole, input);
}*/


class assemble{
	public:
	bool pass;
	bool rezpass;
	bool bakpass;
	bool hesampass;
	
	//final stage:
	bool firststagepass;
	
	keyGenerator lms;
	Security_Holes second;
	GameThree goverment;
	
	GameThree AIoff;
	keyGenerator final ;
	
	assemble();
	void gamelogic();
	bool rez_gamerun(int);
	void rez_game_resetloose();
	bool baktash_gamerun(int);
	bool hesam_gamerun();
};
assemble::assemble(){
	pass = false ;
}


void assemble::gamelogic(){
	//first game :
	cout << "(Now you have to turn AI off with these security steps!)" << endl << endl ;
	//sleep(2);
	cout << "This is the AI Structure use its weak points an poisen it by Injecting a code :" << endl ;
	cout << "YOU HAVE TO REACH TO SCORE 50 TO PASS." << endl ;
	final.gamerunner();
	firststagepass = final.pass;
	//system("cls");
	if(firststagepass){
		cout << "Find the security holes :" << endl ;
		cout << "YOU HAVE TO REACH TO SCORE 200 TO PASS." << endl ;
		second.set_reach_score(200);
		second.rungame();
		//system("cls");
		cout << "NO LIMITS JUST GUESS THE FINAL PASS (3 chars , first uppercase alphabet, two others integer) :" << endl ;
		goverment.gamerunner();	
	}
	
}

bool assemble::baktash_gamerun(int input){
	second.set_reach_score(input);
	second.rungame();
	bakpass = (second.get_score() > 200);
	return second.get_score() > 200 ;
}

bool assemble::rez_gamerun(int sc){
	if(sc != 0){
		lms.setendemtiaz(sc);
	}
	lms.gamerunner();
	rezpass = lms.pass;
	return lms.pass;
}
void assemble::rez_game_resetloose(){
	lms.resetloose();
}
bool assemble::hesam_gamerun(){
	goverment.gamerunner();
	hesampass = goverment.pass;
	return hesampass;
}
class ZeroToUniversity{
	private:
		// to activate "hack the lms"
		bool scores_checked = false;
		
		// lms hack
		assemble final;
		
		// goverment hack
		assemble goverment;
		
		// AI turn off
		assemble AI;
		
		// desktop game
		Trade suprise;
		
		//style color;
		// score of chloe classmates and her too(first amount of "score table")
	public:
		static int hesam_math  ;
		static int hesam_AP  ;
		static int hesam_physic ;
		static int baktash_math ;
		static int baktash_AP ;
		static int baktash_physic  ;
		static int chloe_math ;
		static int chloe_AP ;
		static int chloe_physic ;
	private:	
		// email inbox
		Array <string,256> gmail;
		
		// to check which index of inbox should be filled
		bool baktashemailsent;
		bool hesamemailsent;
		
		// to activate hack the 158.58.187.219
		bool privatefilechecked;
		
		// "PC AI" color
		int ai_color;
		// constructor
	public:
		ZeroToUniversity(){
			// first value of email inbox
			baktashemailsent = false;
			hesamemailsent =false;
			privatefilechecked = false;
			
			// red color for phrase "PC AI"
			ai_color = 12 ;
		}
	private:
		// simple function just to print all choices in one form
		void OutputChoices(string choices[] , int len){

			for(int i = 0 ; i < len ; i++){
				cout << endl <<char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << i+1 <<" :" << choices[i] << endl ;
			}
		}
		
		// simple function just to print all Text in one form
		void OutputText(string choices[] , int len){
			cout << endl ;
			for(int i = 0 ; i < len ; i++){
				cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << choices[i] << endl ;
			}
		}
		
		// change the string format of number to integer format
		int tonum(string str){
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
		
		// check the string is number or not
		bool isDigit(string s){
			
			for(int i=0;i<s.size();i++){
				if(isdigit(s[i])==false||s[i]=='.')
					return false;
			}
			return true;
		}
		
		// output email
		void OutputEmail(){
			cout << endl ;
			for(int i = 0 ; i < gmail.get_point() ; i++){
				cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << gmail[i] << endl ;
			}
		}
		// one Input place for all rooms
		void Inputplace(){
			cout << endl <<  "INPUT:"<<endl ;
		}
		
		// LMS database:
		void Indocs(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// changing the output color to red
				//color+ai_color ;
				cout << "PC AI : " ; 
				
				// change color to defualt color(7)
				//color + 7 ;
				// PC AI says:
				cout << "So we are in iust datacenter. Hey is that private folder ?" << endl ;
				
				// user can choose on of these to go:
				string alpha[] = { "TABLE_STUDENTS_SCORE" , "PRIVATE FILES" , "back"};
				
				// output choices
				OutputChoices(alpha , 3);
				
				string input;
				Inputplace();
				
				// get the users input(inju karbar tasmim migire ke koja bere)
				getline(cin , input);
				
				//check users input and call the function
				if(input == "3"){
					return;
				}else if(input == "2"){
					PrivateFiles();
				}else if(input == "1"){
					tablescores();
				}
			}
		}
		
		// private files
		void PrivateFiles(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "As you see there is some info that you can access the ITO with it. \n The web address added to your browser.\n Lets see what's happening there." << endl ;
				
				// private file reading from "file/privatefile.txt"
				/*string alpha[20];
				ifstream privatefile ("file/privatefile.txt" );
				if(!privatefile){
					cout << "Error file not found!" << endl ;
				}
				string i;
				int n = 0 ;
				while(getline(privatefile , i)){
					alpha[n] = i;
					n++;
				}
				privatefile.close();*/
				string alpha[11] = {"	    in the name of god",
						"we put our information for researches",
						"about our data. use this information",
						"to access our portal and datacenter.",
						"\n",
						"URL : 158.58.187.219",
						"Tip for password:",
						" - first char : uppercase alphabet",
						" - two others : integer",
						"\n",
						"--- ITO ---"};
				int n = 11;
				// output text and check user input(inke user chikar mikhd bokone)
				OutputText(alpha , n);
				privatefilechecked = true;
				string choic[] = {"back"};
				OutputChoices(choic , 1);
				string input;
				Inputplace();
				getline(cin , input);	
				if(input == "1"){
					return;
				}
			}
		}
		
		// editing the scores table(in database)
		void table_edit(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// output the table
				cout << " Name   : math , AP , physics " << endl;
				cout << " baktash : "<< baktash_math << " , " << baktash_AP << " , " << baktash_physic << endl ;
				cout << " hesam  : "<< hesam_math << " , " << hesam_AP << " , " << hesam_physic << endl ;
				cout << " chloe  : "<< chloe_math << " , " << chloe_AP << " , " << chloe_physic << endl ;
				
				// showing how it works:
				cout << endl << "Select to edit (example : hesam.math ) :" << endl;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string choic[] = { "back"};
				OutputChoices(choic , 1);
				string input;
				Inputplace();
				getline(cin , input);
					
				string changed ; 
								
				//check if user input is true:
				if(( input == "baktash.math" || input == "baktash.physics" ||input == "baktash.AP" || input == "baktash.ap" ||input == "hesam.AP" || input == "hesam.ap" ||input == "hesam.physics" ||input == "hesam.math" || input == "chloe.AP" || input == "chloe.ap" || input == "chloe.physics" || input == "chloe.math" )){
					cout << "Change number to : ";
					cin >> changed;	
					cin.ignore();
				}else if (input == "1"){
					// back
				}else{
					// user input didnt match!
					cout << "Entry didn't found!" << endl ;
				}
				
				// check for valid input for changed score
				if(!(isDigit(changed))){
					cout << "input incorect ! (just integet)" << endl ;
					input = "p" ;
					//sleep(2);
				}else {
					int edit = tonum(changed);
					if(edit > 20){
						cout << "number should be lower than 20 :/" << endl;
						input = "p";
						//sleep(2);
					}
					//if baktash score is changed, sent email to him
					if((input == "baktash.math" || input == "baktash.physics" || input == "baktash.AP" || input == "baktash.ap") && !baktashemailsent ){
						baktashemailsent = true;
						// email content (baktash)
						string sent = "baktash : I feel my scores had changed but I dont know why";
						gmail.append(sent);
					//if hesam score is changed, sent email to him
					}else if((input == "hesam.math" || input == "hesam.physics" || input == "hesam.AP" || input == "hesam.ap") && !hesamemailsent){
						hesamemailsent = true;
						string sent = "hesam : Whats wrong with LMS? my scores had changed!";
						gmail.append(sent);
					}
					
					//finally changing the score !
					if(input == "baktash.math"){
						baktash_math = edit;
						
					}else if(input == "baktash.physics"){
						baktash_physic = edit;
						
					}else if(input == "baktash.AP" || input == "baktash.ap" ){
						baktash_AP = edit;
						
					}else if(input == "hesam.AP" || input == "hesam.ap"){
						hesam_AP = edit;
						
					}else if(input == "hesam.physics"){
						hesam_physic = edit;
						
					}else if(input == "hesam.math"){
						hesam_math = edit;
						
					}else if(input == "chloe.AP" || input == "chloe.ap"){
						chloe_AP = edit;
						
					}else if(input == "chloe.physics"){
						chloe_physic = edit;
						
					}else if(input == "chloe.math"){
						chloe_math = edit;
						
					}else if (input == "1"){
						return;
					}
					
				}
			}	
		}
		
		// normal input of the scores(in database)
		void tablescores(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "Hey chloe ,use 'edit table' to change your scores." << endl << endl ;
				
				// table
				cout << " Name   : math , AP , physics " << endl;
				cout << " baktash : "<< baktash_math << " , " << baktash_AP << " , " << baktash_physic << endl ;
				cout << " hesam  : "<< hesam_math << " , " << hesam_AP << " , " << hesam_physic << endl ;
				cout << " chloe  : "<< chloe_math << " , " << chloe_AP << " , " << chloe_physic << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string choic[] = {"edit table" ,"back"};
				OutputChoices(choic , 2);
				string input;
				Inputplace();
				getline(cin , input);	
				if(input == "2"){
					return;
				}else if(input == "1"){
					table_edit();
				}
			}
		}
		
		// chloe scores in LMS (not database ? before hacking)
		void Inscores(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				
				// age nomre AP kam tar az 10 bood AI yechi dg bege :)
				if(chloe_AP > 9){
					cout << "Everything is great! :)"<< endl << endl ;
				}else{
					cout << "Ops! it seems your ap score is to slow. but i think you can hack..." << endl << endl ;
				}
				
				// output the information
				cout << "name : chloe" << endl ;
				cout << "lastname : clem" << endl ;
				
				// changing the color if the scores if it is less than 10 :)
				if(chloe_math > 9){
					//color + 10 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "math" <<" : " << chloe_math << endl ;
				}else{
					//color + 12 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "math" <<" : " << chloe_math << endl ;
				}
				
				if(chloe_AP > 9){
					//color + 10 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "AP" <<" : " << chloe_AP << endl ;
				}else{
					//color + 12 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "AP" <<" : " << chloe_AP << endl ;
				}
				
				if(chloe_physic > 9){
					//color + 10 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "physics" <<" : " << chloe_physic << endl ;
				}else{
					//color + 12 ;
					cout << char(219) << char(219) << char(219) << char(219) << char(219) << char(219) << " " << "physics" <<" : " << chloe_physic << endl ;
				}
				
				//defualt output color
				//color + 7 ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
			}
			}
		}
		
		// lms before database room
		void Inlms(){
			
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "We are in LMS." << endl << endl ;	
				
							
				string alpha[3];
				// barresi konim ke age nomre haro dide bashe baadesh betoone hack kone va gozine "hack" fa'al beshe !
				if(!scores_checked){
					//befor checking scores
					alpha[0] = "see your scores";
					alpha[1] =  "back";
					OutputChoices(alpha , 2);
					// output text and check user input(inke user chikar mikhd bokone)
					string input;
					Inputplace();
					getline(cin , input);
					if(input == "1"){
						Inscores();
						scores_checked = true;
					}else if(input == "2"){
						return;
					}	
				}else{
					//after checking scores
					
					// "lms.pass" baressi konim age ghablan site ro hack karde dg lazm nabashe dobare hack kone
					if(!final.rezpass){
						
						// before hacking
						alpha[0] = "see your scores" ;
						alpha[1] = "hack the site";
						alpha[2] =  "back";
						OutputChoices(alpha , 3);
						string input;
						Inputplace();
						// output text and check user input(inke user chikar mikhd bokone)
						getline(cin , input);
						if(input == "1"){
							Inscores();
							scores_checked = true;
						}else if(input == "3"){
							return;
						}else if(input == "2"){
							//system("cls");
							if(final.rez_gamerun(30)){
								Indocs();
							}else{
								final.rez_game_resetloose();
							}
						}
					}else{
						
						// after hacking
						alpha[0] = "see your scores" ;
						alpha[1] = "see the site database (hecked early)";
						alpha[2] =  "back";
						OutputChoices(alpha , 3);
						string input;
						Inputplace();
						// output text and check user input(inke user chikar mikhd bokone)
						getline(cin , input);
						if(input == "1"){
							Inscores();
							
						}else if(input == "3"){
							return;
						}else if(input == "2"){
							Indocs();
						}
					}
				}
			}
		}
		
		// bank and bours room (they are the same)
		void Inbank(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "!!! ACCESS DENIED !!!" << endl << endl ;				
				
				// output text and check user input(inke user chikar mikhd bokone)
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
				}
			}
		}
		void Inbours(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "!!! ACCESS DENIED !!!" << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
				}
			}
		}
		//safhe akhar ke neshun bedim bord ya na !
		void finalpage(){
			if(AI.firststagepass){
				//color + 112;
				cout << "Well Done !" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				cout <<"|   -          :) AI is down. you won :)           -  |" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				exit(0);
			}else{
				cout <<" ---------------------------------------------------" << endl ;
				cout <<"|   -          :( AI stole the date. :(           -  |" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				exit(0);
			}
		}
		//final stage (az inju be baad bayad AI ro khamush koni !
		void TurnAiOff(){
			// clear past inputs and outputs
			//system("cls");
			
			// AI output:
			//color + ai_color ;
			cout << " PC AI : " ; 
			//color + 7 ;
			cout << "I'm sorry, I had to use that private data to hack VAJA." << endl << endl ;
			//sleep(2);
			//color + ai_color ;
			cout << " PC AI : " ; 
			//color + 7 ;
			cout << "This how my programmers coded me!" << endl << endl ;
			//sleep(2);
			//color + ai_color ;
			cout << " PC AI : " ; 
			//color + 7 ;
			cout << "Goodbye..." << endl << endl ;
			//sleep(2);
			
			
			// clear past inputs and outputs
			//system("cls");
			
			// output game tips
			
			
			AI.gamelogic();
			finalpage();
			cin.ignore();
		}
		
		// showning the hackers info
		void Inhackinfo(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "let me get it for you" << endl << endl ;
				cout << "loading..." << endl ;
				//sleep(2);
				///color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "Here is information :" << endl << endl ;
				cout << "Name : chloe\nlastname : clem\nlocation : 0km farther\nuser IP : 85.133.195.18\nyour IP : 85.133.195.18" << endl ;
				
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "How is it possible ? you didn't access the site ..." << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string alpha[] = {"back"};
				OutputChoices(alpha , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					TurnAiOff();
				}
			}
		}
		
		// in vesarat etelat :)
		void Invaja(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				cout << endl <<" ---------------------------------------------------" << endl ;
				cout <<"|      -    YOU CAN'T ACCESS THIS WEBSITE     -     |" << endl ;
				cout <<" ---------------------------------------------------" << endl << endl ;
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "It seem's someone is hacking this webiste before you !" << endl << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				cout <<"|   -   site is being hacked by some one else    -  |" << endl ;
				cout <<" ---------------------------------------------------" << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string alpha[] = {"see hacker information" , "back"};
				OutputChoices(alpha , 2);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "2"){
					return;
				}else if(input == "1"){
					Inhackinfo();
				}
			}	
		}
		
		// dakhele portal vesrat fan avari. az in portal be marakez dg dastresi darim
		void Ingoverment(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "We have many access right now." << endl << endl ;
				cout << "You can access these places via our platform :" << endl;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string alpha[] = {"bank" , "bours" , "vesarat ettelaat" ,"back"};
				OutputChoices(alpha , 4);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "4"){
					return;
				}else if(input == "1"){
					Inbank();
				}else if(input == "2"){
					Inbours();
				}else if(input == "3"){
					Invaja();
				}
			}
		}
		
		// chloe browser
		void InChrome(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "Internet is open ! choose the site you want to go: " << endl << endl ;
				
				//baressi konim ke aya private file check shude ke basesh site "158.58.187.219" in ro baz konim ya na
				if(privatefilechecked){
					// private file check shude :
					
					// baressi konim k aya ghablan site ro hack karde ya na (ke dobare hack nakone
					if(!goverment.hesampass){
						//befor hacking "158.58.187.219"
						string alpha[] = {"university LMS" , "email" , "158.58.187.219" , "back"};
						if(gmail.get_point() == 1){
							alpha[1] = "email (1)";
						}else if(gmail.get_point() == 2){
							alpha[1] = "email (2)";
						}
						OutputChoices(alpha , 4);
						string input;
						Inputplace();
						getline(cin , input);
						if(input == "4"){
							return;
						}else if(input == "1"){
							Inlms();
						}else if(input == "2"){
							Inemail();
						}else if(input == "3"){
							//system("cls");
							if(goverment.hesam_gamerun()){
								Ingoverment();
							}
						}
					}else{
						//after hacking "158.58.187.219"
						string alpha[] = {"university LMS" , "email" , "158.58.187.219 (hecked early)" , "back"};
						if(gmail.get_point() == 1){
							alpha[1] = "email (1)";
						}else if(gmail.get_point() == 2){
							alpha[1] = "email (2)";
						}
						OutputChoices(alpha , 4);
						string input;
						Inputplace();
						getline(cin , input);
						if(input == "4"){
							return;
						}else if(input == "1"){
							Inlms();
						}else if(input == "2"){
							Inemail();
						}else if(input == "3"){	
							Ingoverment();
						}
					}

				
				}else{
					// private file check nashude :
					string alpha[] = {"university LMS" , "email" , "back"};
					if(gmail.get_point() == 1){
						alpha[1] = "email (1)";
					}else if(gmail.get_point() == 2){
						alpha[1] = "email (2)";
					}
					OutputChoices(alpha , 3);
					string input;
					Inputplace();
					getline(cin , input);
					
					
					if(input == "3"){
						return;
					}else if(input == "1"){
						Inlms();
					}else if(input == "2"){
						Inemail();
					}		
				}

			}
		}
		
		// chloe email 
		void Inemail(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// email output
				cout << "your inbox :" << endl ;
				if (gmail.get_point() == 0){
					cout << endl <<"inbox is empty!" << endl ;
				}else{
					//OutputText(email , inbox);
					OutputEmail();
				}
				string a[] = {"back"};
				OutputChoices(a , 1);
				string input;
				Inputplace();
				getline(cin , input);
				if(input == "1"){
					return;
				}
			}
		}
		
		// in taskmanager app
		void Intasks(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output:
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "let's do from the first !" << endl << endl ;
				cout << "here is your tasks:" << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string test[] = {"Check your scores in LMS" , "Study for physics" , "Study for math" , "Depression test"};
				OutputText(test , 4);
				string a[] = {"back"};
				OutputChoices(a , 1);
				string g;
				Inputplace();
				getline(cin , g);
				if(g == "1"){
					return;
				}
			}
		}
		
		//simple desktopgame (guess the password)
		void guessthenumber(){
			
			// clear past inputs and outputs
			//system("cls");
			
			// AI output:
			//color + ai_color ;
			cout << " PC AI : " ; 
			//color + 7 ;
			cout << "enter -1 to exit" << endl << endl ;
			cout << "guess a number (1 - 100): ";
			
			// addad tasdofi ke bayad hads zade beshe
			int number = rand()%100 ;
			while(true){
				string input;
				int guessed;
				cin >> input;
				if(input == "-1"){
					return;
				}
				if(! isDigit(input)){
					cout << "please input an integer !" << endl;
					//sleep(1);
					continue;
				}
				guessed = tonum(input);
				if(guessed == number){
					cout << "Hoooray thats true!" << endl ;
					//sleep(2);
					return;
				}else if(guessed > number){
					cout << "guess the smaller one!" << endl ;
				}else if(guessed < number){
					cout << "guess the bigger one!" << endl ;
				}
				cout << "number : " ;
			}
		}
		void AIsurprise(){
			//system("cls");
			suprise.rungame();
		}
		// desktop game directory
		void Indesktopgame(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				cout << "games folder is open" << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string a[] = {"Guess the number!" ,"AI surprise", "back"};
				OutputChoices(a , 3);
				string g;
				Inputplace();
				getline(cin , g);
				if(g == "2"){
					AIsurprise();
				}else if(g == "1"){
					guessthenumber();
				}else if(g == "3"){
					return;
				}
			}
		}
		
		//desktop
	public:
		void start(){
			while(true){
				// clear past inputs and outputs
				//system("cls");
				
				// AI output
				//color + ai_color ;
				cout << " PC AI : " ; 
				//color + 7 ;
				
				
				cout << "hello chloe, check your task managment app. " << endl << endl ;
				
				// output text and check user input(inke user chikar mikhd bokone)
				string a[] = {"Internet" , "task managment app" , "games" , "shutdown"};
				OutputChoices(a , 4);
				string g;
				Inputplace();
				getline(cin , g);
				if(g == "1"){
					InChrome();
				}else if(g == "2"){
					Intasks();
				}else if(g == "4"){
					cout << "bye !" ;
					return;
				}else if(g == "3"){
					Indesktopgame();
				}
			}
		}
};
int ZeroToUniversity::hesam_math = 18 ;
int ZeroToUniversity::hesam_AP = 19 ;
int ZeroToUniversity::hesam_physic = 16 ;
int ZeroToUniversity::baktash_math = 19 ;
int ZeroToUniversity::baktash_AP = 18 ;
int ZeroToUniversity::baktash_physic = 17 ;
int ZeroToUniversity::chloe_math = 18 ;
int ZeroToUniversity::chloe_AP = 2 ;
int ZeroToUniversity::chloe_physic = 14 ;
int main(){
	ZeroToUniversity test;
	srand(12);
	//run the game :
	string a;
	getline(cin,a);
	//cin.ignore();
	test.start();
	
	return 0;
}

