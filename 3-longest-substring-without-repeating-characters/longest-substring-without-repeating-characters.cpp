class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int left=0;
        int right=0;
        int len=0;
        while(right<s.size()){
            if(st.find(s[right])==st.end()){
                st.insert(s[right]);
                len=max(right-left+1,len);
                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }

        }
        return len;
    }
};