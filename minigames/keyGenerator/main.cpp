#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
// mini game to poison the AI
using namespace std;
class keyGenerator{
	public:
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
		string key;
		keyGenerator(){
			// constructor
			success = 0 ;
			fail = 0;
			len = 9 ;
		}
		void gamerunner(){
			// assemblening the other functions and runnig the game
			while(true){
				initialize();
				table_drawer();
				if(validator()){
					cout << "yess";
				}else{
					cout << "no" ;
				}	
			}

		}
		
		void initialize(){
			// initializing each data member each time
			first_i = rand()%len;
			first_j = rand()%len;
			second_i = rand()%len;
			second_j = rand()%len;
			
			
			// if both were the same
			while((first_i == second_i && abs(first_j-second_j) <= 1) || (first_j == second_j && abs(first_i-second_i) <= 1)){
				second_i = rand()%len;
				second_j = rand()%len;
			}
			cout << "1" << endl ;
			
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

			cout << "2" << endl ;
			
			cout << "first is : ( " <<  first_i << " , " << first_j << " )" << endl ;
			cout << "second is : ( " <<  second_i << " , " << second_j << " )" << endl ;
			// block cells initializations (j)
			blocked_j = rand()%len ;
			cout << "wall i : " << blocked_i << endl ;
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
			cout << "3" << endl ;
			// barressi konim ke sorrakh soton nayofte ro divar radif
			while(blocked_j == no_blocked_j){
				no_blocked_j = rand()%len ;
			}
			cout << "4" << endl ;
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
			cout << "5" << endl ;
			// free of block "cell" initialization (i)
			if((first_j > second_j && first_i > second_i ) || (first_j < second_j && first_i < second_i )){
				if(no_blocked_j > blocked_j){
					while( no_blocked_i <= blocked_i ){
						no_blocked_i = rand()%len ;
					}
				}else{
					while(no_blocked_i >= blocked_i){
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
			cout << "6" << endl ;
			cout << "first is : ( " <<  first_i << " , " << first_j << " )" << endl ;
			cout << "second is : ( " <<  second_i << " , " << second_j << " )" << endl ;
			cout << "wall i : " << blocked_i << endl ;
			cout << "wall j is: " << blocked_j << endl ;
			cout << "free in i wall : " << no_blocked_j << endl ;
			cout << "free in j wall : " << no_blocked_i << endl ;
		
		}
		void table_drawer(){
			// output the table and its cells
			
			cout << "table drawer is open!" << endl;
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
						cout << " 0|" ;
					}else if (i == second_i && j ==second_j) {
						cout << " 1|" ;
					}else if((i == blocked_i || j == blocked_j)){
						if(i == no_blocked_i || j ==no_blocked_j ){
							cout << "  |";
						}else{
							cout << char(178) << char(178) << "|";
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
	
		bool validator(){
			// validate the input string
			cout << "key is: " ;
			cin >> key;
			int up =0 , right=0 , left=0,down= 0;
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
};

int main(){
	keyGenerator test;
	srand(time(0));
	test.gamerunner();
	return 0;
}
