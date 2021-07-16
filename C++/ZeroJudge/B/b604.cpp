#include<iostream>
#include<algorithm>
using namespace std;

struct point{//x座標點
    double x;//x座標
    double y;//y座標
    double distance;//distance曼哈頓距離
};
bool cmp(struct point a, struct point b){//排序規則; a, b座標點
    return a.distance<b.distance;//距離短的在前面
}
int main(){//Center of Symmetry
    struct point poi[10000], cen;//poi座標點; cen中心點
    int n;//n座標點總數
    bool c=false;//c判斷
    int i;//i旗標

    while(cin>>n){
        if(n==0)
            break;
        for(i=0; i<n; ++i){
            cin>>poi[i].x>>poi[i].y;

            cen.x+=poi[i].x;
            cen.y+=poi[i].y;
        }
        cen.x/=n;
        cen.y/=n;//計算中心點座標

        for(i=0; i<n; ++i)
            poi[i].distance=abs(poi[i].x-cen.x)+abs(poi[i].y-cen.y);//計算曼哈頓距離(x座標差+y座標差)
        sort(poi, poi+n, cmp);

        for(i=0; i<n-1; i+=2)
            if(poi[i].distance!=poi[i+1].distance){//如果有不同長度的點
                c=true;//不對稱

                break;
            }
        if(c==false)
            cout<<"yes\n";
        else
            cout<<"no\n";//輸出是否存在對稱中心
        c=false;
        cen.x=0, cen.y=0;//初始化
    }
    return 0;
}
/*
Input:
8
1 10
3 6
6 8
6 2
3 -4
1 0
-2 -2
-2 4
0
Output:
yes
*/