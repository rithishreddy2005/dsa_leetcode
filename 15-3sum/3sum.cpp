class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k=nums.size()-1;
            if(i>0 && nums[i-1]==nums[i]){
                continue;
            }
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++;
                    k--;
                    while(j<k && nums[j-1]==nums[j]){
                        j++;
                    }
                    while(j<k && nums[k+1]==nums[k]){
                        k--;
                    }
                }
                else if(sum>0){
                    k--;
                }

                else{
                    j++;
                }

            }
        }
        return ans;
    }
};