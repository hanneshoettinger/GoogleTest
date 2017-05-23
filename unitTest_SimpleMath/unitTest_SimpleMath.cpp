#include "gtest/gtest.h"
#include "SimpleMath.h"

TEST(testMath, myCubeTest)
{
	EXPECT_EQ(1000, cubic(10));
	EXPECT_EQ(8, cubic(2));
	EXPECT_EQ(100, cubic(5));
}

TEST(testCubic, secondCubeTest)
{
	ASSERT_EQ(0.0, cubic(0));
}