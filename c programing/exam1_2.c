#include <stdio.h>


void find_median(int* nums, int n, int* median){

    int temp,i,j;

    for (i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if (nums[j]>nums[j+1]){
                temp = nums[j];
                nums[j]=nums[j+1];
                nums[j+1]= temp;
            }

        }
    }
    if(n%2 != 0){
        *median = nums[n/2];
    }
    else{
        *median = (nums[(n / 2) - 1] + nums[n / 2]) / 2;
    }

}


int main(){
    int median;

    int nums[] = {3,7,1,4,6,9};

    find_median(nums, 6,&median);
    printf("%d", median);


    return 0;
}