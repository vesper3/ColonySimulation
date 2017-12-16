//****COLONY_SIMULATION****//
//*PROPERTY_OF_MATT_&_JERM*//
//****DON'T_COPY_PLEASE****//

#include "game.h"

int main()
{
	//Create Game class
	Game *game = new Game();

	//Start Game. Run contains game loop
	game->Run();

	delete game;

	return 0;
}