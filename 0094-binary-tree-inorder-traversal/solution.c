/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }
    int leftsize=0;
    int rightsize=0;
    int* leftarr=inorderTraversal(root->left,&leftsize);
    int* rightarr=inorderTraversal(root->right,&rightsize);
    int* arr=(int*)malloc((leftsize+rightsize+1)*sizeof(int));
    for (int i = 0; i < leftsize; i++)
        arr[i] = leftarr[i];
    arr[leftsize] = root->val;
    for (int i = 0; i < rightsize; i++)
        arr[leftsize + 1 + i] = rightarr[i];
    *returnSize = leftsize + rightsize + 1;
    free(leftarr);
    free(rightarr);
    return arr;
}
