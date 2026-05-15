#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[2][3] = {{4,7,8},{7,8,8}};  
    
    int key = 7;
    int count = 0;

    for(int row = 0; row < 2; row++){
        int start = 0, end = 2;

        while(start <= end){
            int mid = (start + end) / 2;

            if(arr[row][mid] == key){
                count++;
                break;       
            }
            else if(arr[row][mid] > key){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        }
    }

    cout << "Number of times key appear in matrix is: " << count;
    return 0;
}
