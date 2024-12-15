if (n <= 0) return -1; // Edge case: empty array

    // Check if the first element is a peak
    if (n == 1 || arr[0] >= arr[1]) {
        return 0;
    }

    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;
    }

    // Check for peaks in the middle of the array
    for (int i = 1; i < n - 1; ++i) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }

    return -1; 
