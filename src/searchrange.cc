#include "searchrange.h"

//returns the position of the target or return -1
int binarySearch(int A[], int start, int end, int target){
	int left = start, right = end, mid = (left + right) / 2;
	while(left < right){
		if(A[mid] == target){
			return mid;
		}else if(A[mid] > target){
			right = mid;
			mid = (left + right) / 2;
		}else{
			left = mid + 1;
			mid = (left + right) / 2;
		}
	}
	return -1;	
}

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
