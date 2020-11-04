#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/lab5_2.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod5_2)
		{
			double t;
			double x = 0;
			double n = 0;
			double a = 1;
			t = A(x,n,a);
			Assert::AreEqual(t,-1.);
		}
	};
}
