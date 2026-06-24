class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg,pos;
        for(int x:nums){
            if(x<0){
                neg.push_back(x*x);
            }else{
                pos.push_back(x*x);
            }
        }
        reverse(neg.begin(),neg.end());
        vector<int>ans;
        int i=0,j=0;
        while(i<neg.size() && j<pos.size()){
            if(neg[i]<=pos[j]){
                ans.push_back(neg[i]);
                i++;
            }else{
                ans.push_back(pos[j]);
                j++;
            }
        }
        while(i<neg.size()){
            ans.push_back(neg[i]);
            i++;
        }
        while(j<pos.size()){
            ans.push_back(pos[j]);
            j++;
        }
        return ans;
    }
};