class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        if(n%2!=0) return false;
        map<int,int> count;
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(auto i:count){
            if(i.second%2!=0) return false;
        }
        return true;
    }
};