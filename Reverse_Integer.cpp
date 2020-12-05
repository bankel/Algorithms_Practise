//
// Created by lyf on 12/5/20.
//

#include "Reverse_Integer.h"
#include <iostream>

long Reverse_Integer::integer_reverse(int x) {
    if(x > pow(2,31) -1 || x < 1- pow(2, 31)) return 0;
    long sum = 0;
    while (x != 0) {
        sum = sum*10 + x%10;
        x = x/10;
    }
    return sum;
}