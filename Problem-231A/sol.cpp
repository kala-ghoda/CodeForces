#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int ans  = 0;

    for (int i = 0; i < n; i++) {
        int p, v, t;
        std::cin>>p>>v>>t;
        ans += (p + v + t > 1);
    }
    std::cout<<ans<<"\n";
}
