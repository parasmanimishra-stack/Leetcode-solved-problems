class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.size();
        long long count = 0;
         stack<int> st;
        // for(int i=0; i<n; i++){
        // //    if(s[i] == '(' || s[i] == ')')
        //      st.push(s[i]);


        // }

        // int temp = 0;
        // for(int i=0; i<n; i++){
            
        //     if(st.top() == '('){
        //          temp = 0;
        //         st.pop();
        //         if(st.top() == '('){
        //           temp++;

        //         }
        //     }
       //       else if()
        //     else count++;
        //     count  += temp*2;
        // }
        // return count/2;
        //int temp = 0;
        // int parts = 0;
        // for(int i=n-1; i>0; i--){
        //     if(s[i] == ')'  && s[i-1] == '('){
              
        //         count++;
        //         i--;
        //     }
        //    else if (s[i] == ')' && s[i-1] == ')'){
        //       parts++;
        //         temp ++;
        //         i--;
        //    }
        //    else if(s[i] == '(' && s[i-1] == ')'){
        //     parts--;
        //    }
        //   // else if(parts) temp++;
        //    else{

        //    count += temp*2;
        //    temp = 0;
        //    }

        // }

        // return count;
        st.push(0);
        for(auto ch : s){
            if( ch == '('){
                st.push(0);

            }
            else {
                int temp = st.top();
                st.pop();
                  int val = max(1, temp*2);
                  st.top() += val;
            }
          
   
        }
        return st.top();
    }
};