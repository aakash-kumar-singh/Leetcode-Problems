class Solution {
public:
    void setZeroes(vector<vector<int>>& nums) {
     set<int> a;
     set<int> b;
     int n=nums.size();
     int m=nums[0].size();
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(nums[i][j]==0){
                a.insert(i);
                b.insert(j);
            }
        }
     }   
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a.count(i)>0 || b.count(j)){
                nums[i][j]=0;
            }
        }
     }
    }
};