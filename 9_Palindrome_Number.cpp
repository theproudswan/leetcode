#include <iostream>

using namespace std;

bool IsPalindrome (const string& str) {
    for (size_t i = 0; i < str.size() / 2; ++ i) {
        if (str[i] != str[str.size() - i - 1]) {
            return false;
        }
    }

    return true;
}

bool isPalindrome(int x) {
    if (x < 0) return false;
    return IsPalindrome(to_string(x));
}

int main() {

    return 0
}