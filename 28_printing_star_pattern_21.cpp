// 28_printing_star_pattern_21


/*To print :-

    1
   22
  333
 4444
55555

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
            cout << i;
            k--;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}