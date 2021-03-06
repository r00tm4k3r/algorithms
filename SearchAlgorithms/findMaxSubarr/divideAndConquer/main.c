#include <stdio.h>

#include "mainFunctions/divideAndConquer.h"
#include "../../../addCustFunc/addCustFunc.h"

#define SIZE 16

int main(void)
{
    int* arr = getRandFillArr(SIZE, -10, 10);

    subarrData_t maxSubArr = findMaxSubarr(arr, 0, SIZE - 1);

    printArr("Input array: ", arr, SIZE);

    printf("Subarray result = %d\nFrom - %d\nTo - %d\n",maxSubArr.sum, maxSubArr.left, maxSubArr.right);
    return 0;
}