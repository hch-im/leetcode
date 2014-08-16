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

void dfs2(vector<int> &S, int val, unsigned int index, vector<int> &solution, 
	vector<vector<int> > & result){
	unordered_set<int> set;	
	for(unsigned int i = 0; i < S.size(); i++){
		if(set.find(S[i]) != set.end())
			continue;		
		if(S[i] > val || (S[i] == val && i > index)){
			set.insert(S[i]);			
			solution.push_back(S[i]);
			vector<int> copy(solution);
			result.push_back(copy);
			dfs2(S, S[i], i, solution, result);
			solution.pop_back();
		}
	}
}

vector<vector<int> > Subsets::subsetsWithDup(vector<int> &S){
	vector<vector<int> > v;
	vector<int> solution;
	unordered_set<int> set;

	for(unsigned int i = 0; i < S.size(); i++){
		if(set.find(S[i]) != set.end())
			continue;
		set.insert(S[i]);
		solution.push_back(S[i]);
		vector<int> copy(solution);
		v.push_back(copy);
		dfs2(S, S[i], i, solution, v);
		solution.pop_back();
	}
	v.push_back(solution);

	return v;
}	
