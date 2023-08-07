// 15_printing_number_in_pattern_8

/*To print:-

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11


*/ 
#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    
    while (i<=n)
    {   int j = 1, c = i;
        while (j<=i)
        {
            cout <<c <<" ";
            c++;
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}