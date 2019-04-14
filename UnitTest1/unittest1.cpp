#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\第二次软件工程作业\MAIN.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			float x = 5000.00f;
			float i = 200.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
			x = 1000.00f;
			i = 00.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
			x = 10000.00f;
			i = 600.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
			x = 2000.00f;
			i = 50.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
			x = 6000.00f;
			i = 280.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
			x = 12000.00f;
			i = 800.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
			
		}

		TEST_METHOD(TestMethod2)//侧重于测试异常情况
		{
			float x = NAN;
			float i = 0.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
			x = INFINITY;
			i = 0.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
		}

		TEST_METHOD(TestMethod3)
		{
			float x = -1;
			float i = 0.00f;
			Assert::AreEqual(jisuan(x), i, 0.01f);
		}

	};
}