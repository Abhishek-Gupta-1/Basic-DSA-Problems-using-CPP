// 29_printing_star_pattern_22


/*To print :-

      1
    2 3
  4 5 6


*/ 

#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    int k =  1;
    
    while (i<=n)
    {   
       int j = n-i,p=1;
       
        while (j>0)
        {
            cout << "  ";
            j--;
        }
         while (p<=i)
        {
           
            cout << k << " ";
            p++;
            k++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}