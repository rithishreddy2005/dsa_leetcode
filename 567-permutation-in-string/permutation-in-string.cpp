class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int left=0;
        int freqS1[26]={0};
        int freqS2[26]={0};
        for(char ch: s1){
            freqS1[ch-'a']++;
        }
        for(int right=0;right<s2.size();right++){
            freqS2[s2[right]-'a']++;
            while (right - left + 1 > s1.size()) {
                freqS2[s2[left]-'a']--;
                left++;
            }
            if(right-left+1==s1.size()){
                bool same = true;
                for(int i=0;i<26;i++){
                    if(freqS1[i]!=freqS2[i]){
                        same=false;
                        break;
                    }
                }
                if(same){
                    return true;
                }
                
            }

        }
        return false;
    }
};