//Write a C++ program to enter length in centimeter and convert it into meter and kilometer. 

#include<iostream>
     using namespace std;
 int main(){
cout<< "hey user. " <<endl;//welocome
 double a;//varriables
cout<<"Enter the length in c.m " <<endl;//asking for length
cin >> a; //taking the value
double b; 
b = a/100;//dev by 100 and dis as meter
double c;
c=a/1000; //dev by 1000 nad dis as meter
cout << "the value in meters is " <<(b) <<endl; //dis the meter value
cout<< "the value in kilometers is " << (c) <<endl;//dis the k.m value
 return 0;
}
   
 
