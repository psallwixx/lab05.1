#include "pch.h"
#include "CppUnitTest.h"
#include "../lab05.1/5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethodx_y)
		{
			double x = 3;
			double y = 4;
			double expected_result = 0.07586207;
			double actual_result = h(x, y);
			Assert::AreEqual(expected_result, actual_result, 0.0001);
		}
		TEST_METHOD(TestMethodp_q)
		{
			double p = 10;
			double q = 5;
			double expected_result = 0.986504;
			double actual_result = h(abs(p - q), sqrt(abs(p - q))) * h(abs(p - q), sqrt(abs(p - q))) + h(1, q * q - p * p);
			Assert::AreEqual(expected_result, actual_result, 0.0001);
		}

	};
}
