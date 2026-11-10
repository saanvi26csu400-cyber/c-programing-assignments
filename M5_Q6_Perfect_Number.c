int reverse(int x) {
    long long reversed = 0;
    int digit;

    while (x != 0) {
        digit = x % 10;
        reversed = reversed * 10 + digit;
        x = x / 10;
    }

    if (reversed > 2147483647LL || reversed < -2147483648LL) {
        return 0;
    }

    return (int)reversed;
}
