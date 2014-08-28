#include "common_test.h"
#include "others.h"

TEST(Others, numTrees){
	Others ot;

	EXPECT_EQ(1, ot.numTrees(0));
	EXPECT_EQ(2, ot.numTrees(2));
	EXPECT_EQ(5, ot.numTrees(3));
}

TEST(Others, uniquePaths){
	Others ot;

	EXPECT_EQ(1, ot.uniquePaths(1, 3));
	EXPECT_EQ(15, ot.uniquePaths(3, 5));
}

TEST(Others, uniquePathsII){
	Others ot;
	vector<vector<int> > v = {{0, 1, 0, 0, 0},
							  {0, 0, 0, 1, 0},
							  {0, 1, 0, 0, 0}};
	EXPECT_EQ(1, ot.uniquePathsWithObstacles(v));
}

TEST(Others, indexOfDigits){
	Others ot;
	EXPECT_EQ(-1, ot.indexOfDigits(1, 0));
	EXPECT_EQ(1, ot.indexOfDigits(121, 21));	
	EXPECT_EQ(0, ot.indexOfDigits(197, 19));
	EXPECT_EQ(4, ot.indexOfDigits(1976678, 678));

}