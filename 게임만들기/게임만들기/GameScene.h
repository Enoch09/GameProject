#pragma once
#include"Player.h"
class GameScene
{
public:
	Player* p1;
	Player* p2;
	int width;
	char winner;

	GameScene();
	~GameScene();

	void PlayGame();
	void PrintLine();
	void CountDown();
	void PrintEnding();
};

