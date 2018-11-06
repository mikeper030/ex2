#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
#include "Player.h"


using std::string;
using std::istringstream;
using std::cout;
using std::endl;
using std::vector;



class Board
{
	friend class Vertex;
	friend class Player;

public:
	//get the name of file
	Board(const string);
	//insert file to vector of string
	void init(std::fstream & file);
	//
	vector<string>& getVector();
	//get object by send index of vector
	char getObject(int i,int j);

	
	void exclamationMark();



	~Board();
private:
	// String for input
	string m_input;
	int m_size, m_step;
	//the board
	vector<string> m_board;
	//object of Player for get bboard in Player
	//need to check if is right to do like this
	Player robot;						//need to fix
};

