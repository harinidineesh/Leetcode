class Solution {
    public int[] sortedSquares(int[] nums) {
        // for(int i=0;i<nums.length;i++){
        //     nums[i]= nums[i]*nums[i];
        // }
        // for(int i=0;i<nums.length;i++){
        //     for(int j=i+1;j<nums.length;j++){
        //         if(nums[i]>nums[j]){
        //             int temp = nums[i];
        //             nums[i]= nums[j];
        //             nums[j] = temp;
        //         }
        //     }
        // }
        // return nums;

        int left=0, right = nums.length-1, pointer = nums.length-1;
        int []result = new int [nums.length];
        while(left<=right){
            if(Math.abs(nums[left])> Math.abs(nums[right])){
                result[pointer]= nums[left]*nums[left];
                left++;
                pointer--;
            }
            else{
                result[pointer]= nums[right]*nums[right];
                right--;
                pointer--;
            }
        }
        return result;
    }
}