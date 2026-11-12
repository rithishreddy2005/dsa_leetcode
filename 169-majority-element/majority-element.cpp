class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int votes=1;
       int cand=nums[0];
       for(int i=1;i<nums.size();i++){
        if(votes==0){
            votes=1;
            cand=nums[i];
        }
        else if(cand==nums[i]){
            votes++;
        }
        else{
            votes--;
        }
       }
       int majority;
       if(votes>0){
        majority=cand;
       }

       int count=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i]==majority){
            count++;
        }
       }
       if(count>nums.size()/2){
        return majority;
       }
       return -1;
    }

};