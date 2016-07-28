//
//  QuickSort.c
//  AlgorithmPractise
//
//  Created by 刘锋 on 16/7/28.
//  Copyright © 2016年 liufeng. All rights reserved.
//

#include "QuickSort.h"

void QuickSort( ElementType A[], int N )
{
    int p, j;
    ElementType tmp;
    for (p = 1; p < N; p++) {
        tmp = A[p];
        for (j = p; j > 0 && A[j - 1] > tmp; j--) {
            A[j] = A[j - 1];
        }
        A[j] = tmp;
    }
}