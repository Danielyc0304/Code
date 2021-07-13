#include<iostream>
using namespace std;

int GCD(int a, int b){//最大公因數; a, b數字
    if(b==0)
       return a;
    return GCD(b, a%b);//輾轉相除法，回傳最大公因數
}
int main(){//分數運算-2
    char ope;//ope運算符號
    int a, b, c, d;//a, c分子; b, d分母
    int tmp;//tmp暫存值

    while(cin>>a>>b>>c>>d>>ope){
        if(b<0){//分母不出現負數
            a*=-1;
            b*=-1;
        }
        if(d<0){//分母不出現負數
            c*=-1;
            d*=-1;
        }
        a*=d/GCD(b, d);//b*d/GCD(b, d)為最小公倍數，除以b通分
        b=b*d/GCD(b, d);
        c*=b/GCD(b, d);//b*d/GCD(b, d)為最小公倍數，除以d通分
        d=b*d/GCD(b, d);

        switch(ope){
            case '+': a+=c; break;//a+c/b
            case '-': a-=c; break;//a-c/b
            case '*': a*=c, b*=d; break;//a*c/b*d
            default: {//a/c
                b=c;

                if(b<0){//分母不出現負數
                    a*=-1;
                    b*=-1;
                }
            };
        }
        if(a%b==0)//如果可以整除
            cout<<a/b<<endl;//輸出整數
        else{//如果不能整除
            tmp=GCD(abs(a), b);
            a/=tmp;
            b/=tmp;//約分

            cout<<a<<'/'<<b<<endl;//輸出分數
        }
    }
    return 0;
}
/*
Input:
-1 2 4 -3 +
1 1 1 1 -
1 1 1 2 +
2 3 1 2 *
2 3 2 3 /
Output:
-11/6
0
3/2
1/3
1
*/