class Solution {
public:
    bool isVowel(char ch){
        if(!isalpha(ch)) return false;
        int c=tolower(ch);
        if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    bool isValid(string word) {
        int n=word.length();
        if(n<3) return false;
        int vow=0;
        int cons=0;
        for(int i=0;i<n;i++){
            if(!isalnum(word[i])) return false;
            if(isVowel(word[i])) vow++;
            if(!isdigit(word[i]) && !isVowel(word[i])) cons++;
        }
        if(vow>0 && cons>0) return true;
        return false;
    }
};