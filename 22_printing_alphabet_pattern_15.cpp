// 22_printing_alphabet_pattern_15

/*To print:-

A 
B C 
D E F 
G H I J 
K L M N O  

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