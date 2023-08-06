// 12_printing_star_in_pattern_5

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