int c(const void* x, const void* y){
    return *(int*)x - *(int*)y;
}
int minIncrementForUnique(int* nums, int numsSize) {
    int count=0;
    qsort(nums,numsSize,sizeof(int),c);
    for(int i=1;i<numsSize;i++){
        if(nums[i]<=nums[i-1]){
            int incr =  nums[i-1] - nums[i]+1;
            nums[i] += incr;
            count+=incr;
        }
    }
    return count;
}