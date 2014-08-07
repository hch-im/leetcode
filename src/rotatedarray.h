#ifndef ROTATEDARRAY_H_
#define ROTATEDARRAY_H_

#include "common.h"
/*
Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

You are given a target value to search. If found in the array return its 
index, otherwise return -1.

You may assume no duplicate exists in the array.
--------------------------------------------------------------------------
Follow up for "Search in Rotated Sorted Array":
What if duplicates are allowed?

Would this affect the run-time complexity? How and why?

Write a function to determine if a given target is in the array.
 */
class RotatedArray{
public:
	int searchI(int A[], int n, int target);
    bool searchII(int A[], int n, int target);	
};

#endif