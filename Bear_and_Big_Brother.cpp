#include<iostream>
using namespace std;
 
int main(){
    int a,b;
    cin>>a>>b;
    int limak = 3*a;
    int bob = 2*b;
    for(int i=1;;i++){
        if(limak > bob){
            cout<<i<<endl;
            break;
        }
        limak = 3*limak;
        bob = 2*bob;
    }
    return 0;
}