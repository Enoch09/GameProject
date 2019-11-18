#include<iostream>
#include"MainScene.h"

int main()
{
	setCursorType(CursorInvisible);
	MainScene m;
	m.PrintTitle();
	m.Input();
	m.game.PlayGame();
	m.game.PrintEnding();
	m.game.CountDown();
	return 0;
}