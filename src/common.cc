#include "common.h"

//returns the position of the target or return -1
int binarySearch(int A[], int start, int end, int target){
	int left = start, right = end - 1, mid;
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
	return -1;	
}

void printMatrix(vector< vector<int> > &matrix){
	for(unsigned int i = 0; i < matrix.size(); i++){
		for(unsigned int j = 0; j < matrix[0].size(); j++)
			cout<<matrix[i][j]<<" ";
		cout<<" "<<endl;
	}
}

ListNode * arrayToList(int A[], int n){
	if(n == 0)
		return NULL;

	ListNode * head = new ListNode(A[0]);
	ListNode * ptr = head;
	
	for(int i = 1; i < n; i++){
		ptr->next = new ListNode(A[i]);
		ptr = ptr->next;
	}

	return head;
}