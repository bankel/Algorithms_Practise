#include <iostream>
#include <vector>
#include <unordered_map>
#include "Reverse_Integer.h"
#include "palindrome.h"
#include "Longest_Palindromic_Substring.h"
//#include "Pascal_Triangle.h"
#include "Roman_To_Integer.h"
#include "Longest_Common_Prefix.h"


using namespace std;

int main() {

    vector<string> input = {"a","flow","flight"};
    string result = Longest_Common_Prefix().longestCommonPrefix2(input);
    cout<<result<<endl;
    return 0;
}



