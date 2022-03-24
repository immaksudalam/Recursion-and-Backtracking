class Solution {
public:
    vector<vector<int>>ans;
    
    void permutation(vector<int>&nums, int pos){
        if(pos == nums.size()){
            ans.push_back(nums);
            return;
        }
        
        for(int i = pos; i<nums.size(); i++){
            swap(nums[i], nums[pos]);
            permutation(nums, pos+1);
            swap(nums[i], nums[pos]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        permutation(nums, 0);
        return ans;
    }
};
