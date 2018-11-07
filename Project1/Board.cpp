#include "Board.h"
#include <iostream>
#include <string>
#include <vector>
#include <istream>
#include <sstream>
#include <Windows.h>


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
//====================================================
//
//====================================================
void Board::print(Board b) const
{
	for (int i = 0; i < b.m_board.size(); i++)
	{
		cout << b.m_board[i] << endl;
	}
}
//====================================================
//
//====================================================
void Board::clear()
{
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0, 0 });
}
//====================================================
//
//====================================================
//function return the board by vector
vector<string>& Board::getVector()
{
	return m_board;
}
//====================================================
//
//====================================================
//need to fix
void Board::setLocation(int k, int l)
{
	if (i == k && j == l+1)
	{
		//chenge to right
		swapX(j,l);
	}
	if (i - 1 == k && j == l)
	{
		//chenge to left
		swapX(i, k);
	}
	if (i == k && j - 1 == l)
	{
		//chenge to up
		swapY(j, l);
	}
	if (i == k && j + 1 == l)
	{
		//chenge to down
		swapY(j, l);
	}
}
//====================================================
//
//====================================================
void Board::swapX(int i, int k)
{
	char temp = m_board[i][j];
	m_board[i][j] = m_board[k][j];
	m_board[k][j] = temp;
	i = k;
}
//====================================================
//
//====================================================
void Board::swapY(int j, int l)
{
	char temp = m_board[i][j];
	m_board[i][j] = m_board[i][l];
	m_board[i][j] = temp;
	i = k;
}
//====================================================
//
//====================================================
/*void Board::exclamationMark()
{
	robot.move((*this));
}
*/
Board::~Board()
{
}
