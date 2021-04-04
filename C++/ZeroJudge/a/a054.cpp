#include<iostream>
using namespace std;

int main(){
    int a;//a身分證字號
    int s, num, sum=0;//s計算值; num數字; sum總和

    cin>>a;

    num=a%10;
    for(s=1; s<9; ++s){
        a/=10;
        sum+=(a%10)*s;
    }
    if(10-num-sum%10==10)
        num+=10;
    else if(10-num-sum%10<0)
        num-=10;
    switch(10-num-sum%10){
        case 0: cout<<"BNZ\n"; break;
        case 1: cout<<"AMW\n"; break;
        case 2: cout<<"KLY\n"; break;
        case 3: cout<<"JVX\n"; break;
        case 4: cout<<"HU\n"; break;
        case 5: cout<<"GT\n"; break;
        case 6: cout<<"FS\n"; break;
        case 7: cout<<"ER\n"; break;
        case 8: cout<<"DOQ\n"; break;
        default: cout<<"CIP\n";//判斷、輸出結果
    }
    return 0;
}
/*
Input:
130245675
Output:
FS
*//*
Input:
123456789
Output:
AMW
*/