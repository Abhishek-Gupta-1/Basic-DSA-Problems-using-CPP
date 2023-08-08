// 17_printing_alphabet_in_pattern_10


/*To print:-

A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

*/ 

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of row/column : ";
    cin >>n;
    int x= n;
    
    while (i<=n)
    {   
        int j = 1;
        while (j<=n)
        {
            char ch = 'A' + i -1 ;
            cout << ch <<" ";
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}