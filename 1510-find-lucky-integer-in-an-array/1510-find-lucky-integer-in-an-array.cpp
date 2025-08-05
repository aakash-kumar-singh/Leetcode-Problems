class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> count;
        for(int i=0;i<n;i++){
            count[arr[i]]++;
        }
        int maxm=-1;
        for(auto i:count){
            if(i.first==i.second){
                maxm=max(maxm,i.first);
            }
        }
        return maxm;
    }
};