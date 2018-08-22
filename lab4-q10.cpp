//Write a C++ program to enter P, T, R and calculate Compound Interest.
#include<iostream>
#include<cmath>
  using namespace std;
int main(){
cout<< "hey user" << endl;//greet
double a , p , r , n , t ;//asi varri
cout<< "Enter your values of principle then rate then number of times intrest is compounded per year then total time in year. " << endl;  //ask for p r n and t
cin >> p ;//asi value
cin >> r ;
cin >> n ;
cin >> t ;
a= p*pow(1+r/n , n/t);//A= p(1+r/n)^nt
cout<< "the compound intrest is " << (a) <<endl;//cout the compound intrest
return 0;
}
