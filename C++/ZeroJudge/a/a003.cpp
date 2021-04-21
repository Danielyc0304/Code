#include<iostream>
using namespace std;

int main(){//兩光法師占卜術
    int M, D;//M月; D日

    cin>>M>>D;

    switch((M*2+D)%3){
        case 0: cout<<"普通\n"; break;
        case 1: cout<<"吉\n"; break;
        default: cout<<"大吉\n";//判斷、輸出運勢
    }
    return 0;
}
/*
Input:
1 1
Output:
普通
*//*
Input:
1 2
Output:
吉
*/