#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

int main(){
vector<string> st = {"eat","tea","tan","ate","nat","bat",};
unordered_map<string,vector<string>> mp;

for(string s : st){
    string temp = s;
    sort(temp.begin(),temp.end());
    mp[temp].push_back(s);
}

for(auto pair :mp){
    for(string word : pair.second){
        cout<<word<<" ";
    }
    cout<<endl;
}
return 0;
}
