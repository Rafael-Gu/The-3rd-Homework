#include "stdafx.h"
#include "CppUnitTest.h"

extern int sum(int *a, int j);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ×÷ÒµÈý
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { -1,-6,-3,-5,-1 };
			Assert::AreEqual(sum(a, 5), 0);
		}
		TEST_METHOD(TestMethod2)
		{
			int *a = 0;
			Assert::AreEqual(sum(a, 0), 0);
		}
		TEST_METHOD(TestMethod3)
		{
			int a[] = { -1,-6,-5,-3,-5,-2,6 };
			Assert::AreEqual(sum(a, 7), 6);
		}
		TEST_METHOD(TestMethod4)
		{
			int a[] = { 0,-2,2,5,-9,0,7,5,13,-4,-6 };
			Assert::AreEqual(sum(a, 11), 25);
		}
		TEST_METHOD(TestMethod5)
		{
			int a[] = { 1,-2,3,-4,5,-6,7,-8 };
			Assert::AreEqual(sum(a, 8), 7);
		}

	};
}