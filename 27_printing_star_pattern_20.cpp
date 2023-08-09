// 27_printing_star_pattern_20


/*To print :-


11111
 2222
  333
   44
    5

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
            cout << i;
            k--;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}