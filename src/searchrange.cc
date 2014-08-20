#include "searchrange.h"

vector<int> SearchRange::searchRange(int A[], int n, int target) {
	vector<int> res(2);
	res[0] = res[1] = -1;
	if(target < A[0] || target > A[n-1])
		return res;
	//find the target use binary search
	int pos = binarySearch(A, 0, n, target);

	if(A[pos] == target)
		res[0] = res[1] = pos;
	else //not found
		return res;

	//find the edge
	int left = 0, right = res[0];
	while((pos = binarySearch(A, left, right, target)) > -1){
		res[0] = right = pos; 
	}
	
	left = res[1] + 1; right = n;
	while((pos = binarySearch(A, left, right, target)) > -1){
		res[1] = pos; 
		left = pos + 1; 
	}	

	return res;
}

int SearchRange::searchInsert(int A[], int n, int target){
	int left = 0, right = n - 1, mid;
	while(left <= right){
		mid = (left + right) / 2;
		if(A[mid] == target){
			return mid;
		}else if(A[mid] > target){
			right = mid - 1;
		}else{
			left = mid + 1;
		}
	}
	mid = (left + right) / 2;	
	return A[mid] > target ? mid : mid + 1;	
}

/*
	1. Find the index i of the largest value.
	2. from 0 to i , from n-1 to i
	   add the concaves.
*/
int SearchRange::trap(int A[], int n){
	if(n == 0)
		return 0;

	int result = 0, tmpResult = 0, top = 0, tmpTop = 0;
	for(int i = 1; i < n; i++){
		if(A[i] < A[tmpTop])
			tmpResult += A[tmpTop] - A[i];
		else{//A[i] >= A[top]
			result += tmpResult;
			tmpResult = 0;
			tmpTop = i;
		}			
	}

	tmpResult = 0;
	top = tmpTop;
	tmpTop = n - 1;
	for(int i = n - 2; i >= top; i--){
		if(A[i] < A[tmpTop])
			tmpResult += A[tmpTop] - A[i];
		else{//A[i] >= A[top]
			result += tmpResult;
			tmpResult = 0;
			tmpTop = i;
		}				
	}

	return result;
}