#pragma once
#include"WinApp.h"
class Framework
{
public:
	Framework();
public:
	WinApp winApp;
public:
	void Run(const wchar_t* title, int width, int height,bool isFullScreen);
	void StartGameLoop();

};

