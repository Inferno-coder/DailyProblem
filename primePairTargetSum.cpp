class Solution {
  public:
  std::vector<int> sieve_of_eratosthenes(int n) {
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; ++p) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    std::vector<int> prime_numbers;
    for (int p = 2; p <= n; ++p) {
        if (is_prime[p]) {
            prime_numbers.push_back(p);
        }
    }
    return prime_numbers;
}
    vector<int> getPrimes(int n) {
        // code here
        vector<int>primes=sieve_of_eratosthenes(n);
        set<int>st(primes.begin(),primes.end());
        for(int i=0;i<primes.size();i++){
            if(st.count(n-primes[i]))return {primes[i],n-primes[i]};
        }
        return {-1,-1};
    }
};
