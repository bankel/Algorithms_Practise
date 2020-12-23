#include <iostream>
#include <vector>
#include <unordered_map>
#include<stack>
#include "Algorithm.h"
#include <set>

using namespace std;



int main() {

    vector<int> input ={2,2};
    for(int i: input){
        cout<<i<<" ";
    }
    cout<<endl;

    int result = Algorithm().search(input, 3);
    cout<<result<<endl;



    return 0;
}



