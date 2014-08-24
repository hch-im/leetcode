#include "common_test.h"
#include "strings.h"

TEST(Strings, findSubstring){
	Strings ss;
	vector<string> L{"foo", "bar"};
	vector<int> result = ss.findSubstring("barfoothefoobarman", L);
	ASSERT_EQ(2, (int)result.size());
	EXPECT_EQ(0, result[0]);	
	EXPECT_EQ(9, result[1]);			
}