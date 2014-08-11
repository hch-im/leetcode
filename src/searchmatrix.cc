#include "searchmatrix.h"

bool SearchMatrix::searchMatrix(vector<vector<int> > &matrix, int target){
	int rows = matrix.size();
	int cols = matrix[0].size();
	int high = rows * cols, low = 0;
	int mid = high / 2, x, y;

	while(mid >= low && mid < high){
		x = mid / cols;
		y = mid % cols; 
		if(matrix[x][y] == target)
			return true;
		else if(matrix[x][y] > target){
			high = mid;
			mid = (low + high) / 2;			
		}else{
			low = mid + 1;
			mid = (low + high) / 2;
		}
	}

	return false;
}

void SearchMatrix::setZeroes(vector<vector<int> > &matrix) {
	//use first row to mark if each column contains 0
	//use the first column (except A[0][0]) and firstRow to 
	//mark if each row contains 0
	int firstRow = 1;
	for(int i = 0; i < matrix.size(); i++){
		for(int j = 0; j < matrix[0].size(); j++){
			if(matrix[i][j] == 0){
				matrix[0][j] = 0;
				if(i == 0)
					firstRow = 0;
				else
					matrix[i][0] = 0;
			}
		}
	}

	//update the table except the first row
	for(int i = matrix.size()-1; i >= 0; i--){
		for(int j = matrix[0].size() - 1; j >= 0; j--){
			if(i == 0){
				if(firstRow == 0) 
					matrix[i][j] = 0;
			}else if(matrix[0][j] == 0 || matrix[i][0] == 0){
				matrix[i][j] = 0;
			}
		}
	}	
}

vector<int> SearchMatrix::spiralOrder(vector<vector<int> > &matrix){
	vector<int> v;
	if(matrix.size() == 0)
		return v;
	int left = 0, right = matrix[0].size() - 1,
		top = 0, bottom = matrix.size() - 1;
	int dir = 0, //0 : left->right 1 : top->bottom 2 : right->left 3 : bottom->top	
		len = matrix.size() * matrix[0].size(),
		i;

	while(len > 0){
		switch(dir){
			case 0:
				for(i = left; i <=right; i++, len--)
					v.push_back(matrix[top][i]);
				top++;
			break;
			case 1:
				for(i = top; i <= bottom; i++, len--)
					v.push_back(matrix[i][right]);
				right--;
			break;
			case 2:
				for(i = right; i >= left; i--, len--)
					v.push_back(matrix[bottom][i]);
				bottom--;
			break;
			case 3:
				for(i = bottom; i >= top; i--, len--)
					v.push_back(matrix[i][left]);
				left++;
			break;
		}
		dir = (dir + 1) % 4;
	}

	return v;
}

vector<vector<int> > SearchMatrix::generateMatrix(int n){
	vector< vector<int> > v(n);
	if(n == 0)
		return v;

	for(int i = 0; i < n; i++)
		v[i] = vector<int>(n);

	int left = 0, right = n - 1,
		top = 0, bottom = n - 1;
	int dir = 0, //0 : left->right 1 : top->bottom 2 : right->left 3 : bottom->top	
		len = n * n,
		i, j = 1;

	while(j <= len){
		switch(dir){
			case 0:
				for(i = left; i <=right; i++, j++)
					v[top][i] = j;
				top++;
			break;
			case 1:
				for(i = top; i <= bottom; i++, j++)
					v[i][right] = j;
				right--;
			break;
			case 2:
				for(i = right; i >= left; i--, j++)
					v[bottom][i] = j;
				bottom--;
			break;
			case 3:
				for(i = bottom; i >= top; i--, j++)
					v[i][left] = j;
				left++;
			break;
		}
		dir = (dir + 1) % 4;
	}

	return v;	
}