#include "Board.h"
#include <random>

Board::Board()
{
	for (uint8_t i = 0; i < m_matrix.size(); ++i)
		m_matrix[i].fill(' ');
	for (uint8_t i = 0; i < m_matrix.size(); ++i)
		for (uint8_t j = 0; j < m_matrix[i].size(); ++j)
			m_emptyPos.push_back({ i,j });
}

void Board::UpdateBoard(Position pos, char symbol)
{
	m_matrix[pos.first][pos.second] = symbol;
	for (uint8_t i = 0; i < m_emptyPos.size(); ++i)
		if (m_emptyPos[i] == pos)
			m_emptyPos.erase(m_emptyPos.begin() + i);
}

EmptyPositions Board::GetEmptyPositions() const
{
	return m_emptyPos;
}

BoardContent Board::GetMatrix() const
{
	return m_matrix;
}
