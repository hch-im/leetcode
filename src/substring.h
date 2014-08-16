#ifndef SUBSTRING_H_
#define SUBSTRING_H_

#include "common.h"

class SubString{
public:
/*
You are given a string, S, and a list of words, L, that are all 
of the same length. Find all starting indices of substring(s) in 
S that is a concatenation of each word in L exactly once and wi-
thout any intervening characters.

For example, given:
S: "barfoothefoobarman"
L: ["foo", "bar"]

You should return the indices: [0,9].
(order does not matter).
*/	
	vector<int> findSubstring(string S, vector<string> &L);
};

#endif