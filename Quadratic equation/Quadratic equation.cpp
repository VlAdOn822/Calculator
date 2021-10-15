// Quadratic equation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a, b, c in quadratic equation\n";
    cin >> a >> b >> c;
    int d;
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        int x1, x2;
        x1 = (-b + sqrt(d)) / 2 * a;
        x2 = (-b - sqrt(d)) / 2 * a;
        cout << "x1 = " << x1 << "\n" << "x2 = " << x2;
    }
    else if (d == 0)
    {
        int x;
        x = -(b / 2 * a);
        cout << "x = " << x;
    }
    else if (d < 0)
    {
        cout << "There are no solutions";
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
