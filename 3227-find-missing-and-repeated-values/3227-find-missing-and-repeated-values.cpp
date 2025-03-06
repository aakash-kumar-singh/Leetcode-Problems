class Solution {
public:
    bool findHere(vector<vector<int>> grid, int x){
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==x){
                    return true;
                }
            }
        }
        return false;
        
    }
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int> count;
        vector<int> ans;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                count[grid[i][j]]++;
            }
        }
        for(auto i:count){
            if(i.second>1){
                ans.push_back(i.first);
            }
        }
        for(int i=1;i<=n*m;i++){
            if(!findHere(grid,i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};