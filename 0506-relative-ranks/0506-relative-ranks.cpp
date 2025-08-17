class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<int> arrange=score;
        sort(arrange.begin(),arrange.end());
        reverse(arrange.begin(),arrange.end());
        vector<string> ans;
        int i=0;
        while(i<n){
            int idx;
            for(int j=0;j<n;j++){
                if(score[i]==arrange[j]){
                    idx=j;
                    cout<<idx<<" ";
                    break;
                }
            }
            if(idx+1==1) ans.push_back("Gold Medal");
            else if(idx+1==2) ans.push_back("Silver Medal");
            else if(idx+1==3) ans.push_back("Bronze Medal");
            else ans.push_back(to_string(idx+1));
            i++;
        }

        return ans;
    }
};