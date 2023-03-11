#pragma once
#include "Game.h"
#include <iostream>

class GameLogic
{
private:
	const char kFirstSymbol = 'X';
	const char kSecondSymbol = '0';

public:
	GameLogic() = default;
	~GameLogic();

public:
	void ShowTable(std::ostream& os);

	Game& GetGame();
private:
	Game m_game;
};
