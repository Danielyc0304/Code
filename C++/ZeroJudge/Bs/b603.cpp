#include<iostream>
#include<cmath>
using namespace std;

int GCD(int a, int b){//最大公因數; a, b數字
   if(b==0)
      return a;
   return GCD(b, a%b);//輾轉相除法，回傳最大公因數
}
int main(){//拋物線方程式
    double x1, y1, x2, y2;//x1, y1頂點座標; x2, y2拋物線上座標
    int tmp;//tmp暫存值
    int ans1, ans2, ans3, ans4;//ans1, ans2, ans3, ans4答案

    while(cin>>x1>>y1>>x2>>y2){
        ans1=pow(x2-x1, 2);
        ans2=y2-y1;
        ans3=-2*ans2*x1;
        ans4=ans2*x1*x1+y1*pow(x2-x1, 2);

        tmp=GCD(GCD(abs(ans1), abs(ans2)), GCD(abs(ans3), abs(ans4)));
        ans1/=tmp;
        ans2/=tmp;
        ans3/=tmp;
        ans4/=tmp;

        if(ans1<0){
            ans1*=-1;
            ans2*=-1;
            ans3*=-1;
            ans4*=-1;
        }
        cout<<ans1<<"y = "<<ans2<<"x^2 + "<<ans3<<"x + "<<ans4<<endl;
    }
    return 0;
}
/*
Input:
1 2 0 5
1 9 18 60
Output:
1y = 3x^2 + -6x + 5
17y = 3x^2 + -6x + 156
*/

/***Note
y=a(x-h)^2+k

ay=bx^2+cx+d
-->第一個a為第二列公式的a，其他皆為第一列公式的a，其中b=第一列公式的a
a=1
b=(y-k)/(x-h)^2
c=-2ah
d=ah^2+k
-->
a=(x-h)^2
b=(y-k)
c=-2bh
d=bh^2+k*(x-h)^2
***/