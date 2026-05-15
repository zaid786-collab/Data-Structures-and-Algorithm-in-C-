#include<bits/stdc++.h>
using namespace std;
// Time Complexity of this code is O(n*log(n)).
int main(){
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    int key = 15;
    int start = 0;
    int end = 3;   // Row wise binary search
    int n = 0;
    while(n<4){
        start = 0,end = 3;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[n][mid]==key){
                cout<<"Row Index : "<<n<<"\nColumn Index : "<<" "<<mid;
                return 0;
            }
            else if(arr[n][mid]<key){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
        n++;
    }
    cout<<"Value not found.";
    return 0;
}