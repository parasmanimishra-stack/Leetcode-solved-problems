
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int sum=0;
         
        while(!q.empty()){
            int size = q.size();
            sum=0;
            for(int i=0; i<size; i++){
                TreeNode* curr = q.front();
                q.pop();
                sum+= curr->val;

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

        }
        return sum;


        
    }
};