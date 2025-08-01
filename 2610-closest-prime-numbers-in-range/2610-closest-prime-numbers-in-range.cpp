class Solution {
public:
    bool isPrime(int x){
        if(x<=1) return false;
        if(x==2) return true;
        for(int i=2;i<=sqrt(x);i++){
            if(x%i==0) return false;
        }
        return true;

    }
    vector<int> closestPrimes(int left, int right) {
        vector<int> primeNum;
        for(int i=left;i<=right;i++){
            if(isPrime(i)) primeNum.push_back(i);
        }
        int n=primeNum.size();
        if(n<2) return {-1,-1};
        int minm=INT_MAX;
        int a=-1;
        int b=-1;
        for(int i=1;i<n;i++){
            int diff=primeNum[i]-primeNum[i-1];
            if(diff<minm){
                minm=diff;
                a=primeNum[i-1];
                b=primeNum[i];
            }
        }
        if(minm==INT_MAX) return {-1,-1};
        return {a,b};
    }
};