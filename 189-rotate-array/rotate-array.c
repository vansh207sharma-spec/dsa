void rotate(int* nums, int numsSize, int k)
{
int ans[numsSize];
k = k % numsSize;
 
    int v= numsSize-k;

    for(int i=0;i<k;i++)
    {
         ans[i]=nums[v+i];

    }
    for(int i=0;i<v;i++)
    {
        ans[i+k]=nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        nums[i]=ans[i];
    }
    
}