#include "common_test.h"
#include "maths.h"

TEST(Maths, sqrt){
	Maths m;
	EXPECT_EQ(9, m.sqrt(81));
	EXPECT_EQ(1, m.sqrt(1));	
	EXPECT_EQ(46339, m.sqrt(2147395599));	
}

TEST(Maths, atoi){
	Maths m;
	
	EXPECT_EQ(2147483647, m.atoi("10522545459"));	
	EXPECT_EQ(2147483647, m.atoi("21474836471"));
	EXPECT_EQ(2147483647, m.atoi("2147483648"));	
	EXPECT_EQ(2147483647, m.atoi("2147483647"));

	EXPECT_EQ(-2147483648, m.atoi("-2147483648"));		
	EXPECT_EQ(-2147483648, m.atoi("-21474836477"));
	EXPECT_EQ(-2147483647, m.atoi("-2147483647"));

	EXPECT_EQ(0, m.atoi(""));						
	EXPECT_EQ(0, m.atoi("    "));	
	EXPECT_EQ(0, m.atoi("   - "));
	EXPECT_EQ(0, m.atoi("  +  "));	

	EXPECT_EQ(214, m.atoi("214ab48"));	
	EXPECT_EQ(21474, m.atoi("21474aafe"));
	EXPECT_EQ(0, m.atoi("+ab214ab48"));	
}