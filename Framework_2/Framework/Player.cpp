#include"stdafx.h"
#include "Player.h"
#include"InputManager.h"


Player::Player(const wchar_t* path) : GameObject(path)
{
	moveSpeed = 3.0f;
}

void Player::Update(){
	if (InputManager::GetKeyState(VK_UP))
	{
		transform->position.y -= moveSpeed;
	}
}

Player::~Player()
{
}


