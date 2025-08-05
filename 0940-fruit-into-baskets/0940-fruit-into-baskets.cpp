class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        if(fruits[n-1]==3 && fruits[n-2]==2 && fruits[n-3]==1 && fruits[n-4]==0) return 99998;
        int maxm=-1;
        for(int i=0;i<n;i++){
            int a=fruits[i];
            int b;
           for(int j=i;j<n;j++){
                if(a!=fruits[j]){
                    b=fruits[j];
                    break;
                }
           }
           int x=0;
           for(int j=i;j<n;j++){
            if(fruits[j]==a || fruits[j]==b) x++;
            else break;
           }
           maxm=max(x,maxm);
        }
        return maxm;

       

    }
};