class Solution {
public:
    bool contains(int freqS[],int freqT[]){
        for(int i=0;i<256;i++){
            if(freqT[i]>freqS[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        if(s.length()<t.length()){
            return "";
        }
        int freqS[256]={0};
        int freqT[256]={0};
        for(int i=0;i<t.size();i++){
            freqT[t[i]]++;
        }
        

        int left=0;
        int minlen=INT_MAX;
        int start=0;
        for(int right=0;right<s.size();right++){
            freqS[s[right]]++;
            while(contains(freqS,freqT)){
                if(right-left+1<minlen){
                    minlen=right-left+1;
                    start=left;
                }
                freqS[s[left]]--;
                left++;
            }
        }
        if(minlen==INT_MAX){
            return "";
        }
        return s.substr(start,minlen);

    }
};