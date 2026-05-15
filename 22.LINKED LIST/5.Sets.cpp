#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;

    vector<int> a(m),b(n);
    set<int> A,B;


    for(int i=0;i<m;i++){
        A.insert(a[i]);
    }

    for(int j=0;j<n;j++){
        B.insert(b[j]);
    }

    set<int> C;
    set<int> D;

    set_intersection(A.begin(),A.end(),B.begin(),B.end(),inserter(C,C.begin()));

    set_intersection(B.begin(),B.end(),A.begin(),A.end(),inserter(D,D.begin()));

    int z = C.size();
    int x = D.size();

    cout<<z*x<<endl;

    return 0;
}