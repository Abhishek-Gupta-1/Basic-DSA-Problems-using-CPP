#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the Roman number : ";
    cin >> s;

    int a = 0, sum = 0;
    while (a < 15)
    {
        switch (s[a])
        {

        case 'I':
            switch (s[a + 1])
            {
            case 'V':
                sum = sum + 4;
                a = a + 2;
                break;

            case 'X':
                sum = sum + 9;
                a = a + 2;
                break;

            default:
                sum = sum + 1;
                a++;
                break;
            }
            break;

        case 'V':
            sum = sum + 5;
            a++;
            break;

        case 'X':
            switch (s[a + 1])
            {
            case 'L':
                sum = sum + 40;
                a = a + 2;
                break;

            case 'C':
                sum = sum + 90;
                a = a + 2;
                break;

            default:
                sum = sum + 10;
                a++;
                break;
            }
            break;

        case 'L':
            sum = sum + 50;
            a++;
            break;

        case 'C':
            switch (s[a + 1])
            {
            case 'D':
                sum = sum + 400;
                a = a + 2;
                break;

            case 'M':
                sum = sum + 900;
                a = a + 2;
                break;

            default:
                sum = sum + 100;
                a++;
                break;
            }
            break;

        case 'D':
            sum = sum + 500;
            a++;
            break;

        case 'M':
            sum = sum + 1000;
            a++;
            break;

        default:
            a++;
            break;
        }
    }
    cout << "The Numberals are : " << sum << endl;
}