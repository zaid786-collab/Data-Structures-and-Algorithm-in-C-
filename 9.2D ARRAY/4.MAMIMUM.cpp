#include<iostream>
using namespace std;
int main(){
    int arr[4][2] = {{23,45},{12,89},{98,67},{39,90}};
    int mx = INT8_MIN;
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            mx = max(mx,arr[i][j]);
        }
    }
    cout<<"MAMIMUM ELEMENT IN AN ARRAY : "<<mx;
    return 0;
}
