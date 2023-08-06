// 9_printing_number_in_pattern_2

// To print(no. of row and column should be same):-
// 11111
// 22222
// 33333
// 44444
// 55555

#include<iostream>
using namespace std;

int main(){

int i,n=1;
cout << "Enter your input : ";
cin >> i;

while(n <= i){
    // cout << n <<endl;
    
    int a=1;
    while (a<=i)
    {
        cout << n;
        a++;
        
    }
    cout <<endl;
    n++;
    
}

}