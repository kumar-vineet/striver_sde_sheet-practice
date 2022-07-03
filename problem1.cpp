#include<bits/stdc++.h>
using namespace std;
#define ull long long
#define ll long long
#define endl "\n"
#define pb push_back
#define vec vector

void setZeroes(vector<vector<int>>& matrix) {
    int first_row=1,first_col=1;
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[0].size();j++){
            if(matrix[0][j]==0){
                first_row=0;
            }
            if(matrix[i][0]==0){
                first_col=0;
            }
        }
    }
    
    
    for(int i=1;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    
    for(int i=1;i<matrix.size();i++){
        for(int j=1;j<matrix[0].size();j++){
         if(matrix[0][j]==0 || matrix[i][0]==0){
            matrix[i][j]=0;
        }
    }
}

if(first_row==0){
    for(int i=0;i<matrix[0].size();i++){
        matrix[0][i]=0;
    }
}
if(first_col==0){
    for(int i=0;i<matrix.size();i++){
        matrix[i][0]=0;
    }
}
}

int main(){
	#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin); 
  freopen("output.txt","w",stdout); 
	#endif

	//mahadev
  vector<vector<int>>matrix;
  int row,col;
  cin>>row>>col;
  
  for(int i=0;i<row;i++){
     vector<int> row;
     for(int j=0;j<col;j++){
        int temp;
        cin>>temp;
        row.push_back(temp);
    }
    matrix.push_back(row);
}
setZeroes(matrix);

for(int i=0;i<matrix.size();i++){
    for(int j=0;j<matrix[0].size();j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

return 0;
}