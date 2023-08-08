// 23_printing_alphabet_pattern_16

/*To print:-

A 
B C 
C D E 
D E F G 
E F G H I 

*/ 

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    
    
    while (i<=n)
    {   
        int j = 1;
        char x = 'A' + i - 1;
        while (j<=i)
        {
           
            cout << x <<" ";
            x++;
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}