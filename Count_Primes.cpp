//
// Created by lyf on 12/4/20.
//

#include "Count_Primes.h"
int Count_Primes::count_primes(int n) {
    int count = 0;
    for (int i = 2; i < n; i++) {
        bool isPrime = true;
        for(int m=2; m*m <=i; m++){
            if(i % m == 0){
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            count ++;
        }
    }
    return count;
}


