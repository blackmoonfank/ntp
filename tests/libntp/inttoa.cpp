#include "libntptest.h"

class inttoaTest : public libntptest {
};

TEST_F(inttoaTest, RegularNumber) {
	EXPECT_STREQ("42", inttoa(42));
}

TEST_F(inttoaTest, NegativeNumber) {
	EXPECT_STREQ("-3", inttoa(-3));
}

TEST_F(inttoaTest, BigPositiveNumber) {
	EXPECT_STREQ("2147483647", inttoa(2147483647));
}

TEST_F(inttoaTest, BigNegativeNumber) {
	EXPECT_STREQ("-2147483648", inttoa(-2147483648));
}

TEST_F(inttoaTest, MediumNumber) {
	EXPECT_STREQ("20000001", inttoa(20000001));
}