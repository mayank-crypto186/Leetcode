int maxSubArray(int* nums, int numsSize) {
    int max_so_far = INT_MIN; 
    int current_max = 0;    

    for (int i = 0; i < numsSize; i++) {
        current_max = current_max + nums[i];

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
        if(current_max < 0) {
            current_max = 0;
        }
    }
    return max_so_far;
}
