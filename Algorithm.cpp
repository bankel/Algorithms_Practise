//
// Created by lyf on 12/13/20.
//

#include "Algorithm.h"
#include <unordered_map>
#include <unordered_set>
#include <cstring>
#include <string>
#include <iostream>

#include <set>
#include <__hash_table>


using namespace std;


bool Algorithm::lemonadeChange(vector<int>& bills) {
    unordered_map<int, int> moneyCount;
    for(int bill: bills){
        if(bill == 5){
            moneyCount[5] += 1;
        }else if(bill == 10){
            if(moneyCount.count(5) && moneyCount[5]){
                moneyCount[5] -= 1;
                moneyCount[10] += 1;
            }else{
                return false;
            }
        }else{//20
            if(moneyCount.count(10) && moneyCount[10]){
                moneyCount[10] -=1;
                if (moneyCount.count(5) && moneyCount[5]) {
                    moneyCount[5] -=1;
                }else{
                    return false;
                }
            }else{
                if(moneyCount.count(5) && moneyCount[5]>2){
                    moneyCount[5] -= 3;
                }else{
                    return false;
                }
            }
        }
    }

    return true;
}

bool Algorithm::containsDuplicate(vector<int>& nums){
    unordered_map<int, int> numsCount;
    for (int num: nums) {
        if(numsCount.count(num) && numsCount[num])return true;
        numsCount[num] += 1;
    }

    return false;
}

string Algorithm::reverseLeftWords(string s, int n){
    cout<<s<<endl;
    /*string leftWords = s.substr(0, n);
    string sub = s.erase(0, n);
    return sub.insert(sub.size(), leftWords);*/

    string result;
    for (int i = n; i < s.length(); i++) {
        result += s[i];
    }

    for (int i = 0; i < n; i++) {
        result += s[i];
    }
    return result;
}

bool isless(vector<int> arrays, int i, int j){
    return arrays[i-1] < arrays[j-1];
}

void exchange(vector<int> arrays, int i, int j){
    int temp = arrays[i-1];
    arrays[i-1] = arrays[j-1];
    arrays[j-1] = temp;
}

void sink(vector<int> arrays, int p, int length){
    while(2*p < length){
        int child = 2*p;
        if(child < length && isless(arrays, child, child +1)) child++;

        if(!isless(arrays,p, child))break;
        exchange(arrays,p, child);
        p = child;
    }
}

void sort(vector<int> &arrays){
    int length = arrays.size();
    for(int k=length/2; k>=1; k--){
        sink(arrays,k, length);
    }

    while(length >1){
        exchange(arrays, 1, length--);
        sink(arrays, 1, length);
    }
}

char Algorithm::firstUniqChar(string s) {
    unordered_map<char, int> charCount;
    for(char c: s){
        charCount[c]++;
    }

    for(char c: s){
        if(charCount[c]==1) return c;
    }

    return ' ';
}


vector<vector<int>> Algorithm::threeSum(vector<int>& nums){
    set<vector<int>> vectorSets;
    vector<vector<int>> threeNums;
    unordered_set<int> numsCount;
    for(int i=0; i< nums.size(); i++){
        int two_sum = - nums[i];
        for (int m = i+1; m < nums.size(); m++) {
            if(numsCount.count(nums[m])){
                //find the three num i, m, numsCount[two_sum - nums[m]]
                vector<int> three_num = {nums[i], two_sum - nums[m], nums[m]};
                sort(three_num.begin(), three_num.end());
                vectorSets.insert(three_num);
            }else{
                numsCount.insert(two_sum - nums[m]);
            }
        }
        numsCount.clear();
    }

    for(set<vector<int>>::iterator vi=vectorSets.begin() ;vi!=vectorSets.end();vi++)
    {
        threeNums.push_back(*vi);
    }

    return threeNums;
}

vector<vector<int>> Algorithm::threeSum2(vector<int>& nums){
    sort(nums.begin(), nums.end());

}


int Algorithm::search(vector<int>& nums, int target) {
    if(nums.size()==0) return 0;
    vector<int>::iterator  it = lower_bound(nums.begin(), nums.end(), target);

    int find_index = it - nums.begin();
    if(find_index < 0) return 0;
    if(nums[find_index] != target) return 0;

    int sum = 0;
    while(find_index < nums.size() && nums[find_index] == target){
        find_index++;
        sum++;
    }

    return sum;
}
