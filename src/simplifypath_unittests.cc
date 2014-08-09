#include "simplifypath.h"
#include <gtest/gtest.h>

TEST(SimplifyPath, simplifyPath){
	SimplifyPath sp;
	
	EXPECT_EQ("/", sp.simplifyPath("//"));
	EXPECT_EQ("/", sp.simplifyPath("/"));	
	EXPECT_EQ("/", sp.simplifyPath("/./"));		
	EXPECT_EQ("/", sp.simplifyPath("/../"));		

	EXPECT_EQ("/", sp.simplifyPath("/bin/../home/./.."));		
}