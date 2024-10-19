#include "pch.h"
#include "CppUnitTest.h"

extern"C" void setLength(int input, int* length);
extern"C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lengthandwidth
{
	TEST_CLASS(Lengthandwidth)
	{
	public:
		
		TEST_METHOD(Testlengthpositive) // for testing the positive 
		{
			int length = 0;
			int input = 50;
			setLength(input, &length);
			Assert::AreEqual(50, length);
		}
		TEST_METHOD(Testlengthvalid)    // for valid unit test which is from 1 to 99
		{
			int length = 0;
			int input = 40;
			setLength(input, &length);
			Assert::AreEqual(40, length);
		}
		TEST_METHOD(Testlengthmidvalue)   // for unit test of mid range value
		{
			int length = 0;
			int input = 35;
			setLength(input, &length);
			Assert::AreEqual(35, length);
		}
		TEST_METHOD(Testwidthmaxvalue) // for testing the maximum value
		{
			int width = 0;
			int input = 99;
			setWidth(input, &width);
			Assert::AreEqual(99, width);
		}
		TEST_METHOD(Testwidthminvalue)    // for testing the minimum value
		{
			int width = 0;
			int input = 0;
			setWidth(input, &width);
			Assert::AreEqual(0, width);
		}
		TEST_METHOD(Testwidthmid)   // for testing midrange value.
		{
			int width = 0;
			int input = 45;
			setWidth(input, &width);
			Assert::AreEqual(45, width);
		}

	};
}
