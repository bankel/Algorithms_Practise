//
// Created by lyf on 12/10/20.
//

#include <unordered_map>
#include "FirstDuplicateNumber.h"

int FirstDuplicateNumber::findRepeatNumber(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    for(int i=1; i< nums.size(); i++){
        if(nums[i]== nums[i-1])return nums[i-1];
    }

    return 0;
}