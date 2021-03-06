#include<iostream>
#include<cstring>
using namespace std;

int pas[27][27];//pas巴斯卡三角

int C(int n, int m){//組合; n, m同時輸入，Cn取m
    if(pas[n][m]==0){
        if(n==m || m==0)
            pas[n][m]=1;
        else
            pas[n][m]=C(n-1, m)+C(n-1, m-1);
    }
    return pas[n][m];
}
int main(){//Code
    string a;//a字串
    bool c=false;//c判斷
    int ans=0;//ans答案
    int i, j;//i, j旗標

    memset(pas, 0, sizeof(pas));

    while(cin>>a){
        if(a=="0")
            break;
        for(i=0; i<a.length()-1; ++i)//檢查密碼是否合理(後面的字母不可比前面小)
            if(a[i]>a[i+1]){
                c=true;//不合理

                break;
            }
        if(c==false){
            for(i=0; i<a.length(); ++i){
                if(i!=a.length()-1){//不是最後一位
                    ans+=C(26, i+1);//計算所有小於字串長度的編碼數量(簡化迴圈)

                    if(i==0)//第一個字母
                        for(j=0; j<a[i]-'a'; ++j)
                            ans+=C(26-j-1, a.length()-i-1);//C(剩餘可選字母數)取(剩餘位數)
                    else
                        for(j=a[i-1]-'a'+1; j<a[i]-'a'; ++j)
                            ans+=C(26-j-1, a.length()-i-1);//C(剩餘可選字母數)取(剩餘位數)
                }
                else//最後一位
                    ans+=a[i]-a[i-1];//計算最後一位可以放幾種字母，(a[i]-'a')-(a[i-1]-'a'+1)+1
            }
            cout<<ans<<endl;//輸出數字

            ans=0;//初始化
        }
        else
            cout<<0<<endl;//輸出0
        c=false;//初始化
    }
    return 0;
}
/*
Input:
bf
abca
vwxyz
0
Output:
55
0
83681
*/

/***Note
bdfg

1 * --> C26/1
2 ** --> C26/2
3 *** --> C26/3
4 a*** --> C25/3
4 bc** --> C23/2
4 bde* --> C21/1
4 bdfg --> +1
end
***
vwxyz

1 * --> C26/1
2 ** --> C26/2
3 *** --> C26/3
4 **** --> C26/4
5 a**** --> C25/4
5 b**** --> C24/4
5 c**** --> C23/4
5 d**** --> C22/4
5 e**** --> C21/4
5 f**** --> C20/4
5 g**** --> C19/4
5 h**** --> C18/4
5 i**** --> C17/4
5 j**** --> C16/4
5 k**** --> C15/4
5 l**** --> C14/4
5 m**** --> C13/4
5 n**** --> C12/4
5 o**** --> C11/4
5 p**** --> C10/4
5 q**** --> C9/4
5 r**** --> C8/4
5 s**** --> C7/4
5 t**** --> C6/4
5 u**** --> C5/4
5 vwxyz --> +1
end
***/