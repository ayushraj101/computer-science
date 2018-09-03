//5. Write a C++ program to check whether a number is even or odd. 
#include<iostream>
using namespace std;
int main(){
	cout<< "Hey " << endl;//hey
	int a;//asssi variabble
	cout<< "Give me a number you want check if it is a odd or even number. " << endl;//ask for variable
	cin >> a;//cin variable
	if (a%2==0){//if % 2 ==0
	cout << "it is an even number "<<endl; //even
	} else if (a%2==1)//else not a%2 ==o
	{cout << "it is an odd number " <<endl;//cout odd
	}
	return 0;
}
