#include "searchrange.h"
#include <gtest/gtest.h>

TEST(SearchRange, searchRange){
	SearchRange sr;
	int A[6] = {5, 7, 7, 8, 8, 10};
	vector<int> v = sr.searchRange(A, 6, 8);
	EXPECT_EQ(v[0], 3);
	EXPECT_EQ(v[1], 4);
}