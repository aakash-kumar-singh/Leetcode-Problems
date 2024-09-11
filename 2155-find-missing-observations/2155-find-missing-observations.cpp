class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int> ans;
        int m=rolls.size();
        int total=(m+n)*mean;
        int sum1=0;
        for(int i=0;i<m;i++){
            sum1+=rolls[i];
        }
        int missing=total-sum1;
        if(missing<n || missing>6*n){
            return ans;
        }
        // ans=vector<int>(n,1);
        // missing=missing-n;
        // for(int i=0;i<n;i++){
        //     int a=min(5,missing);
        //     ans[i]+=a;
        //     missing=missing-a;
        // }
        // return ans;

        int a=missing/n;
        int b=missing%n;
        for(int i=0;i<n;i++){
            ans.push_back(a);
        }
        for(int i=0;i<b;i++){
            ans[i]++;
        }
        
        return ans;

        


    }
};