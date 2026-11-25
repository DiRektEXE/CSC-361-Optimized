//-----------------------------------------------------------------------------
// Copyright 2025, Ed Keenan, all rights reserved.
//----------------------------------------------------------------------------- 

#include "_UnitTestConfiguration.h"

#include "Garage.h"

TEST(Print_shakeout, TestConfig::ALL)
{
#if Print_shakeout
	
	Trace::out2("\n");

	// -------------------------------------------------
	// Output needs to match PDF exactly
	//--------------------------------------------------

	Car A("Jetta");
	Car B("Accord");
	Car C("Forte");
	Car D("Outback");
	Car E("Escape");

	Garage G;

	G.AddToFront(&A);
	G.AddToFront(&B);
	G.AddToFront(&C);
	G.AddToFront(&D);
	G.AddToFront(&E);

	// Do all your work in Garage::Print()
	//     use Trace::out2() in Garage::Print()
	G.Print("Add to Front");

	G.Remove(&A);
	G.Remove(&C);
	G.Remove(&E);

	G.Print("Remove A,C,E");

	G.AddToEnd(&A);
	G.AddToEnd(&C);
	G.AddToEnd(&E);

	G.Print("Add to End");

	G.Remove(&A);
	G.Remove(&B);
	G.Remove(&C);
	G.Remove(&D);
	G.Remove(&E);

	G.Print("Remove A,B,C,D,E");

	// --------------------------------------------------
	// Do not move... needs to be at bottom of main
	// --------------------------------------------------
	Trace::out2("\n");


#endif
} TEST_END

// --- End of File ---
