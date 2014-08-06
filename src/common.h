#ifndef COMMON_H_
#define COMMON_H_

#include <cstdlib>
#include <iostream>
#include <cstring>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

#endif