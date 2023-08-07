// 14_printing_number_in_pattern_7

/*To print:-

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21


*/ 


#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    int c =1;
    while (i<=n)
    {   int j = 1;
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