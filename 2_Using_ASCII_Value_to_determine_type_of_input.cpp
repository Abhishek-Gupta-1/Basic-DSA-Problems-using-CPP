// 2_Using_ASCII_Value_to_determine_type_of_input

#include<iostream>
using namespace std;

// ASCII DEC VALUE:- a-z = 97-122
// 0-9 = 48-57
// A-Z = 65-90
// special character = 33-47 & 58-64 & 91-96 & 123-126

int main(){
    char input;
    
    cout<< "Enter your input : ";
    cin>>input;
    if (48 <= input && input <= 57)
    {
        cout << "The first element of your input is an Integer" <<endl;
    }
    else if (97 <= input && input <= 122)
    {
       cout << "The first element of your input is a Lower Case letter" <<endl;
    }
    else if (65 <= input && input <= 90)
    {
       cout << "The first element of your input is a Upper Case letter" <<endl;
    }
    else if( 33 <= input && input <= 47 || 58 <= input && input <= 64 || 91 <= input && input <= 96 || 123 <= input && input <= 126)
    {
       cout << "The first element of your input is a Special Symbol" <<endl;
    }
    else 
    {
       cout << "Error: Retry with any input of letter or integer or special symbol type" <<endl;
    }
    
    

}