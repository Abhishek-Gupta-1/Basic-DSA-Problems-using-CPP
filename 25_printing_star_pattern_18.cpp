// 25_printing_star_pattern_18


/*To print :-

      *
     **
    ***
   ****
  *****
 ******
*******



*/ 

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    
    
    while (i<=n)
    {   
       int j = n-i, k = i;
        while (j>0)
        {
           
            cout << " ";
            
            j--;
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