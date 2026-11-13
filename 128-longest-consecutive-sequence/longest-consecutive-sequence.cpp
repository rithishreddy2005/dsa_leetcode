class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size()==0){
            return 0;
        }
        for(int x: nums){
            st.insert(x);
        }
        int maxLen=1;
        for(auto it: st){
            if(st.find(it-1)==st.end()){
                int x=it;
                int cnt=1;
                while(st.find(x+1)!=st.end()){
                    cnt++;
                    x++;
                }
                maxLen=max(maxLen,cnt);
            }
        }
        return maxLen;
    }
};