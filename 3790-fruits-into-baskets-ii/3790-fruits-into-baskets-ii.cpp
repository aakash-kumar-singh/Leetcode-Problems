class Solution {
public:
    bool isVisited(vector<int> &v,int x){
        int n=v.size();
        for(int i=0;i<n;i++){
            if(x==v[i]) return true;
        }
        return false;
    }
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size();
        vector<int> v(n,-1);
        int ans=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(!isVisited(v,j) && fruits[i]<=baskets[j]){
                    v.push_back(j);
                    ans--;
                    break;

                }
            }
        }
        return ans;

    }
};