class Solution {
public:
    long long coloredCells(int n) {
        long long sum=0;
        long long m=1;
        for(int i=1;i<=n;i++){
            if(i==n){
                sum+=m;
            }
            else{
                sum+=m;
                m+=2;

            }
            
        }
        m-=2;
        for(int i=1;i<=n-1;i++){
            sum+=m;
            m-=2;
        }
        return sum;
    }
};