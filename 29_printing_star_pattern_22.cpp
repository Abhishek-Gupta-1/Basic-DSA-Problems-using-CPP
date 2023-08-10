// 29_printing_star_pattern_22


/*To print :-

12345
 2345
  345
   45
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
       int j = i, k = i - 1;
       
        
        while (k>0)
        {
            cout << " ";
            k--;
        }
         while (j<=n)
        {
           
            cout << j;
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}