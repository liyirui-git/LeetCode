//
// Created by 11029 on 2020/6/12.
//

#include "utils.h"

vector<int> utils::getVector(){
    // 针对是这样的输入：[1,8,6,2,5,4,8,3,7]
    vector<int> result;
    getchar(); // 先把'['吃进来
    char c = (char)getchar();
    while(c != '\n') {
        int number = 0;
        while (c != ',' && c != ']') {
            number = number + c - '0';
            c = (char) getchar();
        }
        c = (char)getchar();
        result.push_back(number);
    }
    return result;
}

void utils::printVector(const vector<int>& v){
    printf("[");
    for(int i = 0; i < v.size(); i++){
        printf("%d", v[i]);
        if(i != v.size()-1)
            printf(",");
    }
    printf("]\n");
}
