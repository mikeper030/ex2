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
	
	Board(const string);
	void init(std::fstream & file);
	vector<string>& getVector();
	char getObject(int i,int j);
	void setLocation(int i,int j, string s);
	void exclamationMark();



	~Board();
private:
	// String for input
	string m_input;
	int m_size, m_step;
	vector<string> m_board;
	Player act;
};

