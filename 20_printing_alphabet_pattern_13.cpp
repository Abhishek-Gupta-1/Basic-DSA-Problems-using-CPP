// 20_printing_alphabet_pattern_13

/*To print:-

A B C  
B C D
C D E

*/ 

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    char x = 'A';
    
    while (i<=n)
    {   
        int j = 1;
        char x = 'A' + i -1;
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