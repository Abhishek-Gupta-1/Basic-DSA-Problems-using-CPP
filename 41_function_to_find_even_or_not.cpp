#include<iostream>
using namespace std;
 
bool evenornot(int a){
    
    if(a%2 == 0){
        return 1;
    }
    else{
        return false;
    }
}

int main(){
int input;
cout << "Enter your number : " ;
cin >> input;
int output = evenornot(input);
output== 1 ? cout << "Even Number" <<endl  : cout << "Odd number" <<endl;
   
}