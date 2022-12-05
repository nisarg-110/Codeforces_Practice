#include<iostream>
using namespace std;
 
int main(){
    int t;
    string s;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>s;
        if(s.length()>10){
            cout<<s.front()<<(s.length()-2)<<s.back()<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}