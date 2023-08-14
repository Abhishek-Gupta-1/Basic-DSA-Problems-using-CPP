#include<iostream>
using namespace std;
 
int main(){
int a,b,answer;
char input2;
cout << "Enter your first number :" ;
cin >> a;
cout << "Enter the operator : " ;
cin >> input2;
cout << "Enter your Second number : " ;
cin >> b;

switch (input2)
{
case '*' : cout<< "Answer: " << a * b <<endl;
    break;

case '+' : cout<< "Answer: " <<  a + b <<endl;
    break;

case '/' : cout<< "Answer: " <<  a / b <<endl;
    break;

case '-' : cout<<  "Answer: " <<  a - b <<endl;
    break;

default:
    break;
}
  
  
}