class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0;
        int right=k;
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double max_avg=sum/k;
        while(right<nums.size()){
            sum=sum+nums[right]-nums[left];
            double avg=sum/k;
            max_avg=max(max_avg,avg);
            left++;
            right++;
        }
        return max_avg;
    }
};