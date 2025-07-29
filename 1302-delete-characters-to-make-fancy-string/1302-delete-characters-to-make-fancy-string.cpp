class Solution {
public:
    string makeFancyString(string s) {
        int n=s.length();
        string ans="";
        int count=1;
        ans+=s[0];
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                ans+=s[i];
                count=1;
            }
            else if(s[i]==s[i-1] && count==1){
                ans+=s[i];
                count++;
            }
            
        }
        return ans;
    }
};