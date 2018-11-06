#include "Player.h"
#include <iostream>
#include <cstdlib>      // for system()
#include <thread>       // for sleep
#include <conio.h>      // for _kbhit() and _getch()

const int KB_ESCAPE = 27;

const int SPECIAL_KEY = 224;

// special keys
const int KB_UP = 72;
const int KB_DOWN = 80;
const int KB_LEFT = 75;
const int KB_RIGHT = 77;



Player::Player()
{


}

void Player::dropLife()
{ 

}

void Player::extraLife()
{
}

void Player::move(vector<string>& board)
{
	std::system("cls");
	int c = 0;
	do
	{
		std::cout << "Press any key and see what happened:\n";
		while (!_kbhit())       // Wait for a key to be pressed
			std::this_thread::sleep_for(std::chrono::milliseconds(500));

		c = _getch();
		switch (c)
		{
		case KB_UP:
			moveUp(board);
			//std::cout << "Arrow Up pressed" << std::endl;
			break;
		case KB_DOWN:
			moveDown(board);
			//std::cout << "Arrow Down pressed" << std::endl;
			break;
		case KB_LEFT:
			moveLeft(board);
			//std::cout << "Arrow Left pressed" << std::endl;
			break;
		case KB_RIGHT:
			moveRight(board);
			//std::cout << "Arrow Right pressed" << std::endl;
			break;
		case KB_ESCAPE:
			//std::cout << "Escape pressed. Exiting..." << std::endl;
			break;
		default:
			std::cout << "Unknown special key pressed (code = " << c << ")" << std::endl;
			break;
		}
	}
}

bool Player::moveRight(vector<string> &board)
{
	
	if(board[get_x()][get_y()] == '@' || board[i+1][j]=='#')
		return false;
	else
	{
		b.setLocation();
		return true;
	}
}

bool Player::moveLeft(vector<string> &board)
{
	if (b.m_board[i -1][j] == '@' || b.m_board[i - 1][j] == '#')
		return false;
	else
	{
		b.setLocation();
		return true;
	}
}

bool Player::moveUp(vector<string> &board)
{
	if (b.m_board[i][j-1] == '@' || b.m_board[i][j-1] == '#')
		return false;
	else
	{
		b.setLocation();
		return true;
	}
}


bool Player::moveDown(vector<string> &board)
{
	if (b.m_board[i][j+1] == '@' || b.m_board[i][j+1] == '#')
		return false;
	else
	{
		b.setLocation();
		return true;
	}
}

bool Player::isVaildLocation()
{
	return false;
}


Player::~Player()
{
}
