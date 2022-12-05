#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string string;
    cin>>string;
    unordered_set<char> s;
    for(int i=0;i<string.length();i++){
        s.insert(string[i]);
    }
    int len = s.size();
    if(len % 2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
    return 0;
}