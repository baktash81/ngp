#include<iostream>
using namespace std;

int tonum(string str){
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


bool isDigit(string s){
	// check the string is number or not
	for(int i=0;i<s.size();i++){
		if(isdigit(s[i])==false||s[i]=='.')
			return false;
	}
	return true;
}




