class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int start =0, end = nums.size()- 1, ans = nums.size();

        while(start<=end ){

            int mid = start + (end - start)/2;
            
            if(nums[mid]==target){

                return mid;
                break;
            }

            else if (nums[mid]<target){

                start = mid +1;
            }                                                    // HERE WE HAVE ans = nums.size() AS IF THE NUMBER IS  OUTSIDE THE ARRAY TO THE LEFT
                                                                  //  IT WILL RETURN THE SIZE OF ARRAY 

            else{
                 ans  = mid ;
                end = mid -1 ;
            }

           
        }
         return ans ;
        
    }
};
