class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        vector<int> ans(n,INT_MAX);
        ans[n-1] = prices[n-1];
        st.push(prices[n-1]);
        for(int i=n-2;i>=0;i--){
            while(st.size()>0 && st.top()>prices[i]){
                st.pop();
            }
            if(st.size()==0)  ans[i]=prices[i];
            else  ans[i] = prices[i] - st.top();
            st.push(prices[i]);
        }
        return ans;
    }
};