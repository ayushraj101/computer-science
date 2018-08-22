//Write a C++ program to calculate area of an equilateral triangle

#include<iostream>
  using namespace std;
  int main(){
cout<< "Hey user" <<endl;//greet
double a, b; //asi vari
cout<< "Enter the length of side of equilateral triangle in cm - " << endl;//ask for side
cin>> a;//cin a
b= 1.7321*a*a/4 ;//b= 1.7321*a*a/4
cout<< "Area of the triangle is " << b ;//cout area b
return 0;
}
