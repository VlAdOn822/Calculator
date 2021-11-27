#include <iostream>
#include "MatchesAI.h"
#include <cstdlib>
using namespace std;

int main()
{
	int matchcount = 20;
	int currentPlayer = 2;

	while (matchcount > 0)
	{
		Game(currentPlayer, matchcount);
	}

	Win(currentPlayer);
}

void Win(int currentPlayer)
{
	if (currentPlayer == 1)
	{
		cout << "*** YOU HAVE WON ***" << endl;
	}
	else
	{
		cout << "*** YOU HAVE LOST ***" << endl;
	}
}

void Game(int& currentPlayer, int& matchcount)
{
	int move;
	ChangeCurrentPlayer(currentPlayer);
	if (currentPlayer == 1)
	{
		DrawMatches(matchcount);
		PlayerMove(currentPlayer, move, matchcount);
	}
	else
	{
		AIMove(matchcount, move);
	}
	matchcount -= move;
}

void AIMove(int& matchcount, int& move)
{
	if (matchcount == 7 || matchcount == 3 || matchcount == 11 || matchcount == 19 || matchcount == 14)
	{
		move = 3;
	}
	else if (matchcount == 6 || matchcount == 2 || matchcount == 10 || matchcount == 18 || matchcount == 13)
	{
		move = 2;
	}
	else if (matchcount == 1 || matchcount == 5 || matchcount == 9 || matchcount == 17 || matchcount == 12)
	{
		move = 1;
	}
	else
	{
		move = rand() % 3 + 1;
	}
}

void ChangeCurrentPlayer(int& currentPlayer)
{
	currentPlayer = 3 - currentPlayer;
}

void PlayerMove(int currentPlayer, int& move, int matchcount)
{
	while (true)
	{
		cout << "It is " << matchcount << " matches. " << "Make your move: " << endl;
		cin >> move;

		if (move >= 1 && move <= 3)
		{
			break;
		}
		cout << "Move must be from 1 to 3" << endl;
	}
}

void DrawMatches(int matchcount)
{
	for (int i = 1; i <= matchcount; i++)
	{
		cout << "|";
	}
	cout << endl;
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
