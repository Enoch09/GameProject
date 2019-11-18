#include "stdafx.h"
#include "Bullet.h"
#include "TimeManager.h"
#define PI 3.141592f


Bullet::Bullet(const wchar_t* path, float speed,
	float speedRate, float angle,
	float angleRate, float damage) :GameObject(path),speed(speed),
	speedRate(speedRate), angle(angle),
	angleRate(angleRate), damage(damage)
{

}
Bullet::~Bullet()
{
}

void Bullet::Update(){
	Move();
}
void Bullet::Move(){
	float rad = PI * angle *2.0f;
	transform->position.x += (speed*cosf(rad)*TimeManager::GetDeltaTime());
	transform->position.y += (speed*sinf(rad)*TimeManager::GetDeltaTime());
	
	angle += angleRate;
	speed += speedRate;

}
void Bullet::Destroy(){

}