#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5_1_B/FuzzyNumber.cpp"
#include "../Lab_5_1_B/MyDerivedException.cpp"
#include "../Lab_5_1_B/MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest51B
{
	TEST_CLASS(Labtest51B)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(4, 1, 7);
			FuzzyNumber B(6, 3, 9);

			FuzzyNumber C = A + B;
			Assert::AreEqual(C.GetX(), 10.0);
		}
	};
}
