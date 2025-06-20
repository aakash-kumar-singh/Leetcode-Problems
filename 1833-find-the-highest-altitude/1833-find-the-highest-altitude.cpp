class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> v(n+1);
        int j=0;
        for(int i=1;i<n+1;i++){
            v[i]=v[i-1]+gain[j++];
        }
        int maxm=INT_MIN;
        for(int i=0;i<n+1;i++){
            if(v[i]>maxm){
                maxm=v[i];
            }
        }
        return maxm;

    }
};