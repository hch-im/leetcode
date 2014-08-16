#include "searchmatrix.h"
#include <gtest/gtest.h>

TEST(SearchMatrix, searchMatrix1){
	int values[3][4] = {{1, 3, 5, 7}, 
						{10, 11, 16, 20}, 
						{23, 30, 34, 50}};
	vector<int> v1(values[0], values[0] + sizeof(values[0])/sizeof(int));
	vector<int> v2(values[1], values[1] + sizeof(values[1])/sizeof(int));
	vector<int> v3(values[2], values[2] + sizeof(values[2])/sizeof(int));

	vector< vector<int> > matrix(3);
	matrix[0] = v1;
	matrix[1] = v2;
	matrix[2] = v3;
	SearchMatrix sm;
	EXPECT_TRUE(sm.searchMatrix(matrix, 1));	
	EXPECT_TRUE(sm.searchMatrix(matrix, 50));	
	EXPECT_TRUE(sm.searchMatrix(matrix, 30));
	EXPECT_FALSE(sm.searchMatrix(matrix, 31));				
	EXPECT_FALSE(sm.searchMatrix(matrix, 0));				
	EXPECT_FALSE(sm.searchMatrix(matrix, 100));				
}

TEST(SearchMatrix, searchMatrix2){
	int values[1][1] = {{1}};
	vector<int> v1(values[0], values[0] + sizeof(values[0])/sizeof(int));

	vector< vector<int> > matrix2(1);
	matrix2[0] = v1;
	SearchMatrix sm;
	EXPECT_TRUE(sm.searchMatrix(matrix2, 1));	
	EXPECT_FALSE(sm.searchMatrix(matrix2, 0));		
}

TEST(SearchMatrix, setZeros){
	int values[3][4] = {{1, 1, 1, 0}, 
						{0, 1, 0, 1}, 
						{1, 1, 1, 1}};
	vector<int> v1(values[0], values[0] + sizeof(values[0])/sizeof(int));
	vector<int> v2(values[1], values[1] + sizeof(values[1])/sizeof(int));
	vector<int> v3(values[2], values[2] + sizeof(values[2])/sizeof(int));

	vector< vector<int> > matrix(3);
	matrix[0] = v1;
	matrix[1] = v2;
	matrix[2] = v3;
	SearchMatrix sm;

	int result[3][4] = {{0, 0, 0, 0}, 
						{0, 0, 0, 0}, 
						{0, 1, 0, 0}};					

	sm.setZeroes(matrix);			
	
	for(unsigned int i = 0; i < matrix.size(); i++){
		for(unsigned int j = 0; j < matrix[0].size(); j++){
			EXPECT_EQ(result[i][j], matrix[i][j]);	
		}
	}		
}

TEST(SearchMatrix, spiralOrder){
	int values[3][4] = {{1, 3, 5, 7}, 
						{10, 11, 16, 20}, 
						{23, 30, 34, 50}};
	vector<int> v1(values[0], values[0] + sizeof(values[0])/sizeof(int));
	vector<int> v2(values[1], values[1] + sizeof(values[1])/sizeof(int));
	vector<int> v3(values[2], values[2] + sizeof(values[2])/sizeof(int));

	vector< vector<int> > matrix(3);
	matrix[0] = v1;
	matrix[1] = v2;
	matrix[2] = v3;
	SearchMatrix sm;
	vector<int> v = sm.spiralOrder(matrix);	
	int result[] = {1, 3, 5, 7, 20, 50, 34, 30, 23, 10, 11, 16};
	for(unsigned int j = 0; j < v.size(); j++){
		EXPECT_EQ(result[j], v[j]);	
	}
}

TEST(SearchMatrix, generateMatrix){
	int values[3][3] = {{1, 2, 3}, 
						{8, 9, 4}, 
						{7, 6, 5}};
	SearchMatrix sm;
	vector< vector<int> > v = sm.generateMatrix(3);	

	for(int i = 0; i < 3; i++)
	for(int j = 0; j < 3; j++){
		EXPECT_EQ(v[i][j], values[i][j]);	
	}
}