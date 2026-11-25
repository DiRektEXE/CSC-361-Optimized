//----------------------------------------------------------------
// Copyright 2025, Ed Keenan, all rights reserved.
//----------------------------------------------------------------

#include "Car.h"

// Default Constructor + Initializer List
Car::Car() : pNext(nullptr), pName(nullptr)
{
}

// Copy Constructor
Car::Car(const Car& tmp) 
{
	this->pName = tmp.pName;
}

// --- End of File ---