class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n= nums.size();

        int start =0 , end = n-1, First = -1, Last =-1;

        while (start<=end){

            int mid =  start +(end-start)/2;

            if(nums[mid]==target){
                First = mid;
                end = mid -1;

            }
            else if( nums[mid]< target){
                 start = mid +1;


            }
            else
             end = mid -1;
        }


          start =0 , end = n-1;


          

         while (start<=end){

              int mid =  start +(end-start)/2;

            if(nums[mid]==target){
                Last = mid;
                 start = mid +1;

            }
            else if( nums[mid]< target){
                 start = mid +1;


            }
            else
             end = mid -1;









         }

         vector<int>X(2);
         X[0]=First;
         X[1]= Last;

         return X;
    }
    
         

        
    
};
