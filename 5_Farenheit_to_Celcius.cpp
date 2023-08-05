// 5_Farenheit_to_Celcius

#include<iostream>
using namespace std;

int main(){
    int input,cal;
    cout << "Enter the temperature in Farenheit : ";
    cin >> input;
    cal = (input - 32 ) * (0.556);
    cout << "The temperature in Celcius are : "<< cal <<endl;

}

