#include <iostream>

int main() {
    int n;
    std::cin>>n;
    int ans  = 0;

    for (int i = 0; i < n; i++) {
        std::string ops;
        std::cin>>ops;
        for (int i = 0; i < ops.size(); i++) {
            if (ops[i] == '+') {
                ans++;
                break;
            }
            if (ops[i] == '-') {
                ans--;
                break;
            }
        }
    }
    std::cout<<ans<<"\n";
}
