#pragma once
#include "GameObject.h"
class Player :
	public GameObject
{
public:
	Player(const wchar_t* path);
	~Player();
	
	float moveSpeed;	//�̵��ӵ�
	virtual void Update();	//������Ʈ ó��
};

