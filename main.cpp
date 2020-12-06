#include <iostream>
#include <vector>
#include <unordered_map>
#include "Reverse_Integer.h"
#include "palindrome.h"
#include "Longest_Palindromic_Substring.h"
#include "Pascal_Triangle.h"

using namespace std;

int main() {

    const vector<vector<int>> &pascal = Pascal_Triangle().generate(5);

    for (std::vector<int> rows: pascal) {
        for (int num: rows) {
            cout<<num+" ";
        }
        cout<<"\n";
    }
    
    return 0;
}



