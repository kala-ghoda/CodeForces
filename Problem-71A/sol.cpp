#include <iostream>

std::string abbreviate(std::string word) {
    if (word.size() > 10) {
        std::string ans = word[0] + std::to_string(word.size() - 2) + word[word.size() - 1];
        return ans;
    }
    return word;
}

int main() {
    int n;
    std::cin>>n;

    for (int i = 0; i < n; i++) {
        std::string word;
        std::cin>>word;
        std::cout<<abbreviate(word)<<"\n";
    }
}
