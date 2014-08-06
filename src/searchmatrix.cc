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