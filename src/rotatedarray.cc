#include "rotatedarray.h"

int RotatedArray::searchI(int A[], int n, int target){
	int left = 0, right = n, mid;
	//find the rotated posation
	while(left < right){
		mid = (left + right)/2;
		if(A[mid] == target)
			return mid;
		else if(A[mid] < target){
			if(A[mid] > A[0]//if mid in the left part, then target in [mid+1..right]
				|| target <= A[n-1]){//mid in the right part and target <= A[n-1]  			
				left = mid + 1;
			}else{//mid in the right part and target >= A[0]
				right = mid;
			}
		}else{//A[mid] > target
			if(A[mid] < A[0]//if mid in the right part, then target in [left..mid-1]
				|| target >= A[0]){//mid in the left part and target >=A[0] 			
				right = mid;
			}else{//mid in the left part and target <= A[n-1]
				left = mid + 1;
			}
		}
	}

	return -1;
}

bool RotatedArray::searchII(int A[], int n, int target){
	int left = 0, right = n, mid;
	//find the rotated posation
	while(left < right){
		mid = (left + right)/2;
		if(A[mid] == target)
			return true;
		else if(A[mid] < target){
			if(A[mid] > A[left]//if mid in the left part, then target in [mid+1..right]
				|| target <= A[n-1]){//mid in the right part and target <= A[n-1]  			
				left = mid + 1;
			}else if(A[mid] < A[left] && target >= A[left]){//mid in the right part and target >= A[0]
				right = mid;
			}else{
				left++;
			}
		}else{//A[mid] > target
			if(A[mid] < A[left]//if mid in the right part, then target in [left..mid-1]
				|| target >= A[left]){//mid in the left part and target >=A[0] 			
				right = mid;
			}else if(A[mid] > A[left] && target <= A[right-1]){//mid in the left part and target <= A[n-1]
				left = mid + 1;
			}else{
				left++;
			}
		}
	}

	return false;
}	