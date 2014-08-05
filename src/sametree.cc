/*
	Given two binary trees, write a function to check if they are equal or not.
	Two binary trees are considered equal if they are structurally identical 
	and the nodes have the same value.
 */
#include "sametree.h"

bool SameTree::isSameTree(TreeNode *p, TreeNode *q) {
	if(p == NULL && q == NULL)
		return true;
   	if(p == NULL || q == NULL || p->val != q->val)
   		return false;

	return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}