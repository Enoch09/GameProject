#include "MainScene.h"


MainScene::MainScene()
{
}


MainScene::~MainScene()
{
}

void MainScene::PrintTitle()
{
	system("cls");
	gotoxy(0, 0);
	std::cout << "Racing Game";
}
void MainScene::Input()
{
	gotoxy(6, 6);
	std::cout << "select Player1's icon :";
	std::cin >> game.p1->icon;

	gotoxy(6, 7);
	std::cout << "select Player2's icon :";
	std::cin >> game.p2->icon;
}