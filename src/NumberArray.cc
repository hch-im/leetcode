#include "numberarray.h"

int NumberArray::singleNumber(int A[], int n){
	int result = 0;
	for(int i = 0; i < n; i++)
		result = result ^ A[i];

	return result;
}

int NumberArray::singleNumberII(int A[], int n){
	int result = 0;
	int bits[32];

	for(int j = 0; j < 32; j++){
		bits[j] = 0;
		for(int i = 0; i < n; i++){
			if((A[i] >> j) & 1)//bit j is 1
				bits[j]++;			
		}
		bits[j] %= 3;
		if(bits[j] > 0)
			result |= (1 << j);			
	}

	return result;
}

vector<int> NumberArray::twoSum(vector<int> &numbers, int target){
	vector<int> result;
	unordered_map<int, int> map;
	for(int i = 0; i < (int)numbers.size(); i++){
		if(map.find(target - numbers[i]) != map.end()){
			result.push_back(map[target - numbers[i]]);
			result.push_back(i + 1);
			break;
		}
		map[numbers[i]] = i + 1;
	}
	return result;
}