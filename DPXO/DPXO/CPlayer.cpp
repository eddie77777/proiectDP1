#include "CPlayer.h"

bool CPlayer::PlaceSymbol(Board& board)
{
	std::pair<uint16_t, uint16_t> pos = board.GetARandomEmptyPos();
	board.SetContentOnPos(,m_symbol);
	return 1;
}
