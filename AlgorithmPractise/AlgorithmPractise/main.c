//
//  main.c
//  Algorithm
//
//  Created by 刘锋 on 16/7/17.
//  Copyright © 2016年 PractiseMakesPerfect. All rights reserved.
//

#include <stdio.h>
#include "ShellSort.h"

int main(int argc, const char * argv[]) {
    int A[] = {4, -3, 5, -2, -1, 2, 6, -2};
    int num = 8;
    ShellSort(A, num);
    for (int i = 0; i < num; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}
