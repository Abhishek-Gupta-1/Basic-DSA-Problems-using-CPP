// 19_printing_alphabet_pattern_12

/*To print:-

A B C D 
E F G H 
I J K L 
M N O P 

*/ 

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of row/column : ";
    cin >>n;
    char x = 'A';
    
    while (i<=n)
    {   
        int j = 1;
        while (j<=n)
        {
            
            cout << x <<" ";
            x++;
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}