#pragma once
#include "Board.h"
class Vertex
{
public:
	friend class Board;
	Vertex();
	char getVector();
	int get_x();
	int get_y();
	void setVector(int x,int y);
	int set_x();
	int set_y();



	~Vertex();

};

