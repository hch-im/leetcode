#include "common_test.h"
#include "others.h"

TEST(Others, numTrees){
	Others ot;

	EXPECT_EQ(1, ot.numTrees(0));
	EXPECT_EQ(2, ot.numTrees(2));
	EXPECT_EQ(5, ot.numTrees(3));
}