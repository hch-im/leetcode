#ifndef SAMETREE_H_
#define SAMETREE_H_

#include "common.h"

class SameTree {
public:
    bool isSameTree(TreeNode *p, TreeNode *q);
/*
Sum Root to Leaf Numbers 

Given a binary tree containing digits from 0-9 only, each root-to-leaf 
path could represent a number.

An example is the root-to-leaf path 1->2->3 which represents the number 
123.

Find the total sum of all root-to-leaf numbers.

For example,

    1
   / \
  2   3
The root-to-leaf path 1->2 represents the number 12.
The root-to-leaf path 1->3 represents the number 13.

Return the sum = 12 + 13 = 25.
*/    
    int sumNumbers(TreeNode *root);
/*
Symmetric Tree

Given a binary tree, check whether it is a mirror of itself (ie, symmetric around its center).

For example, this binary tree is symmetric:

    1
   / \
  2   2
 / \ / \
3  4 4  3
But the following is not:
    1
   / \
  2   2
   \   \
   3    3
*/    
	bool isSymmetric(TreeNode * root);   
};

#endif