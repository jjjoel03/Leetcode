int removeDuplicates(int* nums, int numsSize) {
    int i,k=0;
    for(i=1;i<numsSize;i++){
        if(nums[i-1]!=nums[i]){
            k++;
            nums[k]=nums[i];
        }
        else{
            continue;
        }
    }
    return k+1;
}