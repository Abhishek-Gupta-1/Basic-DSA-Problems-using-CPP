// 24_printing_alphabet_pattern_17


/*To print:-

D 
C D
B C D
A B C D

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
        char x = 'D' - i + 1;
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