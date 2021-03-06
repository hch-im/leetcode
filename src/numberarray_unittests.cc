#include "numberarray.h"
#include "common_test.h"

TEST(NumberArray, singleNumber){
	NumberArray na;

	int A[] = {4, 1, 2, 3, 2, 3, 1};
	EXPECT_EQ(4, na.singleNumber(A, 7));

	int B[] = {4};
	EXPECT_EQ(4, na.singleNumber(B, 1));	
}

TEST(NumberArray, singleNumberII){
	NumberArray na;

	int A[] = {4, 1, 1, 2, 2, 3, 3, 2, 3, 1};
	EXPECT_EQ(4, na.singleNumberII(A, 10));

	int B[] = {4, 4, 1, 1, 2, 2, 3, 3, 2, 3, 1};
	EXPECT_EQ(4, na.singleNumberII(B, 11));
}

TEST(NumberArray, twoSum){
	NumberArray na;

	vector<int> A = {2, 7, 11, 15};
	vector<int> r = na.twoSum(A, 13);
	ASSERT_EQ(2, (int)r.size());
	EXPECT_EQ(r[0], 1);
	EXPECT_EQ(r[1], 3);
}