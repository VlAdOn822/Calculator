#pragma once

void PlayerMove(int currentPlayer, int& move, int matchcount);
void DrawMatches(int matchcount);
void Game(int& currentPlayer, int& matchcount);
void Win(int currentPlayer);
void AIMove(int& matchcount, int& move);
void ChangeCurrentPlayer(int& currentPlayer);
