class Solution {
public:
  //Keeping track of the three pointers
  // low for 0, high for 2 and mid for 1;

  
  /* 
  if mid == 1 - nothing to change - mid++;
  if mid == 0 - needs to go to low -  swap(nums[mid],nums[low])- low++, mid++;
  if mid == 2 -  needs to go to high - swap(nums[mid],nums[high] - high--;
  exit condition -> mid> high; { loop till mid<=high}
  */
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0, mid = 0,high = n-1;
        
        while(mid<=high)
        {
            if(nums[mid] == 1) mid++;
            else
            if(nums[mid] == 0)
            {
                int temp =  nums[mid];
                nums[mid]=nums[low];
                nums[low]=temp;
                low++;
                mid++;
            }
            else if(nums[mid]== 2)
            {
                int temp =  nums[mid];
                nums[mid]=nums[high];
                nums[high]=temp;
                high--;
            }
        }
    }
};
