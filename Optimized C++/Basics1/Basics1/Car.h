//----------------------------------------------------------------
// Copyright 2025, Ed Keenan, all rights reserved.
//----------------------------------------------------------------

#ifndef CAR_H
#define CAR_H

class Car
{
public:

	Car();				// Default Constructor
	Car(const Car&);	// Copy Constructor

	// Do not add data
	Car *pNext;
	const char *pName;
};

#endif

// --- End of File ---

