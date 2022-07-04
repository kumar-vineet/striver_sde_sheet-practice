#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

//Rotate image by 90 degrees
void rotateMatrix(vector<vector<int>> &matrix){
	//logic
	// transposing the matrix
	for (int i = 0; i < matrix.size(); ++i)
	{
		for (int j = 0; j < i; ++j)	
		{
			swap(matrix[i][j] , matrix[j][i]);
		}
	}

	// reversing each row
	for (int i = 0; i < matrix.size(); ++i)
	{
		reverse(matrix[i].begin() , matrix[i].end());
	}
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout); 
	#endif

	//mahadev
	int n; cin>>n;
	vector<vector<int>> matrix(n , vector<int> (n, 0));
	for(int i=0 ; i< n ; i++){
		for(int j=0 ; j<n ; j++){
			cin>>matrix[i][j];
		}
	}
	rotateMatrix(matrix);
	for(int i=0 ; i< n ; i++){
		for(int j=0 ; j<n ; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}