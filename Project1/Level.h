#pragma once
#include "Board.h"
class Level
{
public:
	Level(int);


	~Level();
private:
	Board& m_board;
	int m_curr_guards;
	int m_curr_score;

};

