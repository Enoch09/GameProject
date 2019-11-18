#pragma once
#include "GameObject.h"
class Bullet :
	public GameObject
{
public:
	Bullet(const wchar_t* path, float speed,
		float speedRate, float angle,
		float angleRate, float damage);
	~Bullet();
	float speed;
	float speedRate;
	float angle;
	float angleRate;
	float damage;

	virtual void Update();
	virtual void Move();
	virtual void Destroy();
};

