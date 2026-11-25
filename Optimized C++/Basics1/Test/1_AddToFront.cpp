//-----------------------------------------------------------------------------
// Copyright 2025, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "_UnitTestConfiguration.h"

#include "Garage.h"

TEST(AddToFront_shakeout, TestConfig::ALL)
{
#if AddToFront_shakeout

	CHECK(sizeof(Garage) == 8);
	CHECK(sizeof(Car) == 16);

	Garage G;

	CHECK(G.poHead == nullptr);

	Car A("Jetta");

	G.AddToFront(&A);

	CHECK(G.poHead == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == nullptr);


	Car B("Accord");

	G.AddToFront(&B);

	CHECK(G.poHead == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == nullptr);

	Car C("Forte");

	G.AddToFront(&C);

	CHECK(G.poHead == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == nullptr);

	Car D("Outback");

	G.AddToFront(&D);

	CHECK(G.poHead == &D);

	CHECK(strcmp(D.pName, "Outback") == 0);
	CHECK(D.pNext == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == nullptr);

	Car E("Escape");

	G.AddToFront(&E);

	CHECK(G.poHead == &E);

	CHECK(strcmp(E.pName, "Escape") == 0);
	CHECK(E.pNext == &D);

	CHECK(strcmp(D.pName, "Outback") == 0);
	CHECK(D.pNext == &C);

	CHECK(strcmp(C.pName, "Forte") == 0);
	CHECK(C.pNext == &B);

	CHECK(strcmp(B.pName, "Accord") == 0);
	CHECK(B.pNext == &A);

	CHECK(strcmp(A.pName, "Jetta") == 0);
	CHECK(A.pNext == nullptr);



#endif
} TEST_END

// --- End of File ---
