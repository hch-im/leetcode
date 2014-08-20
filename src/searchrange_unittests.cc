#include "searchrange.h"
#include <gtest/gtest.h>

TEST(SearchRange, searchRange){
	SearchRange sr;
	int A[6] = {5, 7, 7, 8, 8, 10};
	vector<int> v = sr.searchRange(A, 6, 8);
	EXPECT_EQ(v[0], 3);
	EXPECT_EQ(v[1], 4);
}

TEST(SearchRange, searchInsert){
	SearchRange sr;
	int A[] = {1};
	EXPECT_EQ(0, sr.searchInsert(A, 1, 0));
	EXPECT_EQ(1, sr.searchInsert(A, 1, 2));	

	int B[] = {1, 3, 5, 7};
	EXPECT_EQ(2, sr.searchInsert(B, 4, 5));
	EXPECT_EQ(1, sr.searchInsert(B, 4, 2));		
}

TEST(SearchRange, trap){
	SearchRange sr;
	int A[] = {0,1,0,2,1,0,1,3,2,1,2,1};
	EXPECT_EQ(6, sr.trap(A, 12));
}