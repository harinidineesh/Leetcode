int minPatches(int* nums, int numsSize, int n) {
    int cost = 0;
    long upper = 0;
    int i = 0;

    while (upper < n) {
        if (i < numsSize && nums[i] <= upper + 1) {
            upper += nums[i];
            i++;
        } else {
            cost++;
            upper += upper + 1;
        }
    }

    return cost;
}
