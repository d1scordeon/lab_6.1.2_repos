#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\User\source\repos\pr_6.1.2\lab_6.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest612
{
	TEST_CLASS(UnitTest612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int const n = 3;
			int a[n] = {2, 5, 9};
			int quantity = 0;

			for (int i = 0; i < n; i++)
			{
				if (a[i] > 0 && abs(a[i]) % 5 != 0)
					quantity++;
			}
			Assert::AreEqual(2, quantity);
		}
	};
}
