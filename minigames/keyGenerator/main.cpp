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
		int blocked_i; // --------------------------
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
		}
		
		void initialize(){
			// initializing each data member each time
			first_i = rand()%len;
			first_j = rand()%len;
			second_i = rand()%len;
			second_j = rand()%len;
			
			
			// if both were the same
			while(first_i == second_i &&  first_j==second_j ){
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
		}
		void table_drawer(){
			// output the table and its cells
		}
	
		bool validator(){
			// validate the input string
		}
};

int main(){
	return 0;
}
