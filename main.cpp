#include <iostream>
#include <vector>
#include <unordered_map>
#include "Reverse_Integer.h"
#include "palindrome.h"
#include "Longest_Palindromic_Substring.h"
//#include "Pascal_Triangle.h"
#include "Roman_To_Integer.h"
using namespace std;

int main() {

    string input = "LVIII";
    int result = Roman_To_Integer().romanToInt(input);
    cout<<result<<endl;
    return 0;
}



