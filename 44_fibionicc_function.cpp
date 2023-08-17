#include<iostream>
using namespace std;

int fibionicc(int n){
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    int z = n-1,a = 0,b = 1,s;
    while(z!=0){
    int s = a+b;
    a = b;
    b= s;
    z--;
}
return b;

}
 
int main(){
int input;
cout << "Enter the nth number: " ;
cin >> input;
int output = fibionicc(input);
cout<< "The nth element are : " << output <<endl;  
}