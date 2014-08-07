#include "common.h"

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