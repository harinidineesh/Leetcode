class Solution {
    public int[] runningSum(int[] nums) {
        int ans=0;
        int []newarr = new int[nums.length];
        for(int i=0;i<nums.length;i++){
            ans +=nums[i];
            newarr[i]= ans;
        }
        return newarr;
    }
}