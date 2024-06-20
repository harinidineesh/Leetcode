int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to check if it's possible to place 'm' balls with at least 'minForce' magnetic force apart
int canPlaceBalls(int *position, int n, int m, int minForce) {
    int count = 1; // Place the first ball
    int lastPos = position[0];
    
    for (int i = 1; i < n; i++) {
        if (position[i] - lastPos >= minForce) {
            count++;
            lastPos = position[i];
        }
        if (count >= m) {
            return 1; // It's possible to place all balls
        }
    }
    return 0; // It's not possible to place all balls
}

int maxDistance(int *position, int n, int m) {
    qsort(position, n, sizeof(int), compare); // Sort the positions
    
    int left = 1; // Minimum possible force
    int right = position[n - 1] - position[0]; // Maximum possible force
    int result = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (canPlaceBalls(position, n, m, mid)) {
            result = mid; // Update the result as we found a larger minimum force
            left = mid + 1; // Try for a larger force
        } else {
            right = mid - 1; // Try for a smaller force
        }
    }
    
    return result;
}
