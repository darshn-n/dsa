class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int mid = 0;
        int high = nums.size() - 1;


        while(mid<=high){
            switch(nums[mid]){

            // When num = 0;
            case 0:
            swap(nums[low++],nums[mid++]);
            break;  


            // When num = 1;
            case 1:
            nums[mid++];
            break;  


            // When num = 2;
            case 2:
            swap(nums[mid],nums[high--]);
            break;                


            }
        }
    }
};