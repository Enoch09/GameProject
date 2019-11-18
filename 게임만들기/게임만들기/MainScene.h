#pragma once
#include"ConsoleFunctions.h"
#include"GameScene.h"
class MainScene
{
public:
	MainScene();
	~MainScene();

	GameScene game;

	void PrintTitle();
	void Input();

};

