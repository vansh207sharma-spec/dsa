void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
  int i;
  int f=m+n;
  int ans[f];
  for(i=0;i<m;i++)
  {
     ans[i]=nums1[i];
  }  
  for(i=0;i<n;i++)
  {
    ans[i+m]=nums2[i];
  }
  int temp;
  for(i=0;i<f-1;i++)
  {
    for(int j=0;j<f-1-i;j++)
    {
        if(ans[j]>ans[j+1])
        {
            temp=ans[j];
            ans[j]=ans[j+1];
            ans[j+1]=temp;
        }
    }
  }
    for(i=0;i<f;i++)
    {
        nums1[i]=ans[i];
    }
    
  
}