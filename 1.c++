#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> course ;
        vector<double> st;
        for(int i=0; i<speed.size();i++){
            course.push_back({position[i],speed[i]});
        }
        sort(course.rbegin(), course.rend());
        for(auto &c :course){
            st.push_back((double)((target-c.first)/c.second));
            if( st.size() >= 2 && st.back()<= st[st.size() - 2] ){
                st.pop_back();
            }
            
        }
        return st.size();
    }
};




  // 2nd approach
  void backtrack( vector<string> &res, string &s, int open, int close ,int &n){
  if(open==n && close==n){ 
      res.push_back(s);
      return ;
  }
  if(open<n){
      s.push_back('(');
      backtrack(res,s,open+1,close,n);
      s.pop_back();
  }
  if(close<open){
      s.push_back(')');
      backtrack(res,s,open,close+1,n);
      s.pop_back();
  } 
  }
  vector<string> generateParenthesis(int n) {
      vector<string> res;
      string s="";
      backtrack(res,s,0,0,n);
      return res;
  }
int fun(int n)
{    queue<int> q ;
int s =0;
    q.push(0);    q.push(1);
    for (int i = 0; i < n; i++)
    { 
       int a = q.front(); q.pop();
        int b = q.front(); q.pop();
        q.push(b);
        q.push(a + b);
        s+=a;
    }
    return s;
}


 int main(){
  priority_queue<int> pq;
  pq.push(1);
    return 0;
 }