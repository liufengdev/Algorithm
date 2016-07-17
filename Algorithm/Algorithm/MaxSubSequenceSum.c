//
//  MaxSubSequenceSum.c
//  Algorithm
//
//  Created by 刘锋 on 16/7/17.
//  Copyright © 2016年 com.weidian. All rights reserved.
//

#include "MaxSubSequenceSum.h"

int maxSubSequenceSum_N3( const int A[], int N)
{
    int thisSum = 0, maxSum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            thisSum = 0;
            for (int k = i; k < j; k++) {
                thisSum += A[k];
                if (thisSum > maxSum) {
                    maxSum = thisSum;
                }
            }
        }
    }
    return maxSum;
}

int maxSubSequenceSum_N2( const int A[], int N)
{
    int thisSum = 0, maxSum = 0;
    for (int i = 0; i < N; i++) {
        thisSum = 0;
        for (int j = i; j < N; j++) {
            thisSum += A[j];
            if (thisSum > maxSum) {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}

static int maxSubSum(const int A[], int left, int right);
int maxSubSequenceSum_NLogN( const int A[], int N)
{
    return maxSubSum(A, 0, N - 1);
}

int maxSubSequenceSum_N( const int A[], int N)
{
    int thisSum = 0, max = 0;
    for (int i = 0; i < N; i++) {
        thisSum += A[i];
        if (thisSum < 0) {
            thisSum = 0;
        } else if (thisSum > max) {
            max = thisSum;
        }
    }
    return max;
}

#pragma mark - Private Function
static int maxSubSum(const int A[], int left, int right)
{
    if (left == right) {
        return A[left] > 0 ? A[left] : 0;
    }
    
    int center = (left + right) / 2;
    int leftMax = maxSubSum(A, left, center);
    int rightMax = maxSubSum(A, center + 1, right);
    
    int leftBorderMax = 0, leftBorderThisSum = 0;
    for (int i = center; i >= left; i--) {
        leftBorderThisSum += A[i];
        if (leftBorderThisSum > leftBorderMax) {
            leftBorderMax = leftBorderThisSum;
        }
    }
    int rightBorderMax = 0, rightBorderThisSum = 0;
    for (int i = center + 1; i <= right; i++) {
        rightBorderThisSum += A[i];
        if (rightBorderThisSum > rightBorderMax) {
            rightBorderMax = rightBorderThisSum;
        }
    }
    int borderMax = leftBorderMax + rightBorderMax;
    return leftMax > rightMax ? (leftMax > borderMax ? leftMax : borderMax) : (rightMax > borderMax ? rightMax : borderMax);
}