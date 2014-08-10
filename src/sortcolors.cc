#include "sortcolors.h"

void SortColors::sortColors(int A[], int n){
	int left = 0, right = n-1, temp;
	for(int i = 0; i <= right; i++){
		switch(A[i]){
			case 0:
				temp = A[left];
				A[left++] = 0;
				A[i] = temp;
				break;
			case 1:
				//do nothing
				break;
			case 2:
				temp = A[right];
				A[right--] = 2;
				A[i] = temp;
				if(i <= right)
					i--;
				break;
			default:
			break;
		}
	}
}