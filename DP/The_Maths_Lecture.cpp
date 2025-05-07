#include <iostream>
using namespace std;

long long dp[1010][110]; // Dynamic programming (DP) array to store solutions for subproblems. 
                         // dp[i][j] stores the number of ways to form an i-digit number 
                         // such that the remainder when dividing its suffix by k is j.

int main() {
    long long n, k, m;    // n = number of digits, k = divisor, m = modulus
    long long ans = 0, q = 1;  // ans = final result, q is used to calculate remainders
    cin >> n >> k >> m;   // Read input values: number of digits, divisor, modulus

    dp[0][0] = 1;         // Base case: 1 way to have a 0-digit number where remainder is 0

    // Loop to calculate dp table for all numbers up to n digits
    for (int i = 1; i <= n; ++i) {
        dp[i][0] = 0;     // Initialize the dp table for the current i digits

        // Copy the previous row's values (dp[i-1]) to dp[i] for j = 1 to k-1
        for (int j = 1; j < k; ++j)
            dp[i][j] = dp[i - 1][j]; // This step ensures we can reuse previous results

        // Update dp table for i digits
        for (int j = 0; j < k; ++j) {
            for (int l = 1; l <= 9; ++l) { // Loop over possible digits (1 to 9, since leading zeroes aren't allowed)
                // Update the dp[i][(j + l*q) % k] by adding dp[i-1][j]
                dp[i][(j + l * q) % k] = (dp[i][(j + l * q) % k] + dp[i - 1][j]) % m;
            }
        }

        // Update the final answer when i digits are processed
        if (i == n)
            ans = (ans * 9) % m;  // For the nth digit, multiply by 9 (as it can be any digit from 1 to 9)
        else
            ans = (ans * 10) % m; // For digits less than n, multiply by 10 (allow any digit 0-9)

        ans = (ans + dp[i][0]) % m;  // Add the number of valid numbers with suffix divisible by k
        dp[i][0] = 1;    // Reset dp[i][0] for the next iteration
        q = (q * 10) % k; // Update q to handle digit places in base 10 (modulo k)
    }

    cout << ans << endl;  // Output the final result

    return 0;
}
