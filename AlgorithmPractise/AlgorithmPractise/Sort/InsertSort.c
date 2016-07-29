//
//  InsertSort.c
//  AlgorithmPractise
//
//  Created by 刘锋 on 16/7/29.
//  Copyright © 2016年 liufeng. All rights reserved.
//

#include "InsertSort.h"

void InsertSort( ElementType A[], int N )
{
    int p, j;
    ElementType temp;
    for (p = 1; p < N; p++) {
        temp = A[p];
        for (j = p; j > 0 && A[j - 1] > temp; j--) {
            A[j] = A[j - 1];
        }
        A[j] = temp;
    }
}