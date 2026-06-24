class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>ans;
        for(char x: s){
            if(isalnum(x)){
                ans.push_back(tolower(x));
            }
        }
        int j=ans.size()-1;
        int i=0;
        while(i<j){
            if(ans[i]!=ans[j]){
                return false;
            }
            j--;
            i++;
        }
        return true;
    }
};