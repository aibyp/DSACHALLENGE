class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=nums.size();
        int i=0;
        int j=1;
        int res=1;
        while(j<k){
            if(nums[j]==nums[j-1]){
                j++;
                continue;
            }
            nums[i+1]=nums[j];
            i++;
            res++;
            j++;
        }
        return res;
    }
};