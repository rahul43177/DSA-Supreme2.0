#include <iostream>
using namespace std;

bool isPalindrome(string &s, int start, int end) {
    if (start >= end)
        return true;
    return (s[start] == s[end]) && (isPalindrome(s, start + 1, end - 1));
}

int main() {
    string s = "aabbaa";
    int start = 0;
    int end = s.size() - 1; // Corrected the end index
    bool find = isPalindrome(s, start, end);
    if (find)
        cout << "The string is palindrome";
    else
        cout << "The string is not palindrome";

    return 0;
}
