#include "sorting.h"

void Sorting::sortColors(int A[], int n){
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

string Sorting::sortString(string s){
	int C[128];
	fill(C, C + 128, 0);
	char * B = new char[s.size() + 1];
	fill(B, B + s.size(), 0);
	B[(int)s.size()] = '\0';

	for(int i = 0; i < (int)s.size(); i++)
		C[(int)s[i]]++;
	
	for(int i = 1; i < 128; i++){
		C[i] += C[i - 1];
	}

	for(int i = (int)s.size() - 1; i >= 0; i--){
		B[C[(int)s[i]] - 1] = s[i];
		C[(int)s[i]]--;
	}

	string result(B);
	delete[] B;

	return result;
}