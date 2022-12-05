#include<iostream>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int a[n][n],cnt=0;
    for(int i=1;i<=n;i++){
        int sum = 0;
        for(int j=1;j<=3;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                sum++;
            }
        }
        if(sum >= 2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}