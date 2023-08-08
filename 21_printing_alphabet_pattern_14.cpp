// 21_printing_alphabet_pattern_14

/*To print:-

A 
B B 
C C C 
D D D D 
E E E E E 

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
        while (j<=i)
        {
           
            cout << x <<" ";
            
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}