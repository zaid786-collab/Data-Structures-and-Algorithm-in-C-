#include<bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     map <int,int> a;

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//         a[i] = a[i]*a[i];
//     }

//     for(auto &it : a){
//         cout << it.first << "," << it.second << endl;
//     }

//     return 0;
// }

// int main () {
//     int n;
//     cin>>n;

//     unordered_map<int,int> mp;

//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         mp[x]++;
//     }

//     int unique = 0,nonunique = 0;

//     for(auto &i : mp){
//         if(i.second == 1){
//             unique++;
//         }else if(i.second >= 2){
//             nonunique++;
//         }
//     }

//     cout<<unique*nonunique<<endl;

//     return 0;
// }

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<int, int> freq;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<pair<int, int>> v;

    for (auto &p : freq) {
        v.push_back({p.first, p.second}); // {element, frequency}
    }

    sort(v.begin(), v.end(), [](const pair<int,int>& a,
                                const pair<int,int>& b) {
        if (a.second != b.second)
            return a.second > b.second;   // frequency descending
        return a.first < b.first;         // element ascending
    });

    for (auto &p : v) {
        cout << p.first << " ";
    }

    return 0;
}