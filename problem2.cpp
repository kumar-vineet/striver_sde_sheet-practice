#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

vector<vector<int>> generate(int numRows) {
	vector<vector<int>> res;
	for(int i=1 ; i<=numRows ; i++){
		vector<int> row;
		row.push_back(1);
		for(int j=1 ; j<i-1; j++){
			int top_sum=res[i-2][j-1]+res[i-2][j];
			row.push_back(top_sum);
		}
		if(i>1) row.push_back(1);
		res.push_back(row);
	}
	return res;
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout); 
	#endif

	//mahadev
	int numRows;
	cin>>numRows;
	vec<vec<int>> res;
	res=generate(numRows);

	for(int i=0; i<numRows; i++){
		cout<<"[ ";
		for (auto ele: res[i])
		{
			cout<<ele<<" ";
		}
		cout<<"]"<<endl;
	}
	
	return 0;
}