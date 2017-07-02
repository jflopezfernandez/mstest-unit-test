// RootFinder.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include <cmath>
#include "RootFinder.h"


// This is an example of an exported variable
ROOTFINDER_API int nRootFinder=0;

// This is an example of an exported function.
ROOTFINDER_API int fnRootFinder(void)
{
    return 42;
}


// This is the constructor of a class that has been exported.
// see RootFinder.h for the class definition
CRootFinder::CRootFinder()
{
    return;
}

ROOTFINDER_API double CRootFinder::SquareRoot(double input)
{
	double result = input;
	double diff = input;

	while (diff > result / 1000) {
		double oldResult = result;
		result = result - (result * result - input) / (2 * result);
		diff = abs(oldResult - result);
	}

	return result;
}
