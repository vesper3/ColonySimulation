#ifndef GAME_H
#define GAME_H

#include "utilities.h"
#include <iostream>
#include <string>

class Game
{
public:
	Game();
	~Game();

	void Run();

protected:
	void MainMenu();
	void OptionsMenu();

	//may create own class to save and load games
	void NewGame();
	void LoadGame();
	//may create own class to save and load games

	bool isRunning;
};

#endif