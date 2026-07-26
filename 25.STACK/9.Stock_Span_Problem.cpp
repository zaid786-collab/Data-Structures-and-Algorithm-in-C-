#include<bits/stdc++.h>
using namespace std;

void stockspanproblem(vector<int> stock,vector<int> &span){
    stack<int> s;
    s.push(0);    
    span[0] = 1;   // No Element greter the 1st element on left so default value of span is 1.

    int size = span.size();

    for(int i=1;i<size;i++){
        int currprice = stock[i];

        // Keep Removing all the smaller and equal elements from stack because they will never become PreviousHigh in future.
        while(!s.empty()  && currprice >= stock[s.top()]){
            s.pop();
        }

        // Especial Case when Stack gets Empty
        if(s.empty()){
            span[i] = i + 1;
        }

        // Calculate Previous Greater element in Stocks and stores its index in Stack.
        else{
            int previoushigh = s.top();
            span[i] = i - previoushigh;
        }
        s.push(i);    // Updating the Stack with current value.
    }
}

int main () {
    vector<int> stock = {100,80,60,70,60,85,100};
    vector<int> span = {0,0,0,0,0,0,0};

    stockspanproblem(stock,span);

    int size = span.size();

    for(int i=0;i<size;i++) {
        cout << span[i] << " ";
    }

    return 0;
}