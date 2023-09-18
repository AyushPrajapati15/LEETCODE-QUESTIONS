/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize){
     int* result = malloc(2 * sizeof(int));
    for(int i=0;i<numsSize;i++){
        for (int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                result[0]=i;
                result[1]=j;
                *returnSize=2;
                return result;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
int main(){
    int nums1[] = {2, 7, 11, 15};
    int target1 = 9;
    int returnSize1;
    int* result1 = twoSum(nums1, 4, target1, &returnSize1);

    printf("Example 1:\n");
    printf("Input: nums = [2, 7, 11, 15], target = 9\n");
    printf("Output: [%d, %d]\n", result1[0], result1[1]);
    free(result1);

    int nums2[] = {3, 2, 4};
    int target2 = 6;
    int returnSize2;
    int* result2 = twoSum(nums2, 3, target2, &returnSize2);

    printf("\nExample 2:\n");
    printf("Input: nums = [3, 2, 4], target = 6\n");
    printf("Output: [%d, %d]\n", result2[0], result2[1]);
    free(result2);

    int nums3[] = {3, 3};
    int target3 = 6;
    int returnSize3;
    int* result3 = twoSum(nums3, 2, target3, &returnSize3);

    printf("\nExample 3:\n");
    printf("Input: nums = [3, 3], target = 6\n");
    printf("Output: [%d, %d]\n", result3[0], result3[1]);
    free(result3);

    return 0;
}