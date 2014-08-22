#include "common_test.h"
#include "triangle.h"

TEST(Triangle, minimumTotal){
	Triangle t;
	vector<vector<int>> A{{2},
						  {3, 4},
						  {6, 5, 7},
						  {4, 1, 8, 3}};
	EXPECT_EQ(11, t.minimumTotal(A));

	vector<vector<int>> B{{2}};
	EXPECT_EQ(2, t.minimumTotal(B));	
}