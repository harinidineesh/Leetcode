class Solution {
    public void moveZeroes(int[] nums) {
        int nozero=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=0){
            nums[nozero]=nums[i];
            nozero++;}
        }
        for(int i=nozero;i<nums.length;i++){
            nums[i]=0;
        }
    
    }
 
}