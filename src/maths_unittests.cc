#include "common_test.h"
#include "maths.h"

TEST(Maths, sqrt_binary){
	Maths m;
	EXPECT_EQ(9, m.sqrt(81));
	EXPECT_EQ(1, m.sqrt(1));	
	EXPECT_EQ(46339, m.sqrt(2147395599));	
}