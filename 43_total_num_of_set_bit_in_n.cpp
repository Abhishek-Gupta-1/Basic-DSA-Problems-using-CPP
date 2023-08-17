#include<iostream>
using namespace std;


int setbit(int x){
    int b,sum=0;
    while(x!=0){
    b= x&1;
    if(b==1){
        sum++;
    }
    x = x>>1;
    }
    return sum;
}
 
int main(){
int input1,input2,output;
cout << "Enter the value of n1: " ;
cin >> input1;
cout << "Enter the value of n1: " ;
cin >> input2;

output = setbit(input1) + setbit(input2);
cout << "The number of setbit in the given input are :   " << output <<endl;
}