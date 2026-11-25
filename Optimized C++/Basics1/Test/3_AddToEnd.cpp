//-----------------------------------------------------------------------------
// Copyright 2025, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "_UnitTestConfiguration.h"

#include "Garage.h"

TEST(AddToEnd_shakeout, TestConfig::ALL)
{
#if AddToEnd_shakeout

	CHECK(sizeof(Garage) == 8);
	CHECK(sizeof(Car) == 16);

	Garage G;

	CHECK(G.poHead == nullptr);

	Car A("Jetta");

	G.AddToEnd(&A);

	CHECK(G.poHead == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == nullptr);


	Car B("Accord");

	G.AddToEnd(&B);

	CHECK(G.poHead == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == nullptr);

	Car C("Forte");

	G.AddToEnd(&C);

	CHECK(G.poHead == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == nullptr);

#endif
} TEST_END

// --- End of File ---
