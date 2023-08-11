#include<iostream>
using namespace std;
 
int primechecker(int x);

int main(){
    
int input;
cout << "Enter the nth place: ";
cin >> input;
int a = 2;
while(a<=input){
    int output = primechecker(a);
    if( output != 0){
        cout << output <<endl;
    }
    a++;
}

}

int primechecker(int x){
    int p=2;
    while (p<=x)
    {
        if(p<x){

            if ( x % p == 0)
            {
              break;
            }
            else{
                p++;
                continue;
            }
            
        }
        else{
            return x;
            
        }
      
       
    }
    

}
  


