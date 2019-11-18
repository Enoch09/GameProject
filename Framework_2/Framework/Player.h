#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
public:
	Player(const wchar_t* path);
	~Player();
	
	float moveSpeed;	//이동속도
	virtual void Update();	//업데이트 처리
};

