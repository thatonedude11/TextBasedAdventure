#include <string>
#include "GameState.h"
using namespace std;


//Includes variables that record all parts of the game state

GameState::GameState()
{
	exit = false;
}

//gets the value of exit
bool GameState::getExit()
{
	return exit;
}

//sets the value of exit to nExit
void GameState::setExit(bool nExit)
{
	exit = nExit;
}

