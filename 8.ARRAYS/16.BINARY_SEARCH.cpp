#include<iostream>
using namespace std;

int binary(int arr[],int key,int start,int end){
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==key){
           return mid;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        else if(key<arr[mid]){
            end = mid - 1;
        }
    }
    return -1;

}

int main(){
    int arr[8] = {2,4,6,8,10,12,14,16};
    int key = 2;
    int start = 0;
    int end = 7;
    cout<<"INDEX : "<<binary(arr,key,start,end);
    return 0;
}

/*
    1) Binary search is an algorithm of finding elements only is sorted array,it will not work in unsorted array.

    2) In binary search algorithm first step is to find the mid position of an array,and then to check if key value less the or more then mid value in sorted array.

    3) Binary Search provides better time complexity then linear search.

    4) Binray search keep on dividing the array in two half's until the value is not found.

    5) We need to create 2 pointers for start and end of an array and with them mid also which is an key concept of binary search.

    6) In Binary Search our array gets divided into 2 each time and we need to check in half of it until search area becomes 1.

    7) Time Complexity is the relation between input value and operations performed on it.

    8) For n size input total log(n) iterations are done on it and its time complexity is O(log(n)).

    9) O(log(n)) time complexity is very good and efficient as compare to O(n).

    10) Time complexity of binary serach is O(log(n)).
    */