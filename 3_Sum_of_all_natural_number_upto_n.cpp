// 3_Sum_of_all_natural_number_upto_n

#include<iostream>
using namespace std;

int main(){
    int input, a=1, sum=0;
    cout << "Enter the value of n : " ;
    cin >> input;
    while(a <= input){
        
       sum = sum + a;
        a++;
    }
    cout <<"Sum is "<<sum<<endl;
}

 