#ifndef SUBSETS_H_
#define SUBSETS_H_

#include "common.h"

class Subsets
{
public:
/*
Given a set of distinct integers, S, return all possible 
subsets.

Note:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
For example,
If S = [1,2,3], a solution is:

[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]
*/
	vector<vector<int> > subsets(vector<int> &S);
/*
Given a collection of integers that might contain duplicates, S, return all possible subsets.

Note:
Elements in a subset must be in non-descending order.
The solution set must not contain duplicate subsets.
For example,
If S = [1,2,2], a solution is:

[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]
*/	
    vector<vector<int> > subsetsWithDup(vector<int> &S);	
};

#endif