#include<iostream>
using namespace std;
int main(){
    int arr[8] = {1,6,7,9,15,25,30,35};
    int key = 30;
    int start = 0;
    int end = 7;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            cout<<mid<<" ";
            break;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
    }

    // int a[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // int key1 = 2;
    // int key2 = 9;
    // int unknownr = 0;
    // int unknownc = 0;
    // for(int i=0;i<1;i++){
    //     for(int j=0;j<4;j++){
    //         if(a[i][j] != key1){
    //         unknownr++;
    //         }
    //         if(a[j][i]!=key2){
    //             unknownc++;
    //         }
    //     }
    //     cout<<"UNKNOWN IN ROW IS : "<<unknownr<<endl;
    //     cout<<"UNKNOWN IN COLOUMN IS : "<<unknownc;
    // }


    // 2. Multiple Unknown value in a single line,Multiple Unknown value in a multiple line.

    return 0;
}