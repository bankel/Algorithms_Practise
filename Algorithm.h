//
// Created by lyf on 12/13/20.
//
#include <vector>


using namespace std;
#ifndef ALGORITHM_ALGORITHM_H
#define ALGORITHM_ALGORITHM_H

class Algorithm {
public:
    bool containsDuplicate(vector<int>& nums);
    bool lemonadeChange(vector<int>& bills);
    string reverseLeftWords(string s, int n);
    char firstUniqChar(string s);
    vector<vector<int>> threeSum(vector<int>& nums);
    vector<vector<int>> threeSum2(vector<int>& nums);
    int search(vector<int>& nums, int target);
};


#endif //ALGORITHM_ALGORITHM_H
