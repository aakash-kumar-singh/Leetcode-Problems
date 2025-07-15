class Solution {
public:
    int maxDifference(string s) {
        int n=s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int odd=INT_MIN;
        int even=INT_MAX;
        for(auto i:mp){
            if(i.second%2!=0){
                odd=max(odd,i.second);
            }
            else{
                even=min(even,i.second);
            }
        }
        return odd-even;
    }
};