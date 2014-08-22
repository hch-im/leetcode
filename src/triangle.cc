#include "triangle.h"

int Triangle::minimumTotal(vector<vector<int> > &triangle){
	if(triangle.size() == 0)
		return 0;
	int index = (int)triangle.size() - 1;
	vector<int> v(triangle[index]);
	while(--index >= 0){
		for(unsigned int i = 0; i < triangle[index].size(); i++){
			v[i] = triangle[index][i] + min(v[i], v[i + 1]); 
		}
	}

	return v[0];
}