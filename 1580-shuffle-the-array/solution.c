

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    int* temp = (int*)malloc(numsSize * sizeof(int));
    
    if (temp == NULL) {
        
        *returnSize = 0;  
        return NULL;
    }
    int k=0;
    int i=0;
    while(i<n){
        temp[k++]=nums[i];
        temp[k++]=nums[n+i];
        i++;
    }
    *returnSize= numsSize;
    return temp;
}
