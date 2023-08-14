// Code to ouptput how may and which notes or coin to output if you want certain money
// let's say that the ATM have all type of money from big note to small penny


#include<iostream>
#include<cmath>

using namespace std;
 
int main(){
int input;
cout << "Enter the amount you want: " ;
cin >> input;
int ans = 0,i=0;
while (input!=0)
{
    int x = input %10;
    ans = x * pow(10,i); 
    if (i==2 && ans!=0)
    {
        ans++;
    }
    if(ans != 0){
        cout << ans << "Rupees ,";
    }
    i++;
    input = input /10;
} 
  
}