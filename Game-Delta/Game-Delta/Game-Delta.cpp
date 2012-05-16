// Game-Delta.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Controller.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Controller *game = new Controller;
	game->start();
	delete game;
	return 0;
}

