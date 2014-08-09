#include "singlenumber.h"
#include <gtest/gtest.h>

TEST(SingleNumber, singleNumber){
	SingleNumber sn;

	int A[] = {4, 1, 2, 3, 2, 3, 1};
	EXPECT_EQ(4, sn.singleNumber(A, 7));

	int B[] = {4};
	EXPECT_EQ(4, sn.singleNumber(B, 1));	
}

TEST(SingleNumber, singleNumberII){
	SingleNumber sn;

	int A[] = {4, 1, 1, 2, 2, 3, 3, 2, 3, 1};
	EXPECT_EQ(4, sn.singleNumberII(A, 10));

	int B[] = {4, 4, 1, 1, 2, 2, 3, 3, 2, 3, 1};
	EXPECT_EQ(4, sn.singleNumberII(B, 11));
}