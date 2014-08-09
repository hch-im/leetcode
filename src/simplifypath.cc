#include "simplifypath.h"

string SimplifyPath::simplifyPath(string path){
	vector<string> v;
	int start = 1;

	path.push_back('/');
	for(int i = 0; i < path.size(); i++){
		if(path[i] == '/'){
			if(i > start){//get a token
				string str = path.substr(start, i - start);
				if(str.compare("..") == 0){
					if(v.size() > 0) v.pop_back();
				}else if(str.compare(".") == 0){
					//nothing
				}else v.push_back(str);	
			}				
			start = i + 1;
		}
	}

	string result;	
	for(int i = 0; i < v.size(); i++)
		result += ("/" + v[i]);

	return result.size() > 0 ? result : "/";
}