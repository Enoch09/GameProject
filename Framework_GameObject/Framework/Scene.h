#pragma once
#include<list>
#include"GameObject.h"
class Scene
{
public:
	Scene();
	~Scene();
public:
	std::list<GameObject*> gameObjectList;
	std::list<GameObject*> renderableList;

	std::list<GameObject*> destroyedList;
	ResourceManager* resourceManager;

public:
	void Initialize();
	void Update();
	void Render();
	GameObject* PushBackGameObject(GameObject* gameObject);
	void Destroy(GameObject* o);
};

