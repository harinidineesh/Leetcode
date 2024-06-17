bool judgeSquareSum(int c) {
    for (long a = 0; a * a <= c; ++a) {
        long b = c - a * a;
        long b_sqrt = (long)sqrt(b);
        if (b_sqrt * b_sqrt == b) {
            return true;
        }
    }
    return false;
}