#include "textjustify.h"

vector<string> TextJustify::fullJustify(vector<string> &words, int L){
	vector<string>	result;
	int i = 0, start = 0, j, k;
	int spaces, avgspace, len;
	while(start < (int)words.size()){
		//preprocess
		len = words[start].size();
		for(i = start + 1; i < (int)words.size() 
				&& len + (int)words[i].size() + 1 <= L; i++){
			len += words[i].size() + 1;
		}
		//justify
		string str(words[start]);
		spaces = L - len;	

		if(i == (int)words.size()){//last line
			for(j = start + 1; j < i; j++){
				str += " ";
				str += words[j];
			}			
			while(spaces-- > 0)
				str += " ";
		}else{
			if(i - 1 == start){
				while(spaces-- > 0)
					str += " ";
			}else{
				avgspace = spaces / (i - 1 - start);
				spaces -= avgspace * (i - 1 - start);
				for(j = start + 1; j < i; j++){
					str += " ";
					for(k = 0; k < avgspace; k++)
						str += " ";
					if(spaces-- > 0)
						str += " ";
					str += words[j];
				}			
			}		
		}
		result.push_back(str);
		start = i;
	}

	return result;
}