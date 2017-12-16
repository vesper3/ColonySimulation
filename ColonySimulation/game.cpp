#include "game.h"

Game::Game()
{
	isRunning = true;
}

Game::~Game()
{
}

void Game::Run()
{
	MainMenu();

	while (isRunning)
	{
		//dont want to be stuck for now
		//!!DELETE LATER!!
		isRunning = false;

		//--Actual Game Code--
		//ActionMenu -- No action is a choice, maybe set how long you do no action
			//Status Menu -- Check on a variety of things, maybe some of this information can be shown before hand
		//UpdateState -- Calculate many different flags and variable ----------------- Maybe we update state while idle and let the game continue?
		//AIOutput -- Any IMPORTANT status updates, if none then just confirmation of action
		//Bonus action(s)?
		//UpdateState
		//AIOutput
	}
}

void Game::MainMenu()
{
	bool valid = false;

	//keep repeating main menu until a valid choice is chosen, only option to redo main menu is "Options"
	while (!valid)
	{
		std::string input;
		char choice;

		std::cout << "///////////////////////////////////" << "\n";
		std::cout << "/////Imperial Colony Simulator/////" << "\n";
		std::cout << "///////////////////////////////////" << "\n";
		std::cout << "\n";
		std::cout << "Main Menu:" << "\n";
		std::cout << "(N)ew Game" << "\n";
		std::cout << "(L)oad Game" << "\n";
		std::cout << "(O)ptions" << "\n";
		std::cout << "(E)xit Program" << "\n";

		std::cin >> input;

		choice = input[0];

		choice = toupper(choice);

		switch (choice)
		{
		case 'N':
			valid = true;
			utility::ClearScreen();
			NewGame();
			break;
		case 'L':
			valid = true;
			utility::ClearScreen();
			LoadGame();
			break;
		case 'O':
			utility::ClearScreen();
			OptionsMenu();
			break;
		case 'E':
			valid = true;
			isRunning = false;
			break;
		default:
			utility::ClearScreen();
		}
	}
}

void Game::OptionsMenu()
{
}

void Game::NewGame()
{
}

void Game::LoadGame()
{
}




