int heightChecker(int* heights, int heightsSize) {
    int expected[heightsSize],count=0;
    for(int i=0;i<heightsSize;i++){
        expected[i]=heights[i];
    }
    for(int i=0;i<heightsSize;i++){
        for(int j=i+1;j<heightsSize;j++){
            if(expected[i]>expected[j]){
                int temp=expected[i];
                expected[i]=expected[j];
                expected[j]=temp;
            }
        }
    }
    for(int i=0;i<heightsSize;i++){
        if(expected[i]!=heights[i])
        count++;
    }
    return count;
}