//4. Write a C++ program to check whether a number is divisible by 5 and 11 or not
#include<iostream>
using namespace std;
int main(){
	cout<< "Hey " << endl;//hey
	int a ; //assi dubble 
	cout << "Give the number you wnat to check divisiblity with 11 and 5" << endl;//ask for the num
	cin >> a;
	if (a%5==0 and a%11==0){//if di by 5 and 11
		cout<< "ya, this is divisible by both 5 and 11 "<< endl;
		} 
		else if (!(a%5==0 and a%11==0))
			{cout<< "it is not divisible by 5 and 11" << endl;
	}
	return 0;
}
