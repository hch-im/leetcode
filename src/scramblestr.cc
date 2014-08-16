#include "scramblestr.h"

bool ScrambleString::isScramble(string s1, string s2) {
	if(s1.length() != s2.length())
		return false;
	int len = s1.size(), end;
	//DP method
	//use a 3-dimension array to save the repeated results
	//mark[k][i][j] saves the result of s1[i..i+k] and s2[j..j+k]
	bool mark[len+1][len][len];

	for(int k = 1; k <= len; k++){//k is the length of the substring
		end = len - k;
		for(int i = 0; i <= end; i++){//s1[i..i+k]
			for(int j = 0; j <= end; j++){//s2[j..j+k]
				if(k == 1)
					mark[k][i][j] = (s1[i] == s2[j]);
				else{
					mark[k][i][j] = false;
					for(int m = 1; m < k && !mark[k][i][j]; m++){
						if(mark[m][i][j] && mark[k-m][i+m][j+m])
							mark[k][i][j] = true;	
						else if(mark[m][i][j+k-m] && mark[k-m][i+m][j])
							mark[k][i][j] = true;	
					}
				}
//				cout<<mark[k][i][j]<<" ";
			}
//			cout<<" "<<endl;
		}
//		cout<<"\r\n"<<endl;
	}

	return mark[len][0][0];
}