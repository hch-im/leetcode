#ifndef SINGLENUMBER_H_
#define SINGLENUMBER_H_

#include "common.h"

class NumberArray{
public:
/*
Given an array of integers, every element appears twice except for one. 
Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you imple-
ment it without using extra memory?
 */	
	int singleNumber(int A[], int n);

/* 
Given an array of integers, every element appears three times except for 
one. Find that single one.

Note:
Your algorithm should have a linear runtime complexity. Could you implem-
ent it without using extra memory?
 */	
	int singleNumberII(int A[], int n);

/*
Two Sum

Given an array of integers, find two numbers such that they add up to a 
specific target number.

The function twoSum should return indices of the two numbers such that 
they add up to the target, where index1 must be less than index2. Please 
note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/
    vector<int> twoSum(vector<int> &numbers, int target);
};

#endif