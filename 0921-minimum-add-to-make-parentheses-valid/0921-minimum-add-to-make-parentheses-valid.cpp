class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0;

        // for(auto ch : s){
        //     if(ch == '(') count++;
        //     else count--;
        // }
        // return abs(count);

     
        // for(auto ch : s){
        //     char inner = st.top();
        //     if(st.top() == '(' && inner == ')'){
        //         count--;
        //     }
        //    else if(st.top() == '(' && inner != ')'){ 
        //         count++;
        //         st.pop();
        //         }
                

        //     else  {
        //         count++;
        //         st.pop();
        //         if(!st.empty() && st.top() == '(')
        //         count -= 2;

        
        int add = 0;
        int open = 0;
        for(auto ch : s){
            if(ch == '('){
                open++;
            }
            else if(open){
                open--;
            }
            else {
                add++;
            }
        }
        return open + add;
        
    }
};