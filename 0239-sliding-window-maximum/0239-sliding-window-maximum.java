class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
        LinkedList<Integer> index = new LinkedList();
        List<Integer> result = new ArrayList();
        for(int i=0 ;i< nums.length;i++){
            while(index.size()>0 && index.getFirst() <= i-k)
                index.removeFirst();
            while(index.size() > 0 && nums[i]>=nums[index.getLast()])
                index.removeLast();
            index.addLast(i);
            if(i >= k-1)
                result.add(nums[index.getFirst()]);
        }
        return result.stream().mapToInt(x -> x).toArray();
    }
}