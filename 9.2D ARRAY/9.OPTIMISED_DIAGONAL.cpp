#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    int n = 3;
    for(int i=0;i<3;i++){
            sum += arr[i][i];
        if(i!=n-1-i){
            sum += arr[i][n-1-i];
            }
    }
    cout<<" SUM OF DIGONAL ELEMENTS IS : "<<sum;
   
return 0;
}
// int n = matrix.size(); Gives Number of rows in a 2-D Matrix.
