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
	cout << m_board[0]<<endl;
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
	if (v.m_i == k && v.m_j == l+1)
	{
		//chenge to right
		swapX(v.m_j,l);
	}
	if (v.m_i - 1 == k && v.m_j == l)
	{
		//chenge to left
		swapX(v.m_i, k);
	}
	if (v.m_i == k && v.m_j - 1 == l)
	{
		//chenge to up
		swapY(v.m_j, l);
	}
	if (v.m_i == k && v.m_j + 1 == l)
	{
		//chenge to down
		swapY(v.m_j, l);
	}
}
//====================================================
//
//====================================================
void Board::swapX(int i, int k)
{
	char temp = m_board[v.m_i][v.m_j];
	m_board[v.m_i][v.m_j] = m_board[k][v.m_j];
	m_board[k][v.m_j] = temp;
	v.m_i = k;
}
//====================================================
//
//====================================================
void Board::swapY(int j, int l)
{
	char temp = m_board[v.m_i][v.m_j];
	m_board[v.m_i][v.m_j] = m_board[v.m_i][l];
	m_board[v.m_i][l] = temp;
	v.m_i = l;
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
