#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

//KADANE'S ALGORITHM
int max_subarray_sum(vector<int> numbers){
	int max_sub_sum = INT_MIN;
	int curr_sum = 0;
	for(int i=0 ; i<numbers.size() ; i++){
		curr_sum += numbers[i];
		if (curr_sum > max_sub_sum)
			{
				max_sub_sum = curr_sum;
			}
		if (curr_sum < 0)
			{
				curr_sum = 0;
			}
	}

	return max_sub_sum;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout); 
	#endif

	//mahadev
	int n; cin>>n;
	vector<int> numbers(n);
	for (int i = 0; i < n; ++i)
	 {
	 	cin>>numbers[i];
	 } 

	cout<<max_subarray_sum(numbers)<<endl;
	
	return 0;
}