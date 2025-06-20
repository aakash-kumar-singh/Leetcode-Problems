class Solution {
public:
    bool isPalindrome(string s) {
        string clear="";
        for(char ch:s){
            if(isalnum(ch)){
                clear+=tolower(ch);
            }
        }
        int n=clear.length();
        string str=clear;
        int start=0;
        int end=n-1;
        while(start<end){
            swap(clear[start],clear[end]);
            start++;
            end--;
        }
        if(clear==str){
            return true;

        }
        return false;

    }
};