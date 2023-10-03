class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string res="";
        while (n > 0) {
        n--; // Adjust n to start from 0 instead of 1
        char digit = 'A' + n % 26; // Get the rightmost character
        res = digit + res;
        n /= 26; // Move to the next group of characters
    }
        return res;
    }
};
