//Write a C++ program to convert days into years, weeks and days. 
   #include<iostream>
      using namespace std;
      int main(){
cout << "Hey user" <<endl;//greet
int a, b, c, d, e, f, g ;//asi int 
cout << "Enter the no. of days u want to convert." <<endl;//ask no of days
cin >> a ; //cin a
b= a/365; //asi b=a/365
c= a%365; //asi c=a%365
d=c/30; //asi d=c/30
e=c%30; //asi e=c%30
f=e/7; //asi f=e/7
g=e%7; //asi g=e%7
cout << a << " is equal to " <<(b) <<" years " <<(d) <<" mounths " << (f) << " weaks and " <<(g) << " days. " << endl; //give everything as cout
return 0;
}
