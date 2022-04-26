#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_3.3D\Pair.cpp"
#include "..\Lab_12_oop_3.3D\PrivateRational.cpp"
#include "..\Lab_12_oop_3.3D\PubicRational.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			PubicRational p = { 2, 2 };
			Assert::AreEqual(2, p.getA());
		}
	};
}
