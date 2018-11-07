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

static int i = 1, j = 1;


class Board
{

	friend class Vertex;
	friend class Controller;

public:
	//get the name of file
	Board(const string);
	//insert file to vector of string
	void init(std::fstream & file);


	//clear and print 
	void clear();
	void print(Board b)const;
	vector<string>& getVector();
	//get object by send index of vector
	//char getObject(int i,int j);
	void setLocation(int i, int j);

	void swapX(int i, int k);

	void swapY(int j, int l);
	//void update(const char, Vertex position)
	
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
	//Player robot;						//need to fix
};

