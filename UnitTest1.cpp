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
namespace UnitTest
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[] = {-6，8，12，26，-15，23};
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				maxSum=now(maxSum, &nowSum, n, num[i]);
			}
			Assert::AreEqual(20,maxSum);
		}
	};
}
namespace UnitTest
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int maxSum = 0;
			int nowSum = 0;
			int n = 6;
			int num[] = {19，36，17，-14，52，1，8};
			for (int i = 0;i < n;i++) {
				nowSum += num[i];
				maxSum=now(maxSum, &nowSum, n, num[i]);
			}
			Assert::AreEqual(20,maxSum);
		}
	};
}