#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }

    for(int j=0;j<m;j=j+2){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + matrix[i][j];
        }
        cout<<sum<<" ";
    }
    return 0;
}