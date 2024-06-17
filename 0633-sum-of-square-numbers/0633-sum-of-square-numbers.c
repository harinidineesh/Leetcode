bool judgeSquareSum(int c) {
    for (long a = 0; a * a <= c; ++a) {
        // Calculate b^2 = c - a^2
        long b = c - a * a;
        // Check if b is a perfect square
        long b_sqrt = (long)sqrt(b);
        if (b_sqrt * b_sqrt == b) {
            return true;
        }
    }
    return false;
}