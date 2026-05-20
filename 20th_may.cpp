// just solved potd

class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
           unordered_set<int>st,st2;

           int n = A.size();

           vector<int>prefix(n+1,0);

           for(int i=0;i<n;i++){
             int val = 0;

             st.insert(A[i]);

             st2.insert(B[i]);

             if(A[i]==B[i]) val = 1;
             else{

             if(st.count(B[i])) val = 1;

             if(st2.count(A[i])) val++;

             }

               prefix[i+1] = prefix[i] + val;
          }

 vector<int>ans(n);

           for(int i=1;i<=n;i++){
              ans[i-1] = prefix[i];
           }

           return ans;
    }
};