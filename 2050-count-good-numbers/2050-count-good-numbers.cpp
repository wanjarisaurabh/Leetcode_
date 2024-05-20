class Solution {
    int mod = 1000000007;

    long long power(long long x, long long n) {
        long long ans = 1;
        while (n) {
            if (n % 2) {
                ans = (ans * x) % mod;
                n = n - 1;
            } else {
                x = (x * x) % mod;
                n = n / 2;
            }
        }
        return ans;
    }

public:
    int countGoodNumbers(long long n) {
        long long odd = n / 2;
        long long even = n / 2 + n % 2;
        long long ans = power(5, even);
        ans = (ans * power(4, odd)) % mod;
        return (int)ans;
    }
};