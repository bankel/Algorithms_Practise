//
// Created by lyf on 12/5/20.
//

#include "Split_Array_into_Consecutive_Subsequences.h"

bool Split_Array_into_Consecutive_Subsequences::divide_sequence(vector<int> nums){

    unordered_map<int, int> numsCountMap;//calculate the same num count
    unordered_map<int, int> numsEndCountMap;//record the End num sequence point

    //calculate the same num;
    for (int num: nums) {
        numsCountMap[num]++;
    }

    //divide the nums;
    for (int num: nums) {
        if (numsCountMap[num] == 0) {//current num has been used over
            continue;
        }

        //check there is end sequence
        if (numsEndCountMap.count(num - 1) && numsEndCountMap[num - 1] > 0) {
            numsEndCountMap[num -1]--;
            numsEndCountMap[num]++;
            numsCountMap[num]--;//has been used

        }else if(numsCountMap.count(num +1) && numsCountMap[num +1]>0
                 &&numsCountMap.count(num+2) && numsCountMap[num +1] >0){
            numsCountMap[num]--;
            numsCountMap[num +1]--;
            numsCountMap[num +2]--;
            numsEndCountMap[num +2]++;
        }else{
            return false;
        }
    }

    return true;
}