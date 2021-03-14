#include<iostream>
using namespace std;

int main(){
    int N;
    int ans=0;

    while(scanf("%d", &N)){
        if(N==0)
            break;
        while(N!=0){
            if(N%2==0)
                break;
            ++ans;
            N/=2;
        }
        printf("%d\n", ans);

        ans=0;
    }
    return 0;
}