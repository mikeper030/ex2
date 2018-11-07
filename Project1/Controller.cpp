#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
//#include "Board.h"
#include "Controller.h"

using namespace std;

Controller::Controller(string  nameFile)
{
	Board board(nameFile);
	Player player;
	v.m_i = v.m_j = 1;
	do {
		player.move(board.m_board);
		updateScreen(board);
		clearAndPrint(board);
	} while (1);


}

void Controller::updateScreen(Board & b)
{

}

void Controller::clearAndPrint(Board & b)
{
	b.clear();
	b.print(b);
}

Controller::~Controller()
{
}

