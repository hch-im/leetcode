#include "common_test.h"
#include "subsets.h"

TEST(Subsets, subsets){
	Subsets ss;

	vector<int> v{1, 2, 3};
	vector<vector<int> > result = ss.subsets(v);
	EXPECT_EQ(8, (int)result.size());
}