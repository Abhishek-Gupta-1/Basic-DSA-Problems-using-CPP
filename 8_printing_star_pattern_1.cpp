// 8_printing_star_pattern_1

#include<iostream>
using namespace std;

int main(){
   
    int i, n=1;
    cout <<"Enter Number of line : ";
    cin >> i;

    while (n <= i)
    {
        int j=1;
        while(j <= 5 ){
        cout << "*" ;
        j++;
        }
        n++;
        cout <<endl;
    }
    
   
}