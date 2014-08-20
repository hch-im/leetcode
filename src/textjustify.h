#ifndef TEXTJUSTIFY_H_
#define TEXTJUSTIFY_H_

#include "common.h"

class TextJustify{
public:
/*
Given an array of words and a length L, format the text such that 
each line has exactly L characters and is fully (left and right) 
justified.

You should pack your words in a greedy approach; that is, pack as 
many words as you can in each line. Pad extra spaces ' ' when ne-
cessary so that each line has exactly L characters.

Extra spaces between words should be distributed as evenly as pos-
sible. If the number of spaces on a line do not divide evenly bet-
ween words, the empty slots on the left will be assigned more spa-
ces than the slots on the right.

For the last line of text, it should be left justified and no extra 
space is inserted between words.

For example,
words: ["This", "is", "an", "example", "of", "text", "justification."]
L: 16.

Return the formatted lines as:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
Note: Each word is guaranteed not to exceed L in length.
*/	
	vector<string> fullJustify(vector<string> &words, int L);
};

#endif