//
// Created by lyf on 12/6/20.
//

#include <climits>
#include "palindrome.h"

bool palindrome::is_plindrome(int x) {
    if(x < 0) return false;
    int num_backup = x;
    int sum = 0;
    while(x){
        sum = sum*10 + x%10;
        x = x/10;
    }

    if(sum>INT_MAX -1 || x < INT_MIN){
        return false;
    }

    return sum == num_backup;
}