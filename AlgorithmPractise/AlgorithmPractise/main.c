//
//  main.c
//  Algorithm
//
//  Created by 刘锋 on 16/7/17.
//  Copyright © 2016年 PractiseMakesPerfect. All rights reserved.
//

#include <stdio.h>
#include "QuickSort.h"

int isAscendOrder(int A[], int N)
{
    if (N < 2) {
        return 1;
    }
    for (int i = 1; i < N; i++) {
        if (A[i] > A[i - 1]) {
            continue;
        } else {
            return 0;
        }
    }
    return 1;
}

int main(int argc, const char * argv[]) {
    int A[] = {4, 3, 5, 10, 7, 9, 1, 2, 6, 8, 11};
    int num = 11;
    QuickSort(A, num);
    for (int i = 0; i < num; i++) {
        printf("%d\n", A[i]);
    }
    if (isAscendOrder(A, num)) {
        printf("----- success -----");
    } else {
        printf("----- failed -----");
    }
    printf("\n");
    return 0;
}
