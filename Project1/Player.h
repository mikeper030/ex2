#pragma once
#include "Board.h"
#include "Vertex.h"
static int i, j;
class Player
{
	friend class vertex;


public:
	Player();
	void dropLife();
	void extraLife();
	void move(vector<string> &);
	bool moveRight(vector<string> &);
	bool moveLeft(vector<string> &);
	bool moveUp(vector<string> &);
	bool moveDown(vector<string> &);
	void trowBomb();
	bool isVaildLocation();
	void setLocation(int i, int j);

	
	~Player();

private:
	static int m_currLife ;
	vector<int> m_location{i,j};


};

