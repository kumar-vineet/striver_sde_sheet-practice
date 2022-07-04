#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

//merge overlapping subintervals
vector<pair<int, int>> mergeOverlappingSubintervals(vector<pair<int, int>> intervals){
	sort(intervals.begin(), intervals.end());

	int n = intervals.size();
	vector<pair<int,int>> mergedIntervals;
	mergedIntervals.push_back(intervals[0]);
	for (int i = 1; i < n; ++i)
	{
		pair<int,int> p1 = mergedIntervals[mergedIntervals.size()-1];
		pair<int,int> p2 = intervals[i];

		if((p1.second>=p2.first && p1.second<=p2.second) || (p2.second>=p1.first && p2.second<=p1.second)){
			mergedIntervals.pop_back();
			mergedIntervals.push_back({min(p1.first, p2.first), max(p1.second, p2.second)});
		}
		else{
			mergedIntervals.push_back(p2);
		}
	}
	return mergedIntervals;

}
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin); 
		freopen("output.txt","w",stdout); 
	#endif

	//mahadev
    int n; cin>>n;
    vector<pair<int, int>> intervals;
    for(int i=0; i<n; i++){
    	int f,s;
    	cin>>f>>s;
    	intervals.push_back({f,s});
    }
    intervals= mergeOverlappingSubintervals(intervals);

    cout<<"[ ";
    for(auto p: intervals){
    	cout<<"("<<p.first<<","<<p.second<<"), ";
    }
    cout<<"]";
	
	return 0;
}