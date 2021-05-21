#include<iostream>

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;



class GameThree{
	private:
		string MainKey;
		int warning = 0;
		int Point = 1000;
	

	public:
	
		string generate_Key(){
			srand (time(NULL));
			int charNum1 = ((rand() % 26) + 1)+64;
			MainKey.push_back(char(charNum1));
			int charNum2 = rand() % 10 ;
			MainKey.push_back(char(charNum2 + 48));
			int charNum3= rand() % 10 ;
			MainKey.push_back(char(charNum3 + 48));			
			
			
			return MainKey;
		}	
		
		
		void checking(string keyC){
			
			
			warning = 0;
			
			for(int i=0; i<3 ; i++){
				if(keyC[i] != MainKey[i]){
					
					if(i==0){
						cout << "The first character is wrong."<<endl;
					}
					if(i==1){
						cout << "The second character is wrong."<<endl;
					}
					if(i==2){
						cout << "The third character is wrong."<<endl;
					}
					warning++;
				}
				
				
				if(keyC[i] == MainKey[i]){
					if(i==0){
						cout << "The first character is True."<<endl;
					}
					if(i==1){
						cout << "The second character is True."<<endl;
					}
					if(i==2){
						cout << "The third character is True."<<endl;
					}					
				}				
				
			}
			
			if(warning != 0){
				cout << "Password is incorrect."<<endl;
			}
			else{
				cout << "Congratulations, You have successfully logged in."<<endl;
			}
			
			cout << "warning:"<<warning<<endl;
			
			Point = Point - 15;
			cout << Point<<endl;
			
			
		}
		
		bool next(){
			if(warning != 0){
				return false;
			}
			else{
				return true;
			}			
			
			
		}

};




int main(int argc, char** argv) {
	
	
	
	string Main_Key;
	GameThree G1;
	G1.generate_Key();
	
	cout << "welcome to Stage 3 ||"<<endl;
	cout<<"====================="<<'\n'<<'\n'<<endl;
	cout << "Please Enter Key:"<<endl;
	cout << char(219)<<' '<<char(219)<<' '<<char(219)<<endl;
	
	string Key_Suggest;
	cin >> Key_Suggest;
	
	G1.checking(Key_Suggest);
	
	while(	G1.next()!= true){
		
	cin >> Key_Suggest;
	//cout << "in while"<<endl;
	if(Key_Suggest.length() != 3){
		cout << "ATTIONSION : The password consists of three characters."<<endl;
	}
	else{
		G1.checking(Key_Suggest);
	}
	}
	
	
	
	
	
	return 0;
}