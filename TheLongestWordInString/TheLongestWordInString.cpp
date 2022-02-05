// TheLongestWordInString.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	string s, lWord;
	cout << "Enter a sentence\n";

	int maxCount = 0, count = 0;
	while (true)
	{
		cin >> s;
		string  currentWord;
		for (int i = 0; i < s.length(); i++)
		{
		    if (s[i] >= 'a' && s[i] <= 'z')
			{
				count++;
				currentWord += s[i];
				if (count > maxCount)
				{
					maxCount = count;
					lWord = currentWord;
				}
			}
			else
			{
				currentWord = "";
				count = 0;
			}
		}
		if (s[s.length() - 1] == '!' || s[s.length() - 1] == '.')
		{
			break;
		}
	} 

	cout << lWord;
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
