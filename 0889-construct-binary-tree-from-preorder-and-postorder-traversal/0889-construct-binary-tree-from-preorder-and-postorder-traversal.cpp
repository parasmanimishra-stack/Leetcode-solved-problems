
class Solution {
public:
    TreeNode* build(vector<int>& post, int postlo, int posthi, vector<int>& pre, int prelo, int prehi) {
        if(postlo>posthi) return NULL;
 
        TreeNode* root= new TreeNode(pre[prelo]);
               if(postlo == posthi) return root;
              int leftval=pre[prelo+1];
        int i=postlo;
        while(post[i]!=leftval) 
            i++;

        
        int leftcount = i - postlo +1;
        
         root->right =  build(post, postlo+leftcount, posthi-1,pre,  prelo+leftcount+1, prehi);

        root->left =  build(post, postlo, postlo+leftcount-1, pre, prelo+1,  prelo+leftcount);
         
         return root;


    }
    TreeNode* constructFromPrePost(vector<int>& pre, vector<int>& post) {
        int n=pre.size();
        return build(post,0,n-1,pre,0,n-1);
        
    }
};