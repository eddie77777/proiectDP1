#pragma once
#include "IPlayer.h"

class CPlayer : virtual public IPlayer
{
public:
	CPlayer()= default;
	virtual bool PlaceSymbol(std::pair<uint16_t, uint16_t> &pos, Board& board);
};

