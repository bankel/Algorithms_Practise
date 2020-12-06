//
// Created by lyf on 12/6/20.
//

#include "Longest_Palindromic_Substring.h"

string Longest_Palindromic_Substring::longestPalindrome(string str){

    int left_index =0;
    int right_index =0;

    for(int i=0; i<str.size(); i++){
        int left =i;
        int right =i+1;

        //find the right index witch is not equals to left index char
        while(right<str.size() && str[left]==str[right]){
            right ++;
        }

        left -= 1;

        while(left>=0 && right < str.size() && str[left] == str[right]){
            left--;
            right++;
        }
        left++;

        if (right - left > right_index - left_index) {
            right_index = right;
            left_index = left;
        }
    }

    return str.substr(left_index, right_index - left_index);
}