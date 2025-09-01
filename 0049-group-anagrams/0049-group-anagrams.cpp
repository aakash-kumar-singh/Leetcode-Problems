class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        //we can use hashpam to store all th
        //for each string sort its characters 
        //we can use sorted string as a key in hasmap 
        // it is like a key of type string and its valed like a vector of type string
        unordered_map<string,vector<string>>mp;
        for(string s:strs){
            string key=s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }

        vector<vector<string>>ans;
        for(auto i:mp){
            ans.push_back(i.second);
        }
        return ans;
    }
};