int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int* relativeSortArray(int* arr1, int arr1Size, int* arr2, int arr2Size, int* returnSize) {
    int *arr3 = (int*)malloc(arr1Size * sizeof(int));
    int *remaining = (int*)malloc(arr1Size * sizeof(int));
    *returnSize = 0;
    int remainingSize = 0;
    int i, j;
    int found;

   
    for (i = 0; i < arr2Size; i++) {
        for (j = 0; j < arr1Size; j++) {
            if (arr2[i] == arr1[j]) {
                arr3[*returnSize] = arr1[j];
                (*returnSize)++;
            }
        }
    }

    for (i = 0; i < arr1Size; i++) {
        found = 0;
        for (j = 0; j < arr2Size; j++) {
            if (arr1[i] == arr2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            remaining[remainingSize++] = arr1[i];
        }
    }

    qsort(remaining, remainingSize, sizeof(int), compare);

    for (i = 0; i < remainingSize; i++) {
        arr3[*returnSize] = remaining[i];
        (*returnSize)++;
    }
    free(remaining);

    return arr3;
}