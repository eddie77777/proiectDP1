#include "GameLogic.h"
#include "CPlayer.h"
#include "HPlayer.h"

GameLogic::~GameLogic()
{
	/*delete m_player1;
	delete m_player2;*/  //dc????????
}

void GameLogic::ShowTable(std::ostream& os)
{
	Board::BoardContent bc = m_game.GetBoard().GetMatrix();
	os << "     " << '|' << "     " << '|' << "     \n";
	os << "  " << bc[0][0] << "  " << '|' << "  " << bc[0][1] << "  " << '|' << "  " << bc[0][2] << "  \n";
	os << "     " << '|' << "     " << '|' << "     \n";
	os << "-----" << '|' << "-----" << '|' << "-----\n";
	os << "     " << '|' << "     " << '|' << "     \n";
	os << "  " << bc[1][0] << "  " << '|' << "  " << bc[1][1] << "  " << '|' << "  " << bc[1][2] << "  \n";
	os << "     " << '|' << "     " << '|' << "     \n";
	os << "-----" << '|' << "-----" << '|' << "-----\n";
	os << "     " << '|' << "     " << '|' << "     \n";
	os << "  " << bc[2][0] << "  " << '|' << "  " << bc[2][1] << "  " << '|' << "  " << bc[2][2] << "  \n";
	os << "     " << '|' << "     " << '|' << "     \n";
}

Game& GameLogic::GetGame()
{
	return m_game;
}
