class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n=candyType.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[candyType[i]]++;
        }
        int count=0;
        for(auto i:mp){
            count++;
        }
        int m=n/2;
        if(m<=count) return m;
        return count;
    }
};