#include<iostream>
using namespace std;

int main(){//nAnB problem
    int a[4], num[4], n;//a原密碼; num猜測密碼; n猜測次數
    int tmp[4];//tmp暫存值
    int ans1=0, ans2=0;//ans1, ans2答案
    int i, j, k;//i, j, k旗標

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
            printf("%dA%dB\n", ans1, ans2);//輸出結果

            ans1=0, ans2=0;//初始化
        }
    }
    return 0;
}
/*
Input:
1 2 3 4
4
1 1 4 5
1 2 4 3
1 1 4 4
4 3 2 1

1 1 1 5
4
1 1 1 1
0 9 2 8
1 5 2 3
1 1 5 1
Output:
1A1B
2A2B
2A0B
0A4B
3A0B
0A0B
1A1B
2A2B
*/