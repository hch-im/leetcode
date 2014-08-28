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

int Others::uniquePaths(int m, int n){
	if(m <= 1 || n <= 1)
		return 1;

	vector<int> v(m);
	//init v as the number of paths that start from the cells in
	//the last column
	for(int i = 0; i < m; i++)
		v[i] = 1;

	int tmp;
	for(int i = n - 2; i >= 0; i--){
		tmp = 1;//init tmp as the number of paths that start
		        //from one of the cell in the last row
		for(int j = m - 2; j >= 0; j--){
			tmp = tmp + v[j];
			v[j] = tmp;
		}
	}

	return v[0];
}

int Others::uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid){
	if(obstacleGrid.size() == 0)
		return 0;
	vector<int> col(obstacleGrid.size());
	vector<int> row(obstacleGrid[0].size());
	//init col as the number of paths that start from the cells in
	//the last column
	for(int i = (int)obstacleGrid.size() - 1; i >= 0; i--){
		if(obstacleGrid[i][obstacleGrid[0].size() - 1] == 1)
			break;
		col[i] = 1;
	}
	for(int i = (int)obstacleGrid[0].size() - 1; i >= 0; i--){
		if(obstacleGrid[obstacleGrid.size() - 1][i] == 1)
			break;
		row[i] = 1;
	}
	if(col.size() == 1u)//only one row
		return row[0];	
	if(row.size() == 1u)//only one column
		return col[0];
	int tmp;
	for(int i = (int)obstacleGrid.size() - 2; i >= 0; i--){
		for(int j = (int)obstacleGrid[0].size() - 2; j >= 0; j--){
			tmp = obstacleGrid[i][j] == 1 ? 0 : col[i] + row[j];
			col[i] = row[j] = tmp;
		}
	}

	return col[0];	
}

int Others::indexOfDigits(int A, int B){
	if(B > A) return -1;
	if(B == A) return 0;
	int n = 1, m = 1, tmp = A, val = 10;
	while(tmp >= 10){
		tmp /= 10;
		n++;
	}
	tmp = B;
	while(tmp >= 10){
		tmp /= 10;
		m++;
		val *= 10;
	}
	tmp = A;
	int val2 = pow(10, n - m);
	for(int i = 0; i <= n - m; i++){
		if((tmp / val2 - B) % val == 0)
			return i;
		val2 /= 10;
	}

	return -1;
}

/*
int Others::indexOfDigits(int A, int B){
	if(B > A) return -1;
	if(B == A) return 0;
	int n = 1, m = 1, tmp = A, val = 10;
	while(tmp >= 10){
		tmp /= 10;
		n++;
	}
	tmp = B;
	while(tmp >= 10){
		tmp /= 10;
		m++;
		val *= 10;
	}
	tmp = A;

	//right first
	for(int i = n - m; i >= 0; i--){
		if((tmp - B) % val == 0)
			return i;
		tmp /= 10;
	}
	
	return -1;
}
*/