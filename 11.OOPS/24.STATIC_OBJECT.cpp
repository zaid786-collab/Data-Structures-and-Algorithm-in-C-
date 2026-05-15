#include<bits/stdc++.h>
using namespace std;

class Example{
public:
    Example(){
        cout<<"Constructor...\n";
    }

    ~Example(){
        cout<<"Destructor...\n";
    }
};

int main(){
    int a = 0;
    if(a == 0){
        static Example eg1;
    }

    cout<<"Code Ending...\n";
    return 0;
}
/*
1. Object declared as an static is created in memory for lifetime of code,until an Program ends.
a. Without Static : Constructor...
    Destructor...
    Code Ending...

b. With Static : Constructor...
    Code Ending...
    Destructor...
*/