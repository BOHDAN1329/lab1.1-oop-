#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1.1/Progression.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Progression a;
			a.init(2, 3);
			double actual = a.elementJ(3);
			double expected = 2 * pow(3, 3);
			Assert::AreEqual(expected, actual);
		}
	};
}
