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

void dfs(TreeNode * node, int val, int * result){
	if(node == NULL)
		return;
	val = val * 10 + node->val;	
	if(node->left == NULL && node->right == NULL){
		*result += val;
		return;
	}
	dfs(node->left, val, result);
	dfs(node->right, val, result);
}

int SameTree::sumNumbers(TreeNode *root){
	if(root == NULL)
		return 0;
	int result = 0;	
	dfs(root, 0, &result);

	return result;
}

bool dfsSymmetric(TreeNode * left, TreeNode * right){
	if(left == NULL && right == NULL)
		return true;
	if(left == NULL || right == NULL)
		return false;
	if(left->val != right->val)
		return false;
	return dfsSymmetric(left->left, right->right)
			&& dfsSymmetric(left->right, right->left);
}

bool SameTree::isSymmetric(TreeNode * root){
	if(root == NULL)
		return true;
	return dfsSymmetric(root->left, root->right);
}