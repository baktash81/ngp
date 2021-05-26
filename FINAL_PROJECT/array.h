#include <iostream>
using namespace std;
#ifndef ARRAY_FOR_INBOX
#define ARRAY_FOR_INBOX
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
#endif
