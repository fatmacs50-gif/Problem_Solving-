class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hashMap;
        
        for(int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // لو لقيت الرقم المكمل في الـ map
            if(hashMap.find(complement) != hashMap.end()) {
                return {hashMap[complement], i};
            }
            
            // احفظ الرقم الحالي مع فهرسه
            hashMap[nums[i]] = i;
        }
        
        return {};
    }
};
