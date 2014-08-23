#include "others.h"

int Others::numTrees(int n){
	if(n <= 1) 
		return 1;
	vector<int> v(n + 1);
	v[0] = v[1] = 1;
	for(int i = 2; i <= n; i++){
		for(int j = 0; j < i; j++){
			v[i] += v[j] * v[i - 1 - j];
		}
	}

	return v[n];
}

vector<TreeNode *> generateSubTrees(int start, int end){
	vector<TreeNode *> v;
	if(start > end){
		v.push_back(NULL);
		return v;
	}
	if(start == end){
		v.push_back(new TreeNode(start));
		return v;
	}

	for(int i = start; i <= end; i++){
		vector<TreeNode *> left = generateSubTrees(start, i - 1);
		vector<TreeNode *> right = generateSubTrees(i + 1, end);
		for(int m = 0; m < (int)left.size(); m++){
			for(int n = 0; n < (int)right.size(); n++){
				TreeNode * node = new TreeNode(i);
				//may need to clone the subtrees
				node->left = left[m];
				node->right = right[n];
				v.push_back(node);
			}
		}
	}

	return v;
}

vector<TreeNode *> Others::generateTrees(int n){
	return generateSubTrees(1, n);
}