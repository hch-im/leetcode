#include "sortcolors.h"
#include "common_test.h"

TEST(SortColors, sortColors1){
	SortColors sc;
	int A[] = {1};
	int A_r[] = {1};
	sc.sortColors(A, 1);
	EXPECT_TRUE(ArrayEqual(A_r, A));

	int B[] = {2};
	int B_r[] = {2};
	sc.sortColors(B, 1);
	EXPECT_TRUE(ArrayEqual(B_r, B));

	int C[] = {0};
	int C_r[] = {0};
	sc.sortColors(C, 0);
	EXPECT_TRUE(ArrayEqual(C_r, C));			
}

TEST(SortColors, sortColors2){
	SortColors sc;
	int A[] = {1,1,1};
	int A_r[] = {1,1,1};
	sc.sortColors(A, 3);
	EXPECT_TRUE(ArrayEqual(A_r, A));

	int B[] = {2,2,2};
	int B_r[] = {2,2,2};
	sc.sortColors(B, 3);
	EXPECT_TRUE(ArrayEqual(B_r, B));

	int C[] = {0,0,0};
	int C_r[] = {0,0,0};
	sc.sortColors(C, 0);
	EXPECT_TRUE(ArrayEqual(C_r, C));			
}

TEST(SortColors, sortColors3){
	SortColors sc;
	int A[] = {1,1,0};
	int A_r[] = {0,1,1};
	sc.sortColors(A, 3);
	EXPECT_TRUE(ArrayEqual(A_r, A));

	int B[] = {2,2,1};
	int B_r[] = {1,2,2};
	sc.sortColors(B, 3);
	EXPECT_TRUE(ArrayEqual(B_r, B));

	int C[] = {2,1,0};
	int C_r[] = {0,1,2};
	sc.sortColors(C, 3);
	EXPECT_TRUE(ArrayEqual(C_r, C));			

	int D[] = {1,2,0};
	int D_r[] = {0,1,2};
	sc.sortColors(D, 3);
	EXPECT_TRUE(ArrayEqual(D_r, D));				
}