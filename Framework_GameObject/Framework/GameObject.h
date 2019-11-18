#pragma once
#include"Transform.h"
#include"Renderer.h"
#include<string>
class GameObject
{
public:
	Transform* transform;
	Renderer* renderer;
	std::string name;
public:
	GameObject();
	GameObject(const wchar_t* path);
	~GameObject();
	void Update();
};

