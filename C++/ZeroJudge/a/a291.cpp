#include<iostream>
using namespace std;

int main(){
    int a[5], num[5], n;
    int tmp[5];
    int ans1=0, ans2=0;
    int i, j, k;

    while(scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3])!=-1){
        scanf("%d", &n);

        for(i=0; i<n; ++i){
            for(j=0; j<4; ++j){
                scanf("%d", &num[j]);

                tmp[j]=a[j];

                if(num[j]==tmp[j]){
                    ++ans1;
                    num[j]=-1;
                    tmp[j]=-2;
                }
            }
            for(j=0; j<4; ++j)
                for(k=0; k<4; ++k)
                    if(num[j]==tmp[k]){
                        ++ans2;
                        num[j]=-1;
                        tmp[k]=-2;

                        break;
                    }
            printf("%dA%dB\n", ans1, ans2);

            ans1=0, ans2=0;
        }
    }
    return 0;
}