#include "substring.h"

vector<int> SubString::findSubstring(string S, vector<string> &L){
	vector<int> result;	
	if(L.size() == 0 || L[0].size() * L.size() > S.size())
		return result;
	unsigned int i, j, end, len, end2;
	unordered_map<string, int> map;
	for(i = 0; i < L.size(); i++)
		map[L[i]] ++; 

	len = L[0].size();
	end = S.size() - len * L.size();
	unordered_map<string, int> tmpMap;
	bool find;

	for(i = 0; i <= end; i++){
		end2 = i + len * L.size();
		tmpMap.clear();
		find = true;
		for(j = i; j < end2; j += len){
			string str = S.substr(j, len);
			if(map.find(str) == map.end()){
				find = false;
				break;
			}

			tmpMap[str]++;
			if(tmpMap[str] > map[str]){
				find = false;
				break;
			}
		}
		if(find)
			result.push_back(i);
	}
	return result;
}