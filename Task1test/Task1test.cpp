#include "pch.h"
#include "CppUnitTest.h"

extern"C" int getPerimeter(int* length, int* width);

extern"C" int getArea(int* length, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Task1test
{
	TEST_CLASS(PremiterandArea)
	{
	public:
		
		TEST_METHOD(TestMethod1perimeter)
		{
			//Test case for testing Perimeter
			int length = 3;
			int width = 2;
			int result = 0;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(10, result);
		}
		TEST_METHOD(TestMethod1area)
		{
			//Test case for testing area
			int length = 4;
			int width = 3;
			int result = 0;
			result = getArea(&length, &width);
			Assert::AreEqual(12, result);
		}

	};
}
