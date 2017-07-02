#include "stdafx.h"
#include "CppUnitTest.h"

#include "..\RootFinder\RootFinder.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RootFinderTestFramework
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(BasicTest)
		{
			CRootFinder rooter;
			Assert::AreEqual(
				0.0,						// Expected value:
				rooter.SquareRoot(0.0),		// Actual value:
				0.01,						// Tolerance
				L"Basic test failed",		// Message:
				LINE_INFO()					// Line number - used if there is no PDB file:
			);
		}

		TEST_METHOD(RangeTest)
		{
			CRootFinder rooter;
			for (double v = 1e-6; v < 1e6; v = v * 3.2) {
				double actual = rooter.SquareRoot(v*v);
				Assert::AreEqual(v, actual, v / 1000);
			}
		}

	};
}