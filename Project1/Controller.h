#pragma once
#include <iostream>
#include <stdlib.h>
#include <string>
#include "Game.h"
#include "Board.h"

static Vertex v;


class Controller
{
public:
	Controller(std::string);
	void updateScreen(Board &);
	void clearAndPrint(Board &);
	~Controller();
private:

};

