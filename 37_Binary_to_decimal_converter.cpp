#include<iostream>
#include<math.h>

using namespace std;

 
int main(){
  
     int n;
     cout << "Enter your Binary Number: ";
     cin >> n;

    int ans = 0;
    int i = 0;
    int sum=0;
    
     while (n != 0)
     {
        int bit = n % 10;
        if (bit == 1)
        {
             sum = pow(2,i) +sum;
        }
        i++;
        n = n / 10;
     }

     cout << "Answer is : " << sum << endl;
     
  
}