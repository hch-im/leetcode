#include "common_test.h"
#include "textjustify.h"

TEST(TextJustify, fullJustify){
	TextJustify tj;
	vector<string> words{"This", "is", "an", "example", "of", 
		"text", "justification.", "Last", "line", "test."};
	vector<string> v = tj.fullJustify(words, 16);	

	vector<string> result{"This    is    an", 
						  "example  of text", 
						  "justification.  ", 
						  "Last line test. "};
	EXPECT_EQ(4, (int)v.size());
	for(unsigned int i = 0; i < v.size(); i++){
		EXPECT_EQ(result[i], v[i]);
	}
}