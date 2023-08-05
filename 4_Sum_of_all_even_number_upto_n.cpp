// 4_Sum_of_all_even_number_upto_n

#include<iostream>
using namespace std;

int main(){
    int input, a=2, sum=0;
    cout << "Enter the value of n : " ;
    cin >> input;
   
        while (a <= input)
        {
           sum = sum + a;
            a = a + 2;
        }
        
    cout <<"Sum is "<<sum<<endl;
}

 