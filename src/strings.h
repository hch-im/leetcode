#ifndef STRINGS_H_
#define STRINGS_H_

#include "common.h"

class Strings{
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

/*
Valid Palindrome

Given a string, determine if it is a palindrome, considering only alphanumeric 
characters and ignoring cases.

For example,
"A man, a plan, a canal: Panama" is a palindrome.
"race a car" is not a palindrome.

Note:
Have you consider that the string might be empty? This is a good question to ask 
during an interview.

For the purpose of this problem, we define empty string as valid palindrome.
*/	
	bool isPalindrome(string s);
};

#endif