#include "stdafx.h"
#include "GameScene.h"

GameScene::GameScene()
{
}


GameScene::~GameScene()
{

}

void GameScene::Initialize(){
	
	background = PushBackGameObject(new GameObject(L"resources/background.png"));
	player = (Player*)PushBackGameObject(new Player(L"resources/Nergigante.png"));
	player->transform->SetPosition(300.0f, 300.0f);
}