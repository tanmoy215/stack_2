#include<bits/stdc++.h>
using namespace std;
bool isbalanced(string str){
    int n = str.length();
    if(n%2!=0) return false;
    stack<char> st;
    for(int i=0;i<n;i++){
        if(str[i]=='(' || str[i]=='[' || str[i]=='{') st.push(str[i]);
        else if(str[i]==')'){
            if(st.size()>0 && st.top()=='(') st.pop();
            else return false;
        }
        else if(str[i]=='}'){
            if(st.size()>0 && st.top()=='{') st.pop();
            else return false;
        }
        else{
            if(st.size()>0 && st.top()=='[') st.pop();
            else return false;
        }
    }
    if(st.size()==0) return true;
    else return false;
}
int main(){
    string str = "(){}[]";
    if(isbalanced(str)) cout<<"true"<<endl;
    else cout<<"False"<<endl;
    return 0;
}