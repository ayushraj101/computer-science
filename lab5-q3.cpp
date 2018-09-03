//3. Write a C++ program to check whether a number is negative, positive or zero.

#include<iostream>
using namespace std;
int main(){
	cout<< "Hey user " << endl; ;//hey
	double a;//assi dubble 
	cout << "Give me a number I can tell if that is +ve, -ve or, zero " << endl;//ask to give the number
	cin >> a;
	if (a>0){//fro a > 0 
	cout << "it is a +ve number" << endl;//cout a is +ve
	}
	else if (a<0){//cout a is -ve
	cout << "it is a negative number" << endl;//else a = 0 
	}
	else if (a==0){//cout a is zero
	cout << "it is just zero " << endl;	
	}
	return 0;
}
