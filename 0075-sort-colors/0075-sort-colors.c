void swap(int *a, int *b){
    int temp= *a;
    *a=*b;
    *b=temp;

}
void sortColors(int* nums, int numsSize) {
    int m=0,l=0,h=numsSize-1;
    while(m<=h){
        if(nums[m]==0){
            swap(&nums[l],&nums[m]);
           l++;
            m++;
        }
         else if(nums[m]==1){
            m++;
        }
        else{
            swap(&nums[m],&nums[h]);
            h--;
        }
    }
    
}