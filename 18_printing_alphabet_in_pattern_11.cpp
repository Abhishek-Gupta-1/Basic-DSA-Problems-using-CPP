// 18_printing_alphabet_pattern_11

/*To print:-

A B C D E
A B C D E 
A B C D E
A B C D E 
A B C D E

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
            char ch = 'A' + j -1 ;
            cout << ch <<" ";
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}