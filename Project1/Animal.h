#pragma once


enum AnimalType {PRED, PREY};

//forward dec
class Grid;

class Animal {

	Animal(Grid* aGrid, int xcoord, int ycoord);
	virtual ~Animal() { }
};