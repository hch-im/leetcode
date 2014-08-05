#include <gtest/gtest.h>
#include "sametree.h"

TEST(SameTree, isSameTree)
{	
	SameTree sol;	
    EXPECT_TRUE(sol.isSameTree(NULL, NULL));
}
