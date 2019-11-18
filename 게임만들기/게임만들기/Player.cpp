#include"ConsoleFunctions.h"
#include "Player.h"


Player::Player(int y)
{
	this->x = 0;
	this->y = y;
}


Player::~Player()
{
}
void Player::Move()
{
	int oldx = x;
	x += 1;
	gotoxy(oldx, y);
	std::cout << " ";
	gotoxy(x, y);
	std::cout << icon;
}