#include<bits/stdc++.h>
using namespace std;
// Interview Asked Question in Google,Amazon.

// Width of tile on floor is height 2 and width 1.[2x1].
int tilingproblem(int n){ //2xn
    if(n == 0 || n == 1){
        return 1;
    }
    //Vertical
    int ans1 = tilingproblem(n-1);//2xn-1

    //Horizontal
    int ans2 = tilingproblem(n-2);//2xn-2

    return ans1 + ans2;
};

int main(){
    int n = 4;  // n here means width of the floor and height in fixed to 2.
    cout<<"Number of ways to place tile on floor is : "<<tilingproblem(n);
    return 0;
}