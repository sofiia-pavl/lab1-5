#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1,5/Traid.h"
#include"C:\Users\Софія\source\repos\lab1,5\lab1,5\Traid.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triad h;
			h.Init(2, 3, 2);
			int i = h.multiplay(2, 5, 4);
			Assert::AreEqual(i, 27);
		}
	};
}
