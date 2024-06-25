int process(int num){
    int sum=0;
    while(num != 0){
        int rem = num%10;
        sum +=rem;
        num =num/10;
    }
    return sum;
}
int addDigits(int num) {
    int val;
    if(num==0)
    return 0;
    val=process(num);
    while(val>=10){
        val= process(val);
    }
    return val; 
}