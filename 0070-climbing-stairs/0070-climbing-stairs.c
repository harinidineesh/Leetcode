int climbStairs(int n) {
    int i;
    int first =1,second=1,step=0;
    if(n<=1)
    return 1;
    for (int i = 2; i <= n; ++i) {
        step = first + second;
        first = second;
        second = step;
    }
    return step;
}