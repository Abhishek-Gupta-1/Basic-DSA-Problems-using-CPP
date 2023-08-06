// 10_printing_number_in_pattern_3


/*To print:-
1234
1234
1234
1234
(No. of row and column should be same)*/ 


#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter the value of n: ";
    cin >>n;

    while(i <= n){
        
        int j=1;
        while(j <=n){
            cout << j;
            j++;
        }
        cout <<endl;

        i++;
    }

}