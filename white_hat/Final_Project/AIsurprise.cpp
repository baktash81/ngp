#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "style.h"
using namespace std;
 
class Trade{
	private:
		char ret;
		float amount_stock=0;
		int cash = 10000;
		char accept;
		style color;
	public:
		Trade(){
			
		}
		
		void rungame(){
			color + 12 ;
			cout << " PC AI:";
			color + 7;
			cout << " I decided to hack the acount bank of one of the IUST Professors " <<'\n'<<endl;
			cout<<"And i do it  :] "<<endl;	
			cout << "If you accept this amount, press the A key."<<endl;
			cin >> accept;
			if(accept == 'A'){
				
				state:	system("cls");
					
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
						system("cls");
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




