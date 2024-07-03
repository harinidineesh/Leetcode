class Solution {
    public int[] plusOne(int[] digits) {
        int n=digits.length;
        int val= digits[n-1]+1;
        if(val<=9){
            digits[n-1]=val;
            return digits;
        }
        digits[n-1]=0;
        for(int i=n-2;i>=0;i--){
            val = digits[i]+1;
            if(val <=9){
                digits[i]=val;
                return digits;
            }
            digits[i]=0;
        }
        int []newArray = new int[n+1];
        newArray[0]=1;
        return newArray;
        
    }
}