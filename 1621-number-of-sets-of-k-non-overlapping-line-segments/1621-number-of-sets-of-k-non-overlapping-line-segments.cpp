class Solution {
public:
    static const long long MOD = 1e9 + 7;

    int numberOfSets(int n, int k) {

        // Answer = C(n + k - 1, 2k)

        int N = n + k - 1;
        int R = 2 * k;

        vector<long long> fact(N + 1), invFact(N + 1);

        fact[0] = 1;

        for (int i = 1; i <= N; i++)
            fact[i] = fact[i - 1] * i % MOD;

        invFact[N] = power(fact[N], MOD - 2);

        for (int i = N - 1; i >= 0; i--)
            invFact[i] = invFact[i + 1] * (i + 1) % MOD;

        return fact[N] * invFact[R] % MOD
                     * invFact[N - R] % MOD;
    }

private:
    long long power(long long a, long long b) {

        long long result = 1;

        while (b > 0) {

            if (b & 1)
                result = result * a % MOD;

            a = a * a % MOD;
            b >>= 1;
        }

        return result;
    }
};