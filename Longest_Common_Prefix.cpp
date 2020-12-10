//
// Created by lyf on 12/8/20.
//

#include <string>
#include "Longest_Common_Prefix.h"
using namespace std;

string Longest_Common_Prefix::longestCommonPrefix(vector<string>& strs){
    if(strs.empty()) return "";
    int length = strs.size();
    if(length == 1) return strs[0];
    int short_count = INT_MAX;
    for (int i = 0; i < length; i++) {
        if(strs[i].size() < short_count){
            short_count = strs[i].size();
        }
    }
    printf("short_count %d strs.length %d \n", short_count, length);


    for(int i=0; i< short_count; i++){
        bool equals = true;
        for(int m=0; m< length -1; m++){
            if(strs[m].substr(0, i+1) != strs[m +1].substr(0, i +1)){
                equals = false;
                break;
            }
        }

        if(!equals){
            return strs[0].substr(0, i);
        }
    }

    return strs[0].substr(0, short_count);
}

string retrieve_common(string first, string second){

    int short_len = min(first.size(), second.size());
    for(int i=0; i< short_len; i++){
        if (first.substr(0, i + 1) != second.substr(0, i + 1)) {
            return first.substr(0, i);
        }
    }
    return first.substr(0, short_len);
}

string Longest_Common_Prefix::longestCommonPrefix2(vector<string>& strs){
    if(strs.empty()) return "";
    if(strs.size() == 1) return strs[0];

    string pre = retrieve_common(strs[0], strs[1]);
    for (int i = 2; i < strs.size(); i++) {
        pre = retrieve_common(pre,strs[i]);
    }


    return pre;
}