bool uniformArray(int* nums1, int nums1Size) {
    int i,counteven=0,countodd=0;
    for(i=0;i<nums1Size;i++)
    {
        if(nums1[i]%2==0)
        {
            counteven=counteven+1;
        }

        else{

            countodd=countodd+1;
        }
    }

        if(countodd==1&&counteven==1)
        {
            return true;
        }
        else{
            return true;
        }
        
        
    
    
}