#include <iostream>
using namespace std;

//  formula of cobination are :- c = n! / r! * (n-r)!
int fact(int a)
{
    int f = 1;

    for (int i = 1; i <= a; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{

    int n, r, s, c;

    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Enter the value of r: ";
    cin >> r;

    s = fact(n - r);
    n = fact(n);
    r = fact(r);

    c = (n / (r * s));

    cout << " the value of nCr = " << c;
}