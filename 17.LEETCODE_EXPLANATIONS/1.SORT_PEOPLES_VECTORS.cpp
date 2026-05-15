// 2418 on leetcode


// class Solution {
// public:
//     vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
//         vector<pair<int,string>> ans;

//         int n = names.size();
//         for(int i=0;i<n;i++){
//             ans.push_back({heights[i],names[i]});
//         }

//         sort(ans.rbegin(),ans.rend());

//         vector<string> v;

//         for(auto &x : ans){
//             v.push_back(x.second);
//         }
//         return v;
//     }
// };