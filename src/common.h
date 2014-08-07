#ifndef COMMON_H_
#define COMMON_H_

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <stack>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int binarySearch(int A[], int start, int end, int target);

#endif