#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     set<int> set1(a.begin(),a.end());

//     for(auto i=set1.begin();i != set1.end();++i){
//         cout<<*i<<" ";
//     }

//     return 0;

// }

// int main() {
//     string n,m;
//     cin>>n>>m;

//     set<char> setm(m.begin(),m.end());
//     set<char> set2;

//     int count = 0;

//     for(char ch : n){
//         if(setm.count(ch) && !set2.count(ch)){
//             count++;
//             set2.insert(ch);
//         }
//     }
//     cout << count << " ";

//     return 0;
// }

int main() {
    int m,n;
    cin>>m>>n;

    vector<int> a(m),b(n);

    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    set<int> s1(a.begin(),a.end());
    set<int> s2(b.begin(),b.end());

    int p = 0,q = 0;

    for(auto it : s1){
        if(!s2.count(it)){
            p++;
        }
    }

    for(auto it : s2){
        if(!s1.count(it)){
            q++;
        }
    }

    cout<<p*q;


    return 0;
}