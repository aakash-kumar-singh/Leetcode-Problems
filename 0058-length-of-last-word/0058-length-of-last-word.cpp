class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                while(i>=0 && s[i]!=' '){
                    st.push(s[i]);
                    i--;
                }
                return st.size();
            }
        }
        return 0;
    }
};