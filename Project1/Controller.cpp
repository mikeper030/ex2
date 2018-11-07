#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>
//#include "Board.h"
#include "Controller.h"



/*	Board b("Board.txt");
	system("pause");

	return(0);
}*/
Controller::Controller(string & nameFile)
{
	Board board(nameFile);
	Player player;

	do {
		player.move(board.m_board);
		//updateScreen(board);
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
