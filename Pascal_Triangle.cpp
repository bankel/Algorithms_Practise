//
// Created by lyf on 12/6/20.
//

#include <iostream>
#include "Pascal_Triangle.h"
using namespace std;

vector<vector<int>> Pascal_Triangle::generate(int numRows){

    vector<vector<int>> pascal_triangle;

    if(numRows == 0){
        return pascal_triangle;
    }

    vector<int> firstRow;
    firstRow.push_back(1);
    pascal_triangle.push_back(firstRow);

    if(numRows == 1){
        return pascal_triangle;
    }

    for (int i = 1; i < numRows; i++) {
        vector<int> upRow = pascal_triangle[i-1];
        vector<int> currentRow;

        for (int m = 0; m <= i; m++) {
            if (m ==0 || m == i) {
                currentRow.push_back(upRow[0]);
            }else{
                currentRow.push_back(upRow[m-1] + upRow[m]);
            }
        }
        pascal_triangle.push_back(currentRow);
    }

    for (vector<int> row: pascal_triangle) {
        for (int num: row) {
            cout<<num<<" ";
        }
        cout<<"\n";
    }

    return pascal_triangle;
}