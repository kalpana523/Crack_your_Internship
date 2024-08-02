class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>nums2;
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums2.push_back(nums[i]);
            }
            else
            {
                c++;
            }
        }
        for(int i=0;i<c;i++)
        {
            nums2.push_back(0);
        }
        nums=nums2;
    }
};
