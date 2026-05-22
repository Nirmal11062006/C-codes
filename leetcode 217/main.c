/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   bool containsDuplicate(int* nums, int numsSize) 
{
    for(int i=0;i<numsSize;i++) 
        for(int j=i+1;j<numsSize;j++)
            if(nums[j]==nums[i])
                return true;
     return false;  
}

    return 0;
}