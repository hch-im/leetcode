#ifndef SEARCHRANGE_H_
#define SEARCHRANGE_H_

#include "common.h"

/*
Given a sorted array of integers, find the starting and ending 
position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

For example,
Given [5, 7, 7, 8, 8, 10] and target value 8,
return [3, 4].
 */
class SearchRange{
public:
    vector<int> searchRange(int A[], int n, int target);	
/*
Given a sorted array and a target value, return the index if 
the target is found. If not, return the index where it would 
be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0
 */    
	int searchInsert(int A[], int n, int target);

};

#endif