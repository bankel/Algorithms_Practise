//
// Created by lyf on 12/5/20.
//

#include "Two_Sum.h"



vector<int> Two_Sum::two_sum(vector<int>& nums, int target){

    unordered_map<int, int> targetMap;
    for (int i = 0; i < nums.size(); i++) {
        if (targetMap.count(nums[i])) {
            return vector<int>{targetMap[nums[i]],i};
        }
        targetMap[target - nums[i]] = i;
    }

    return vector<int>{};
}