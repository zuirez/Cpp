/*

Write a c++ program that will
1. take user input in character from the menu to convert 
2. take user input of the convertion number in float
3. show the convertion result 
4. use switch case   

Convertion Menu :
a. in to ft [1ft = 12inch]
b. cm to m [1m = 100cm]
c. km to mile [1km = ]

*/

#include<iostream>
using namespace std;

int main()
{
    char z;
    float num, result=0;

    cout<<"Convertion menu :"<<endl;
    cout<<"a. in to ft"<<endl;
    cout<<"b. cm to m"<<endl;
    cout<<"c. km to mile"<<endl;
    cout<<"d. celsius to kelvin"<<endl;

    cout<<"Which convertion do you want to perform? Enter the letter :"<<endl;
    cin>>z;
    cout<<"Enter value :";
    cin>>num;

    switch (z)
    {
    case 'a': result=num/12;
              cout<<"Convertion result :"<<result;
              break;

    case 'b': result=num/100;
              cout<<"Convertion result :"<<result;
              break;

    case 'c': result=num/0.623;
              cout<<"Convertion result :"<<result;
              break;

    case 'd': result=num+273;
              cout<<"Convertion result :"<<result;
              break;
    
    default: cout<<"Invalid Input";
        break;
    }
}