// 26_printing_star_pattern_19


/*To print :-


   ****
    ***
     **
      *

*/ 

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    
    
    while (i<=n)
    {   
       int j = 1, k = n-i+1;
        while (j<i)
        {
           
            cout << " ";
            
            j++;
        }
        
        while (k>0)
        {
            cout << "*";
            k--;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}