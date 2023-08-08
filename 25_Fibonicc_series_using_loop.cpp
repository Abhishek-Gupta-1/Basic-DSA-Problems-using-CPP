// Fibonicc_Series : 1,1,2,3,5,8,13,21

//Print Fibonicc Series upto n place 

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Nth place: ";
    cin >> n;
    int x,y,sum;
    x=0;
    y=1;

   for (int i = 0; i <= n; i++)
   {
    sum = x + y;
    cout << sum <<" ";

    x = y;
    y = sum;

    }

}