#pragma once
class Player
{
public:
	int x;
	int y;
	char icon;
	Player(int y);
	~Player();
	void Move();
};

