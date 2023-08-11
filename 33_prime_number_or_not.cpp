#include <iostream>
using namespace std;

// Prime number: Which is not divisible by any number except 1 and the number itself

int main()
{
    int input, p = 2;
    cout << "Enter your number :";
    cin >> input;
    int isprime;
    while (p<input){

            if (input % p == 0)
            {
                 isprime=0;
                 break;
            }
        p++;
    }

    if (isprime == 0)
    {
        cout << "The number is not prime";
    }
    else{
        cout <<"The number is prime";
    }    
}