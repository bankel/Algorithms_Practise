#include <iostream>
#include <vector>
#include <unordered_map>
#include "Reverse_Integer.h"
#include "palindrome.h"
#include "Longest_Palindromic_Substring.h"

using namespace std;

int main() {
    string str = "afdlyldef";
    string result = Longest_Palindromic_Substring().longestPalindrome(str);
    cout<<result;
    return 0;
}



