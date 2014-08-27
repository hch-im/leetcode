#ifndef SORTING_H_
#define SORTING_H_

#include "common.h"

class Sorting{

public:
/*
Given an array with n objects colored red, white or blue, sort them so that 
objects of the same color are adjacent, with the colors in the order red, 
white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, 
and blue respectively.
 */	
	void sortColors(int A[], int n);

/*
Give a string s, in which all chars are either characters from a to z or
numbers. Sort the chars in the string and return a new string.

For example,

given s = "bacb17da"
returns "17aabbcd"
*/
	string sortString(string s);	
};

#endif