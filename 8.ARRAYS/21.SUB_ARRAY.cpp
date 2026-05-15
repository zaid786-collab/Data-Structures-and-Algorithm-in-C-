#include<iostream>
using namespace std;

void print(int a[],int value,int start){
    for(int i=0;i<5;i++){
        value = 0;
        for(int j=start;j<5;j++){
            value = (value*10) + a[j];
            cout<<value<<" ";
        }
        start = start + 1;
        cout<<endl;
    }
}

int main(){
    int a[5] = {1,2,3,4,5};
    int value = 0;
    int start = 0;

    print(a,value,start);
    

    return 0;
}

/*
1) Sub array is an continues part of an array.

2) Calculated by : n+(n-1)+(n-2)+...+1/n*(n+1)/2. where n is the size of an array.

3) Time Complexity of this code is O(n*2).
*/