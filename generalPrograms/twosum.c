/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.
Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1].*/

#include <stdio.h>
int main()
{
    int n, target;
    printf("Enter how many numbers you would like to enter\n");
    scanf("%d", &n);
    printf("Ok then ! Please enter your numbers\n");
    int n1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &n1[i]);
    }
    printf("Enter your target\n");
    scanf("%d", &target);
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (n1[i] + n1[j] == target)
            {
                printf("[%d,%d]", i, j);
                goto end;
            }
        }
    }
end:

    return 0;
    

}