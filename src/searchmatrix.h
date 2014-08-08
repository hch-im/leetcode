#ifndef SEARCHMATRIX_H_
#define SEARCHMATRIX_H_

#include "common.h"

class SearchMatrix{
public:
/*
Write an efficient algorithm that searches for a value in an 
m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer 
of the previous row.

For example,

Consider the following matrix:

[
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
Given target = 3, return true.
 */	
    bool searchMatrix(vector<vector<int> > &matrix, int target);
/*
Given a m x n matrix, if an element is 0, set its entire row and column 
to 0. Do it in place.
 */    
	void setZeroes(vector<vector<int> > &matrix);
};

#endif