//-----------------------------------------------------------------------------
// Copyright 2025, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "_UnitTestConfiguration.h"

#include "Garage.h"

TEST(Remove_shakeout, TestConfig::ALL)
{
#if Remove_shakeout

	CHECK(sizeof(Garage) == 8);
	CHECK(sizeof(Car) == 16);

	Garage G;

	CHECK(G.poHead == nullptr);

	Car A("Jetta");
	Car B("Accord");
	Car C("Forte");
	Car D("Outback");

	G.AddToFront(&D);
	G.AddToFront(&C);
	G.AddToFront(&B);
	G.AddToFront(&A);

	CHECK(G.poHead == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == &D);

	CHECK(strcmp(D.pName, "Outback") == 0);
	CHECK(D.pNext == nullptr);

	G.Remove(&D);

	CHECK(G.poHead == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == nullptr);

	G.Remove(&B);

	CHECK(G.poHead == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == nullptr);

	G.Remove(&A);

	CHECK(G.poHead == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == nullptr);

	G.Remove(&C);

	CHECK(G.poHead == nullptr);



#endif
} TEST_END

// --- End of File ---
