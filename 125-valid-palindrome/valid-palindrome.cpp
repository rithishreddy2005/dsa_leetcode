class Solution {
public:
    bool isPalindrome(string s) {
        string ch="";
        for(char c: s){
            if(isalnum(c)){
                ch+=tolower(c);
            }
        }
        int left=0;
        int right=ch.size()-1;
        bool isPal=true;
        while(left<right){
            if(ch[left]!=ch[right]){
                isPal=false;
            }
            left++;
            right--;
        }
        return isPal;
    }
};