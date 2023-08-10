#include <iostream>
using namespace std;
// Fibonacci series: 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 

int main()
{

    int input, p = 1;
    cout << "Enter your number (less than 6765):";
    cin >> input;
    int a, b, sum;
     a = 0;
        b = 1;
    while (p<20)
    {
        
        sum = a + b;

      if (input == sum)
        {
            cout << "Entered number is a Fibonacci Number";
            break;
        }
        else if(sum == 6765){
            cout << "Entered number is not a Fibonacci Number";
        }
        a = b;
        b = sum;
        p++;
      
    }
}