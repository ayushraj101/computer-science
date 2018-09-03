//23. Write a C++ program to print all natural numbers in reverse (from n to 1). - using while loop
#include<iostream>
using namespace std;
int main(){
	cout<< "Hey " << endl;//hey
	int a , n ;//assi n and a
	a=1 ;//a=1
	cout<< "provide the limit from you want to see the natural counting " << endl;//ask to give n
	cin >> n ;//cin n
	while (a <= n) {//while a=n
		cout << n << ",";
		n--;
		}
	return 0;
}
