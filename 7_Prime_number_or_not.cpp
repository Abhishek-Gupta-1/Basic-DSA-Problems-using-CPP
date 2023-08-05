// 7_Prime_number_or_not

#include <iostream>
using namespace std;

int main()
{
    int input, a = 2;

    cout << "Enter your Input: ";
    cin >> input;

    if (input >= 2)
    {

        while (input > 2)
        {
            if (a < input)
            {
                if (input % a != 0)
                {
                    a++;
                }
                else
                {
                    cout << "Not a Prime Number";
                    break;
                }
            }
            else
            {
                cout << "A prime Number" << endl;
                break;
            }
        }
    }
    else
    {
        cout << "Enter larger number than 2" << endl;
    }
}