#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>umap;
        for(auto x:strs){
            string temp=x;
            sort(x.begin(),x.end());
            umap[x].push_back(temp);
        }
        for(auto x:umap){
            ans.push_back(x.second);
        }   
        return ans;
    }
int main() {
    int n;
    cin >> n;

    vector<string> strs(n);

    for(int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    vector<vector<string>> result = groupAnagrams(strs);

    for(auto group : result) {
        for(auto word : group) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}