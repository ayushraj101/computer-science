//Write a C++ program to enter temperature in Fahrenheit and convert to Celsius 

 #include<iostream>
   using namespace std;
    int main() {
cout << "Hey user" << endl;//gteet
double a, b ;//asi vari a b
cout << "Enter your temp in °F" << endl;//ask for temp in °F
cin >> a;//cin °F
b= a-32 *5/9 ;//ass b as a-32 *5/9
cout <<"The value in °C is " << (b) << endl;//cout b 
return 0;
}
