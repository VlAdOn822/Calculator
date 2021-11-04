// BiggerOrSmallerNum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter 3 nums\n";
    cin >> a >> b >> c;
    if (a > b && a > c)
    {
        if (b>c)
        {
            cout << a << b << c;
        }
        else
        {
            cout << a << c << b;
        }
    }
    if (b > a && b > c)
    {
        if (a > c)
        {
            cout << b << a << c;
        }
        else
        {
            cout << b << c << a;
        }
    }
    else
    {
        if (b > a)
        {
            cout << c << b << a;
        }
        else
        {
            cout << c << a << b;
        }
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
