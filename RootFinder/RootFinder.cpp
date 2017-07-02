// RootFinder.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
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
