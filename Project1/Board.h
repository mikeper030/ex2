#include <iostream>
#include <string.h>
#include <vector>
#include <fstream>


using std::string;
using std::istringstream;
using std::cout;
using std::endl;
using std::vector;



class Board
{
public:

	Board(const string);
	void init(std::fstream & file);
	vector<string>& getVector();


	~Board();
private:
	// String for input
	string m_input;
	int m_size, m_step;
	vector<string> m_board;
};

