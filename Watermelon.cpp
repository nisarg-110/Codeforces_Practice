// Nisarg Patel
// AU2140161
#include<iostream>
using namespace std;
 
int main(){
    int w;
    cin>>w;
    if(w%2==0 && w>=4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}


// 1 - 
// 2
// 3
// 4 - 2,2
// 5
// 6 - 2,4
// 7
// 8 - 2,6 & 4,4
// 9
// 10- 2,8 & 4,6
// 11
// 12- 2,10 & 4,8 & 6,6
// 13
// 14- 2,12 & 4,10 & 6,8