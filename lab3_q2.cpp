//Write a C++ program to use arithmetic operators on two numbers (You are supposed to declare two variables with integer/float values and work the rest of the problem with them) and find their sum, difference, multiply, divide and modulus (Remainder) and display them individually.

//including library 
#include <iostream>
using namespace std;
int main (){
//introduction
cout << "hey everyone"<<endl;
//assining values
int a, b;
int sum;
int sub;
int multiply;
int divide;
int mod;
 a = 525;
 b = 241; 
 sum = a+b;
 sub = a-b;
 multiply = a*b;
 divide = a/b;
 mod = a%b;
//displaying the indivsual values
cout << "sum of a and b = " << (sum) <<endl;
cout << "difference betweed a and b = " << (sub) <<endl;
cout << "product of a and b =" << (multiply) <<endl;
cout << "a divided by b = " << (divide) <<endl;
cout << "reminder of a and b = " << (mod) <<endl; 
return 0;
}
