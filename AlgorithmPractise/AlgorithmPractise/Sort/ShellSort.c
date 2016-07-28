//
//  ShellSort.c
//  AlgorithmPractise
//
//  Created by 刘锋 on 16/7/28.
//  Copyright © 2016年 liufeng. All rights reserved.
//

#include "ShellSort.h"

void ShellSort( ElementType A[], int N )
{
    int Increment, p, j;
    ElementType tmp;
    for (Increment = N / 2; Increment > 0; Increment /= 2) {
        for (p = Increment; p < N; p++) {
            tmp = A[p];
            for (j = p; j >= Increment && A[j - Increment] > tmp; j -= Increment) {
                A[j] = A[j - Increment];
            }
            A[j] = tmp;
        }
    }
}