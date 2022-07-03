#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

// best time to buy and sell stocks (easy)
int bestTimeToBuyAndSellStocks(vector<int> prices){
	int max_profit = 0;
	int min_ele = INT_MAX;
	for (int i = 0; i < prices.size(); ++i)
	{
		min_ele = min(min_ele , prices[i]);
		max_profit = max(max_profit, prices[i] - min_ele);
	}
	return max_profit;
}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout); 
	#endif

	//mahadev
	int n;
	cin>>n;
	vector<int> prices(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>prices[i];
	}
	
	cout<<bestTimeToBuyAndSellStocks(prices)<<endl;
	return 0;
}