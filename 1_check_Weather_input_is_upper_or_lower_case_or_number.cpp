// 1_check_Weather_input_is_upper_or_lower_case_or_number

#include<iostream>
using namespace std;


int main(){
    char input;
    
    cout<< "Enter your input : ";
    cin>>input;
    if ('0' <= input && input <= '9')
    {
        cout << "The first element of your input is an Integer" <<endl;
    }
    else if ('a' <= input && input <= 'z')
    {
       cout << "The first element of your input is a Lower Case letter" <<endl;
    }
    else if ('A' <= input && input <= 'Z')
    {
       cout << "The first element of your input is a Upper Case letter" <<endl;
    }
    else
    {
       cout << "Error: Retry with any input of letter or integer type" <<endl;
    }
    
    

}