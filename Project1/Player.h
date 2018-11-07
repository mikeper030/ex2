#pragma once
//#include "Board.h"
#include "Vertex.h"
#include "Controller.h"
#include <cstdlib>      // for system()
#include <vector>
#include <string.h>



class Player
{
	friend class vertex;


public:
	Player();
	void dropLife();
	void extraLife();
	void move(std::vector<std::string>&);
	bool moveRight(std::vector<std::string> &);
	bool moveLeft(std::vector<std::string> &);
	bool moveUp(std::vector<std::string> &);
	bool moveDown(std::vector<std::string> &);
	void trowBomb();
	bool isVaildLocation();
	void setLocation(int i, int j);

	
	~Player();

private:
	static int m_currLife ;
	Vertex m_position;
	//vector<int> m_location{i,j};


};

