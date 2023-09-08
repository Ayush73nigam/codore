public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen=INT_MAX;
        int cur=1;
        int i=0,j=1;
        int sum=nums[i];
        while(j<nums.size() || i<nums.size()){
            if(sum>target){
                sum=sum-nums[i];
                cur--;
                i++;
            }
            else if(sum<target){
                sum+=nums[j];
                cur++;
                j++;
            }
            else{
                break;
            }
            minlen=min(minlen,cur);
        }
        return minlen;
    }