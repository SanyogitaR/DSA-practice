// reverese a string using stack 
#include <iostream>
#include <stack>
using namespace std;


int main(){
    string st="love";
    stack <char>s;
    for(int i=0;i<st.length();i++){
    char ch=st[i];
    s.push(ch);

    }
    string ans="";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();

    }
    cout<<"answer is"<<ans<<endl;
    return 0;
    



}