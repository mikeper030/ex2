#include "Board.h"
#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include <sstream>


using std::string;
using std::fstream;
using std::istringstream;
using std::cout;
using std::endl;
using std::vector;
using namespace std;


Board::Board(const string fileName)
{
	fstream in;
	init(in);
}

void Board::init(fstream & file)
{
	// Name of file
	string filename = "Board.txt";
	file.open(filename, ios::in);

	while (!file.eof())
	{
		getline(file, m_input);
		m_board.push_back(m_input);
	}
	for (int i = 0; i < m_board.size(); i++)
	{
		cout << m_board[i] << endl;
	}
	cout << m_board[0];
}
//function return the board by vector
vector<string>& Board::getVector()
{
	return m_board;
}

char Board::getObject()
{
	return m_board[i][j];
}


void Board::exclamationMark()
{
	robot.move(m_board);
}

Board::~Board()
{
}
