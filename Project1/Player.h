#pragma once
#include "Board.h"
#include "Vertex.h"
static int i, j;
class Player
{


public:
	Player();
	void dropLife();
	void extraLife();
	void move(vector<string> &);
	bool moveRight(vector<string> &board);
	bool moveLeft(vector<string> &board);
	bool moveUp(vector<string> &board);
	bool moveDown(vector<string> &board);
	bool isVaildLocation();

	
	~Player();

private:
	static int m_currLife ;
	vector<int> m_location ;


};

