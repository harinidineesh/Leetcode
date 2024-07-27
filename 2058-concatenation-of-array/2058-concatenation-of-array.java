class Solution {
    public int[] getConcatenation(int[] nums) {
        int []newarr = new int[2*nums.length];
        for(int i=0, j=nums.length;i<nums.length;i++,j++){
            newarr[i]=nums[i];
            newarr[j]=nums[i];
        }
        return newarr;
    }
}