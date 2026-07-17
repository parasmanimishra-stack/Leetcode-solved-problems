class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        unordered_map<char, char> p = {{'(',')'},{'{','}'},{'[',']'}};
        for(auto c : s){
            if(c == '(' || c == '{' || c== '['){
                st.push(c);
            }
          
            
            else{
                if(st.empty() || c != p[st.top()]) return false;
                st.pop();
            }
        }
      return st.empty();

        
    }
};