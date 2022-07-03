#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

vector<int> nextPermutation(vector<int> numbers){
	int n = numbers.size();
	if(n<=1){
		return numbers;
	}

	int breakPoint = n-2;
	while(breakPoint>=0 && numbers[breakPoint] >= numbers[breakPoint+1]) breakPoint--;
	if(breakPoint>=0){
		int i=n-1;
		while(numbers[i] <= numbers[breakPoint]) i--;
		swap(numbers[i],numbers[breakPoint]);
	}
	breakPoint++;
	int j = n-1;

	while(breakPoint<j){
		swap(numbers[breakPoint] , numbers[j]);
		j--;
		breakPoint++;
	}
	return numbers;

}

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout); 
	#endif

	//mahadev
	int n;
	cin>>n;
	vector<int> numbers(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>numbers[i];
	}

	vector<int> result = nextPermutation(numbers);

	for(auto element : result){
		cout<<element<<" ";
	}

	
	return 0;
}