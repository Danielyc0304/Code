#include<iostream>
using namespace std;

int main(){
    int a;
    int s, num, sum=0;

    cin>>a;

    num=a%10;
    if(num==0)
        num=10;
    for(s=1; s<9; ++s){
        a/=10;
        sum+=(a%10)*s;
    }
    if(sum%10==10-num) cout<<"BNZ\n";
    else if((sum+1)%10==10-num) cout<<"AMW\n";
    else if((sum+2)%10==10-num) cout<<"KLY\n";
    else if((sum+3)%10==10-num) cout<<"JVX\n";
    else if((sum+4)%10==10-num) cout<<"HU\n";
    else if((sum+5)%10==10-num) cout<<"GT\n";
    else if((sum+6)%10==10-num) cout<<"FS\n";
    else if((sum+7)%10==10-num) cout<<"ER\n";
    else if((sum+8)%10==10-num) cout<<"DOQ\n";
    else cout<<"CIP\n";

    return 0;
}