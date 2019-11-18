
#include "GameScene.h"
#include"MainScene.h"

GameScene::GameScene()
{
	winner = 0;
	width = 20;
	p1 = new Player(5);
	p2 = new Player(6);
}


GameScene::~GameScene()
{
	delete p1;
	delete p2;
}
void GameScene::PrintLine()
{
	system("cls");
	gotoxy(0, p1->y);
	std::cout << p1->icon;
	gotoxy(0, p2->y);
	std::cout << p2->icon;
	for (int i = 0; i < 20; i++ )
	{
		gotoxy(width, i);
		std::cout << "@";
	}
}

void GameScene::PlayGame()
{
	PrintLine();
	while (true)
	{
		if (_kbhit())
		{
			int key = _getch();
			if (key == p1->icon)
			{
				p1->Move();
			}
			if (key == p2->icon)
			{
				p2->Move();
			}
		}
		if (p1->x >= width)
		{
			winner = p1->icon;
			break;
		}
		if (p2->x >= width)
		{
			winner = p2->icon;
			break;
		}
		
	}
}

void GameScene::PrintEnding()
{
	system("cls");
	gotoxy(6, 6);
	std::cout << "winner is "<<winner << "!!!!!!";

	Sleep(2000);
}
void GameScene::CountDown()
{
	for (int i = 3; i > 0; i--)
	{
		gotoxy(0, 0);
		std::cout << i;
		Sleep(1000);
	}
	gotoxy(0, 0);
	std::cout << "Start!";
}