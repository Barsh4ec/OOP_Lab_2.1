#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP_Lab_2.1/FloatPower.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			FloatPower a(5, 5);
			double n;
			n = a.Power();
			Assert::AreEqual(3125., n);
		}
	};
}
