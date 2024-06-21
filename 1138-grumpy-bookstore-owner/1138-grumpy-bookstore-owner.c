int maxSatisfied(int* customers, int customersSize, int* grumpy, int grumpySize, int minutes) {
     int baseSatisfied = 0;
    for (int i = 0; i < customersSize; i++) {
        if (grumpy[i] == 0) {
            baseSatisfied += customers[i];
        }
    }

   
    int maxAdditionalSatisfied = 0;
    int currentAdditionalSatisfied = 0;

    
    for (int i = 0; i < minutes; i++) {
        if (grumpy[i] == 1) {
            currentAdditionalSatisfied += customers[i];
        }
    }
    maxAdditionalSatisfied = currentAdditionalSatisfied;

    
    for (int i = minutes; i < customersSize; i++) {
        if (grumpy[i] == 1) {
            currentAdditionalSatisfied += customers[i];
        }
        if (grumpy[i - minutes] == 1) {
            currentAdditionalSatisfied -= customers[i - minutes];
        }
        if (currentAdditionalSatisfied > maxAdditionalSatisfied) {
            maxAdditionalSatisfied = currentAdditionalSatisfied;
        }
    }

    
    return baseSatisfied + maxAdditionalSatisfied;
}
