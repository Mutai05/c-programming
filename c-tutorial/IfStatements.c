#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2)
{
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
}

int nums(int nums1, int nums2, int nums3)
{
    int result;
    if (nums1 >= nums2 && nums1 >= nums3)
    {
        result = nums1;
    }
    else if (nums2 >= nums1 && nums2 >= nums3)
    {
        result = nums2;
    }
    else
    {
        result = nums3;
    }

    return result;
}

int main()
{
    printf("%d\n", max(40, 10));
    printf("%d\n", nums(5, 10, 15));

    return 0;
}