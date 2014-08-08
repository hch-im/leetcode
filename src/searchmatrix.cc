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
	printMatrix(matrix);
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
	cout<<" "<<endl;
	printMatrix(matrix);	
}