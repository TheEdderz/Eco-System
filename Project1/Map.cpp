#include <iostream>
#include <cstdlib>  // for rand
#include "GRID.h"

using namespace std;

Grid::Grid(unsigned int seed) {
	//seed random 
	srand(seed);
	//create grid
	for (int i = 0; i < GRIDSIZE; i++) {
		for (int j = 0; j < GRIDSIZE; j++) {
			grid[i][j] = NULL;
		}
	}
}

Grid::~Grid() {
	for (int i = 0; i < GRIDSIZE; i++) {
		for (int j = 0; j < GRIDSIZE; j++) {
			if (grid[i][j] != NULL) {
				delete grid[i][j];
			}
		}
	}
}