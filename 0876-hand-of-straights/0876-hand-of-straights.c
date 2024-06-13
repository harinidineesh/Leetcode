bool isNStraightHand(int* hand, int handSize, int groupSize) {
    if(handSize % groupSize != 0){
        return false;
    }   
        int i,j;
        for(i = 0;i < handSize; i++){
            for(j=i+1; j<handSize;j++){
                if(hand[i]>hand[j]){
                    int temp = hand[j];
                    hand[j]= hand[i];
                    hand[i]= temp;
                }
            }
        }
    int *count = (int *)calloc(handSize, sizeof(int));
    for (int i = 0; i < handSize; i++) {
        count[i] = 1;
    }

    for (int i = 0; i < handSize; i++) {
        if (count[i] == 0) continue; 
        int card = hand[i];
        for (int j = 0; j < groupSize; j++) {
            int found = 0;
            for (int k = 0; k < handSize; k++) {
                if (hand[k] == card + j && count[k] > 0) {
                    count[k]--;
                    found = 1;
                    break;
                }
            }
            if (!found) {
                free(count);
                return false;
            }
        }
    }

    free(count);
    return true;
    
}