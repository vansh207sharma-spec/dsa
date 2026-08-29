
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
    int i;
    int *ans = (int*)malloc(sizeof(int) * numsSize);

    for(i = 0; i < n; i++)
    {
        ans[2*i] = nums[i];
        ans[2*i + 1] = nums[n+i];
    }

    *returnSize = numsSize;

    return ans;
}