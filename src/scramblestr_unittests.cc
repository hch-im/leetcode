#include <gtest/gtest.h>
#include "scramblestr.h"

TEST(ScrambleString, isScramble)
{
	ScrambleString ss;

    EXPECT_TRUE(ss.isScramble("eat", "ate"));
    EXPECT_TRUE(ss.isScramble("great", "tareg"));
    EXPECT_FALSE(ss.isScramble("g", "t"));        
}