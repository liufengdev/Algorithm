//
//  main.c
//  Algorithm
//
//  Created by 刘锋 on 16/7/17.
//  Copyright © 2016年 com.weidian. All rights reserved.
//

#include <stdio.h>
#include "MaxSubSequenceSum.h"

int main(int argc, const char * argv[]) {
    const int A[] = {4, -3, 5, -2, -1, 2, 6, -2};
    int num = 8;
    int ret = maxSubSequenceSum_N(A, num);
    printf("-----------\n%d\n-----------\n", ret);
    return 0;
}
