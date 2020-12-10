#include <iostream>
#include <vector>
#include <unordered_map>
#include "Reverse_Integer.h"
#include "palindrome.h"
#include "Longest_Palindromic_Substring.h"
//#include "Pascal_Triangle.h"
#include "Roman_To_Integer.h"
#include "Longest_Common_Prefix.h"
#include "FirstDuplicateNumber.h"

using namespace std;

int main() {

    vector<int> input ={2, 3, 1, 0, 2, 5, 3};
    int result =FirstDuplicateNumber().findRepeatNumber(input);
    cout<<result<<endl;
    return 0;
}



