#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr = {{1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){

            if(i==j){
                sum += arr[i][j];
            }

            else if(i+j==2){
                sum += arr[i][j];
            }
        }
    }
    cout<<" SUM OF DIGONAL ELEMENTS IS : "<<sum;
   

    return 0;
}