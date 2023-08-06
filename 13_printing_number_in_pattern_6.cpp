// 13_printing_number_in_pattern_6

/*To print:-

*
**
***
****
*****

*/ 


#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter the value of n: ";
    cin >>n;

    while(i <= n){

       int j=1;
       while(j <= i){
        cout << "*" << " " ;  
        j++;
       }
        cout << endl ;
        i++;
    }

}