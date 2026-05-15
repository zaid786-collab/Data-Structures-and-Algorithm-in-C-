#include<iostream>
#include<vector>
using namespace std;
int main(){
    // 1. SIZE : 

    vector<int>a = {9,8,7,5};
    cout<<"SIZE : "<<a.size()<<endl;

    // 2.PUSH_BACK : 

    vector<int>b = {1,2,3};
    for(int v : b){
        cout<<"VALUE : "<<v<<endl;
    }
    cout<<"NEW VALUE PUSH"<<endl;
    b.push_back(7);
    for(int v : b){
        cout<<"NEW VALUES : "<<v<<endl;
    }

    // 3.POP_BACK : 

    vector<int>c = {1,2,3,4,5,6,7};
    for(int value : c){
        cout<<"OLD VALUES : "<<value<<endl;
    }
    c.pop_back();
    for(int value : c){
        cout<<"NEW VALUES : "<<value<<endl;
    }

    // 4. FRONT() : 

    vector<int>m = {780,321,890,432,785};
    for(int o : m){
        cout<<"VALUES : "<<o<<endl;
    }
    cout<<"FRONT VALUE : "<<m.front();

    // 5. BACK() : 

    vector<int>o = {123,234,345,456,567,678,789};
    cout<<"LAST VALUE : "<<o.back()<<endl;

    // 6. AT() :

    vector<int>i = {1,2,3,9,2,1};
    cout<<"ELEMENT AT 3RD INDEX : "<<i.at(3)<<endl;

    // 7. CAPACITY() :

    vector<int> i = {1,2,3,4,5,6,7,8,9};
    cout<<i.capacity();

    return 0;
}