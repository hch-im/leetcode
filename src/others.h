#ifndef OTHERS_H_
#define OTHERS_H_

#include "common.h"

class Others{
public:
/*
Unique Binary Search Trees

Given n, how many structurally unique BST's (binary search trees) 
that store values 1...n?

For example,
Given n = 3, there are a total of 5 unique BST's.

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
*/	
	int numTrees(int n);

/*
Unique Binary Search Trees II

Given n, generate all structurally unique BST's (binary search trees) 
that store values 1...n.

For example,
Given n = 3, your program should return all 5 unique BST's shown below.

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
*/	
	vector<TreeNode *> generateTrees(int n);   

/*
Unique Paths

A robot is located at the top-left corner of a m x n grid (marked 'Start' 
in the diagram below).

The robot can only move either down or right at any point in time. The 
robot is trying to reach the bottom-right corner of the grid (marked 'Finish' 
in the diagram below).

How many possible unique paths are there?
*/	
	int uniquePaths(int m, int n);
/*
Follow up for "Unique Paths":

Now consider if some obstacles are added to the grids. How many unique paths 
would there be?

An obstacle and empty space is marked as 1 and 0 respectively in the grid.

For example,
There is one obstacle in the middle of a 3x3 grid as illustrated below.

[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
The total number of unique paths is 2.
*/
	int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid);
};

#endif