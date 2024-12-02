#include <stdio.h>


void find_median(int* nums, int n, int *median){
    int temp,i,j;

    for (i=0;i<n;i++){
        for(j=0; j<n-1;j++){
            if(nums[i]>nums[j+1]){
            temp = nums[j];
            nums[j] = nums[j+1];
            nums[j+1] = temp;

        }
        }
        
        if(n % 2 != 0){
            *median = (nums[n/2]);
        }
        else{
            *median = (nums[(n / 2) - 1] + nums[n / 2]) / 2;
        }
    }
}
int main(){

    int amk []={5,8,9,6,5};
    int median;
    find_median(amk,5,&median);
    printf("%d", median);


    




    return 0;
}