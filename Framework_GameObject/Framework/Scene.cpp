#include "Scene.h"
#include"Framework.h"

Scene::Scene()
{
}


Scene::~Scene()
{
}
void Scene::Initialize()
{
	GameObject* g = PushBackGameObject(new GameObject(L"a,png"));
	g->transform->SetPosition(300.0f, 300.0f);
}
void Scene::Update()
{
	for (auto& i : gameObjectList)
		i->Update();
}
void Scene::Render()
{
	D2DApp& d2dApp = Framework::GetInstance().GetD2DApp();
	ID2D1HwndRenderTarget& r = d2dApp.GetRenderTarget();
	d2dApp.BeginRender();
	for (auto& i : renderableList)
		i->renderer->Render(r, *i->transform);
	d2dApp.EndRender();
}
GameObject* Scene::PushBackGameObject(GameObject* gameObject)
{
	gameObjectList.push_back(gameObject);
	if (gameObject->renderer->GetInitialized())
		renderableList.push_back(gameObject);
	return gameObject;
}

void Scene::Destroy(GameObject* o)
{
	destroyedList.push_back(o);
}