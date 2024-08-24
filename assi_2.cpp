class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        stack<int> st;
        vector<int> ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }
        int n = ans.size();
      int arr[n];
      arr[n-1]=0;
      st.push(ans[n-1]);
      for(int i=n-2;i>=0;i--){
         while(st.size()>0 && st.top()<=ans[i]){
            st.pop();
         }
         if(st.size()==0) arr[i]=0;
         else arr[i]=st.top();
          st.push(ans[i]);
      }
    vector<int> v;
    for(int i=0;i<n;i++){
        v.push_back(arr[i]);
    }
    return v;
    }
};