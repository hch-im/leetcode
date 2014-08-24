#include "strings.h"

vector<int> Strings::findSubstring(string S, vector<string> &L){
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

bool Strings::isPalindrome(string s){
	int left = 0, right = s.size() - 1;
	char ch1, ch2;
	while(left < right){
		ch1 = s[left];
		if((ch1 >= 'a' && ch1 <= 'z') || (ch1 >= 'A' && ch1 <= 'Z'))
			ch1 = ch1 > 'Z' ? ch1 : (ch1 + 'a' - 'A');
		else if(ch1 >= '0' && ch1 <= '9'){
			//
		}else{
			left++;
			continue;
		}
		ch2 = s[right];
		if((ch2 >= 'a' && ch2 <= 'z') || (ch2 >= 'A' && ch2 <= 'Z'))
			ch2 = ch2 > 'Z' ? ch2 : (ch2 + 'a' - 'A');
		else if(ch2 >= '0' && ch2 <= '9'){
			//
		}else{
			right--;
			continue;
		}	
		if(ch1 == ch2){
			left++;
			right--;
		}else return false;	
	}

	return true;
}