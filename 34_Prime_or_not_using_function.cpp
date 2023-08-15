#include<iostream>
using namespace std;
 
int primenumber(int n){
    for(int i = 2 ; i < n ; i++){
        if (n%i == 0)
        {
           return 0;
           break;
        }
    }
}
int main(){
int input;
cout << "Enter your number: " ;
cin >> input;
int output = primenumber(input);
if(output == 0){
    cout << "Entered number is not a prime number" <<endl;
}
else{
    cout << "Entered number is a prime number" <<endl;
}
}