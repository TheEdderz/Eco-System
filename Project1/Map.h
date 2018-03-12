//GRID.h

#pragma once


// The size of the grid 
const int GRIDSIZE = 100;

// Number of initial foxes
const int INITIAL_FOX = 6;

// Number of initial rabbits 
const int INITIAL_RAB = 5;

struct Position
{
	int x;
	int y;
};

class Grid
{
public:
	// Constructor: create and inits the grid seed generates random behaviour
	Grid(unsigned int seed);

	//Destructor
	~Grid();

	// Displays the grid
	void display() const;

	// Simulates one step of the grid
	//void simonestep();



private:

	Animal* grid[GRIDSIZE][GRIDSIZE];

};