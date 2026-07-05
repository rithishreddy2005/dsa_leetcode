class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            vector<int> freq(26,0);
            for(int j=i;j<s.size();j++){
                freq[s[j]-'a']++;
                int max_freq=0;
                int min_freq=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                        min_freq=min(min_freq,freq[k]);
                        max_freq=max(max_freq,freq[k]);
                    }
                }
                sum+=(max_freq-min_freq);
            }
        }
        return sum;
    }
};