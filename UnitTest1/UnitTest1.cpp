#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05_1/lab05_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double c = k(1, 0);
			Assert::AreEqual(c, 1.);
		}
	};
}
