class Solution {
public:
    int reverse(int x) {
        int d;
        long rev=0;
        while(x!=0){
            d=x%10;
            rev=rev*10+d;
            x=x/10;
            if(rev>(pow(2,31)-1) || rev<(pow(-2,31))){
                return 0;
            }
        }
        return rev;
    }
};