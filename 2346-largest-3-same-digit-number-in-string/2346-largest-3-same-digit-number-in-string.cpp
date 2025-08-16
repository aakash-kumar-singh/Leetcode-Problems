class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.length();
        int maxm=INT_MIN;
        for(int i=0;i<n-2;i++){
            if(num[i+1]==num[i] && num[i+2]==num[i]){
                int a=num[i]-'0';
                int s1=a*100+a*10+a;
                maxm=max(maxm,s1);
            }
        }
        if(maxm==0) return "000";
        if(maxm!=INT_MIN) return to_string(maxm);
        return "";
    }
};