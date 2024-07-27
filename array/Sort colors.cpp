class Solution {
public:
    void sortColors(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        
        vector<int>nums2;
        while(!q.empty())
        {
            nums2.push_back(q.top());
            q.pop();
        }
        nums=nums2;
    }
};
