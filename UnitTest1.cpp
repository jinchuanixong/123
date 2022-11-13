#include "pch.h"
      
#include "CppUnitTest.h"
#include "../ConsoleApplication1/test.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[] = {1，6，-9，16，12，-13};
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				maxSum=now(maxSum, &nowSum, n, num[i]);
			}
			Assert::AreEqual(20,maxSum);
		}
	};
}
