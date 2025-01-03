#include <iostream>
#include <cstdint>

int main() {
    long int m, n, a;
    std::cin>>n>>m>>a;

    // The below line of code works locally on my machine, but it fails in the codeforces submission for one test
    // case with large numbers. To resolve this, the division and multiplication need to be casted to int64_t as well.

    /* long long unsigned int ans = (n / a + (n % a > 0)) * (m / a + (m % a > 0)); */
    int64_t ans = (static_cast<int64_t>(n / a) + (n % a > 0)) * (static_cast<int64_t>(m / a) + (m % a > 0));

    std::cout<<ans<<"\n";
}
