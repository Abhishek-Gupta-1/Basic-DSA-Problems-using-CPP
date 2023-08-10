// 30_printing_star_pattern_23


/*To print :-

      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1

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