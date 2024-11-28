 int i = 0, neg = 0;
    long res = 0;

    // Step 1: Ignore leading spaces
    while (s[i] == ' ') {
        i++;
    }

    // Step 2: Handle optional '+' or '-' sign
    if (s[i] == '-') {
        neg = 1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    // Step 3: Process numeric characters
    while (s[i] >= '0' && s[i] <= '9') {
        int temp = s[i] - '0';

        // Step 4: Check for overflow/underflow
        if (res > (INT_MAX - temp) / 10) {
            return neg ? INT_MIN : INT_MAX;
        }

        res = res * 10 + temp;
        i++;
    }

    // Step 5: Return the final result
    return neg ? -res : res;
