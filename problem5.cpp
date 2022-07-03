#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

//sort arrays of zeros, ones, twos;
void sort_zeros_ones_twos(vector<int> &numbers){
	int low, mid, high;
	low = mid = 0;
	high = numbers.size()-1;
	while(mid <= high){
		int num = numbers[mid];
		if(num == 0){
			swap(numbers[low] , numbers[mid]);
			low++;
			mid++;
		}
		if(num == 1){
			mid++;
		}
		if(num == 2){
			swap(numbers[mid] , numbers[high]);
			high--;
		}
	}

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

	sort_zeros_ones_twos(numbers);
	for(auto num : numbers){
		cout<<num<<" ";
	}
	
	return 0;
}