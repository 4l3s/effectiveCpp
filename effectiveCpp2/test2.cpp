// 尽量以const，enum，inline替换#define

#include<iostream>
using namespace std;
#define plus(x) x+x
int main(){
    int res = plus(2*2);
    cout<<res<<endl;
    system("pause");
    return 0;
}


