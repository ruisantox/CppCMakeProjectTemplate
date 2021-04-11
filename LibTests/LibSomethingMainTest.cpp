#include <iostream>

#include "gtest/gtest.h"
#include "../Lib/LibSomething.h" ///@todo add feature for cmake bring onw includes


namespace LiSomethingTests
{

	TEST(LiSomething, GetName)
	{
		constexpr LibSomething::LibSomethingMain inTest;

		EXPECT_EQ(inTest.GetName(), "LibSomething");
	}

}