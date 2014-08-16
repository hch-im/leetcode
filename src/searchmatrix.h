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
/*
Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

For example,
Given the following matrix:

[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
You should return [1,2,3,6,9,8,7,4,5].
 */	
	vector<int> spiralOrder(vector<vector<int> > &matrix);
/*
Given an integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

For example,
Given n = 3,

You should return the following matrix:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]
 */
	vector<vector<int> > generateMatrix(int n);
/*
Surrounded Regions	

Given a 2D board containing 'X' and 'O', capture all regions surrounded 
by 'X'.

A region is captured by flipping all 'O's into 'X's in that surrounded 
region.

For example,
X X X X
X O O X
X X O X
X O X X
After running your function, the board should be:

X X X X
X X X X
X X X X
X O X X
*/
    void solve(vector<vector<char>> &board);
};

#endif