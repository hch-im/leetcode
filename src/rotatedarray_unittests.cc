#include "rotatedarray.h"
#include <gtest/gtest.h>

TEST(RotatedArray, searchI){
	int A[] = {4, 5, 6, 7, 0, 1, 2};
	RotatedArray ra;
	EXPECT_EQ(0, ra.searchI(A, 7, 4));
	EXPECT_EQ(4, ra.searchI(A, 7, 0));	
	EXPECT_EQ(-1, ra.searchI(A, 7, 8));		
}

TEST(RotatedArray, searchIBorder){
	int A[] = {4, 1, 2, 3};
	RotatedArray ra;
	EXPECT_EQ(0, ra.searchI(A, 4, 4));
	EXPECT_EQ(1, ra.searchI(A, 4, 1));	
	EXPECT_EQ(-1, ra.searchI(A, 4, 0));		
}

TEST(RotatedArray, searchII){
	int A[] = {4};
	RotatedArray ra;
	EXPECT_TRUE(ra.searchII(A, 1, 4));
	EXPECT_FALSE(ra.searchII(A, 1, 6));	
	EXPECT_FALSE(ra.searchII(A, 1, 0));		
}

TEST(RotatedArray, searchIIDup1){
	int A[] = {4, 4};
	RotatedArray ra;
	EXPECT_TRUE(ra.searchII(A, 2, 4));

	int B[] = {4, 4, 6};
	EXPECT_TRUE(ra.searchII(B, 3, 4));		
	EXPECT_TRUE(ra.searchII(B, 3, 6));			
}

TEST(RotatedArray, searchIIDup2){
	int A[] = {4, 5, 6, 4, 4, 4, 4, 4};
	RotatedArray ra;
	EXPECT_TRUE(ra.searchII(A, 8, 4));
	EXPECT_TRUE(ra.searchII(A, 8, 5));	
	EXPECT_FALSE(ra.searchII(A, 8, 8));	

	int B[] = {4, 4, 4, 4, 4, 1, 2, 3};
	EXPECT_TRUE(ra.searchII(B, 8, 4));
	EXPECT_TRUE(ra.searchII(B, 8, 1));	
	EXPECT_FALSE(ra.searchII(B, 8, 5));

	int C[] = {4, 4, 4, 4, 5, 4};
	EXPECT_TRUE(ra.searchII(C, 6, 4));			
	EXPECT_TRUE(ra.searchII(C, 6, 5));		

	int D[]	= {1,2,0,1,1,1};
	EXPECT_TRUE(ra.searchII(D, 6, 0));			
	EXPECT_TRUE(ra.searchII(D, 6, 2));					
}