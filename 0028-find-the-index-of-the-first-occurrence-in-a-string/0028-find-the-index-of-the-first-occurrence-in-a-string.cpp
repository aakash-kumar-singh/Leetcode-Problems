class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        if(m>n) return -1;
        int a=needle[0];
        vector<int> v;
        for(int i=0;i<n;i++){
            if(haystack[i]==a) v.push_back(i);
        }
        int x=0;
        int i=0,j=0;
        int idx=-1;
        while(i<n && j<m){
            if(haystack[i]==needle[j]){
                i++;
                j++;
            }
            else{
                x++;
                i=x;
                j=0;
            }
            if(j==m){
                idx=i-j;
                break;
            }
        }
        return idx;
        
    }
};