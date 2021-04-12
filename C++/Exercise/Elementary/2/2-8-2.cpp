#include<iostream>
#include<algorithm>
using namespace std;

typedef struct data{
    int a;
    int b;
}Data;

Data num[10000];

bool cmp(Data a, Data b){
    if(a.a==b.a)
        return a.b>b.b;
    return a.a<b.a;
}
int main(){//線段覆蓋長度(10503第3題)
    int n;
    int tmp1, tmp2;
    int ans=0;
    int i;

    while(scanf("%d", &n)!=-1){
        for(i=0; i<n; ++i)
            scanf("%d %d", &(num[i].a), &(num[i].b));
        sort(num, num+n, cmp);

        for(i=0; i<n; ++i){
            tmp1=num[i].a;
            tmp2=num[i].b;

            while((num[i+1].a<tmp2) && (i+1<n)){
                if(num[i+1].b<=tmp2)
                    ++i;
                else{
                    tmp2=num[i+1].b;
                    ++i;
                }
            }
            ans+=tmp2-tmp1;
        }
        printf("%d\n", ans);

        ans=0;
    }
    return 0;
}