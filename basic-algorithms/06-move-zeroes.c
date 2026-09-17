#include <stdio.h>

void moveZeroes(int nums[], int numsSize)
{
    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != 0)
        {
            nums[j] = nums[i];
            j++;
        }
    }

    // Fill the remaining positions with zero
    while (j < numsSize)
    {
        nums[j] = 0;
        j++;
    }
}

void printArray(int nums[], int numsSize)
{
    for (int i = 0; i < numsSize; i++)
    {
        printf("%d ", nums[i]);
    }
    printf("\n");
}

int main()
{
    // Test Case 1
    int nums1[] = {0, 1, 0, 3, 12};
    int size1 = 5;

    moveZeroes(nums1, size1);

    printf("Test Case 1: ");
    printArray(nums1, size1);

    // Test Case 2 - Edge case
    int nums2[] = {0};
    int size2 = 1;

    moveZeroes(nums2, size2);

    printf("Test Case 2: ");
    printArray(nums2, size2);

    return 0;
}

