//-----------------------------------------------------------------------------
// Copyright 2025, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "_UnitTestConfiguration.h"

#include "Garage.h"

TEST(Default_shakeout, TestConfig::ALL)
{
#if Default_shakeout

	CHECK(sizeof(Garage) == 8);
	CHECK(sizeof(Car) == 16);

	Garage G;

	CHECK(G.poHead == nullptr);

	Car A;

	CHECK(A.pName == nullptr);
	CHECK(A.pNext == nullptr);

	Car B("Jetta");

	CHECK(strcmp(B.pName, "Jetta") == 0);
	CHECK(B.pNext == nullptr);


#endif
} TEST_END

// --- End of File ---
