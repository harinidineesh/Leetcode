class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
       ArrayList<Boolean> list = new ArrayList<>();
       int maxvalue = Integer.MIN_VALUE;
       for(int i=0;i<candies.length;i++){
        if(candies[i]>maxvalue){
            maxvalue=candies[i];
        }
       }
       for(int i=0;i<candies.length;i++){
        if(candies[i]+extraCandies >= maxvalue){
            list.add(true);
        }
        else{
        list.add(false);}
       }
       return list;
    }
}