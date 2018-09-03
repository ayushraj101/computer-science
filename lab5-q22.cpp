//22. Write a C++ program to print all natural numbers from 1 to n. - using while loop
#include<iostream>
using namespace std;
int main(){
	cout<< "Hey " << endl;//hey
	int a , n ;//assi n and a
	a=1 ;//a=1
	cout<< "provide the limit till which you want to see the natural counting " << endl;//ask to give n
	cin >> n ;//cin n
	while (a <= n) {//while a=n
		cout << a << ",";
		a++;
		}	
	return 0;

}
