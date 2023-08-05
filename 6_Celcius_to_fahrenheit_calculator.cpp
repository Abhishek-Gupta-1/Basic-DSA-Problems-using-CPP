// 6_Celcius_to_fahrenheit_calculator

#include<iostream>
using namespace std;

int main()
{
    int input, cal;
    cout << "Enter the temperature in Celcius: ";
    cin >> input;
    cal = (input * 9/5) + 32 ;
    cout << "The temperature in faherenheit are : " << cal <<endl;


}