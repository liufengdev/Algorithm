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
    int i = left + 1, j = right;
    ElementType guard = A[left];
    while (i < j) {
        while (A[j] > guard) {
            j--;
        }
        while (A[i] < guard) {
            i++;
        }
        if (i < j) {
            ElementType temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        } else {
            break;
        }
    }
    A[left] = A[i - 1];
    A[i - 1] = guard;
    _qSort(A, left, i - 2);
    _qSort(A, i, right);
}

void QuickSort( ElementType A[], int N )
{
    if (N < 2) {
        return;
    }
    _qSort(A, 0, N - 1);
}