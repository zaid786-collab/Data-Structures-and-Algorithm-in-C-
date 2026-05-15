#include<bits/stdc++.h>
using namespace std;
// Interview Asked question in Paytm.

//We have to print number of possible binary strings where there will be no 2 consecutive 1 in a binary string.

void binarary(int n,int lastplace,string ans){
    if(n == 0){
        cout<<ans<<endl;
        return;
    }

    if(lastplace != 1){
        //Last place not equal to 1 so now we can put both 1 and 0 in a string.

        binarary(n-1,0,ans + '0');
        binarary(n-1,1,ans + '1');
    }
    else{
        //Last place equals to 1 so now we can only add 0 in next place.
        binarary(n-1,0,ans + '0');
    }
}

int main(){
    string ans = "";
    binarary(3,1,ans);  // 1 _ _
    return 0;
}