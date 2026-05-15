#include<bits/stdc++.h>
using namespace std;

class Print{
public :
    void show(int x){
        cout<<"Integer : "<<x<<endl;
    }

    void show(string s){
        cout<<"String : "<<s<<endl;
    }
};

int main(){
    Print p;
    p.show(30);
    p.show("zaid");
    return 0;
}
/*
1.Compile Time Polymorphism is of two type-->Function Overloding and Operator Overloding.

2. In Function Overloding their is a function with same name but with different parameters may have same or diffrent return type which will implement function Overloding.

3. Name of function shold be same in same class and the type of parameter passed will decide which function to implement.
*/