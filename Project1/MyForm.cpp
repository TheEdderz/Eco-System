#include "MyForm.h"
#include <iostream>
#include <ctime>
#include "GRID.h"

using namespace std;

int main()
{
	Grid myGrid(time(0));

	myGrid.display();

	char ch;

	while (cin.get(ch) && ch != 'q') { //q for quit 
		//myGrid.simonestep();
		myGrid.display();

	}

	return 0;
}