// 11_printing_number_in_pattern_4

/*To print:-
123
456
789
*/ 


#include<iostream>
using namespace std;

int main(){
    int i=1,n,pr=1;
    cout << "Enter the value of n: ";
    cin >>n;

    while(i <= n){
       int j=1;
       while(j <= n){
        cout << pr << " " ;
        pr++;
        j++;
       }
        cout << endl ;
        i++;
    }

}