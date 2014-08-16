#include "subsets.h"

void dfs(vector<int> &S, int val, vector<int> &solution, 
	vector<vector<int> > & result){
	for(unsigned int i = 0; i < S.size(); i++){
		if(S[i] > val){
			solution.push_back(S[i]);
			vector<int> copy(solution);
			result.push_back(copy);
			dfs(S, S[i], solution, result);
			solution.pop_back();
		}
	}
}

vector<vector<int> > Subsets::subsets(vector<int> &S){
	vector<vector<int> > v;
	vector<int> solution;

	for(unsigned int i = 0; i < S.size(); i++){
		solution.push_back(S[i]);
		vector<int> copy(solution);
		v.push_back(copy);
		dfs(S, S[i], solution, v);
		solution.pop_back();
	}
	v.push_back(solution);

	return v;
}
