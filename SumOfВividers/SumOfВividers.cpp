// SumOfВividers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int n;
	int count = 0;
	cout << "Enter num\n";
	cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
			count += 2;
			continue;
		}
		if (n % 3 == 0)
		{
			n /= 3;
			count += 3;
			continue;
		}
		if (n % 5 == 0)
		{
			n /= 5;
			count += 5;
			continue;
		}
		if (n % 7 == 0)
		{
			n /= 7;
			count += 7;
			continue;
		}
		if (n % 11 == 0)
		{
			n /= 11;
			count += 11;
			continue;
		}
		if (n % 13 == 0)
		{
			n /= 13;
			count += 13;
			continue;
		}
		else
		{
			count += n;
			n -= n;
			break;
		}

	}
	cout << count;
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
