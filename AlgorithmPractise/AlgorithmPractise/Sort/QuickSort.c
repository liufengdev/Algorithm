//
//  QuickSort.c
//  AlgorithmPractise
//
//  Created by 刘锋 on 16/7/28.
//  Copyright © 2016年 liufeng. All rights reserved.
//

#include "QuickSort.h"

void _qSort( ElementType A[], int left, int right)
{
    if (left >= right) {
        return;
    }
    int i = left, j = right + 1;
    ElementType guard = A[left];
    for (; ;) {
        while (A[--j] > guard) { }
        while (A[++i] < guard) { }
        if (i < j) {
            ElementType temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        } else {
            break;
        }
    }
    A[left] = A[j];
    A[j] = guard;
    _qSort(A, left, j - 1);
    _qSort(A, j + 1, right);
}

void QuickSort( ElementType A[], int N )
{
    if (N < 2) {
        return;
    }
    _qSort(A, 0, N - 1);
}