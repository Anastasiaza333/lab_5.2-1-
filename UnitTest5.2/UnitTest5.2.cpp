#include "pch.h"
#include "CppUnitTest.h"
#include "../Project5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest52
{
	TEST_CLASS(UnitTest52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			int n=0;
			t = S(2, 0.0001, n);
			Assert::AreEqual(t,-0.50000,0.0001);

		}
	};
}
