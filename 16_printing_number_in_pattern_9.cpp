// 16_printing_number_in_pattern_9

/*To print:-

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1  


*/ 
#include<iostream>
using namespace std;

int main(){
    int i=1,n;
    cout << "Enter Number of line/row : ";
    cin >>n;
    int x= n;
    
    while (i<=n)
    {   int j = 1, c = i;
        while (j<=i)
        {
            cout <<c <<" ";
            c--;
            j++;
        }
        
        
        cout <<endl;
        i++;

        
    }
    
}