#include<iostream>
using namespace std;

int main(){//交錯字串
    string a;//a字串
    int k;//k交錯字串長度
    int pre, c=0 ,tmp=0;//pre前一位是大寫或小寫; c計數; tmp暫存值
    int ans=0;//ans答案
    int i;//i旗標

    cin>>k;
    cin.get();
    getline(cin, a);

    if(isupper(a[0]))//第一個字是大寫
        pre=0;
    else//第一個字是小寫
        pre=1;
    for(i=0; i<a.length(); ++i){
        if((isupper(a[i]) && pre==0) || (islower(a[i]) && pre==1)){//如果與前一位同樣為大寫或同樣為小寫
            ++c;

            if(c==k){//如果達到目標長度
                tmp+=k;

                ans=max(ans, tmp);
            }
            else if(c>k)//如果超過目標長度
                tmp=k;
        }
        else{//如果與前一位不同
            if(c<k)//如果未達目標長度
                tmp=0;//重新計算
            c=1;

            if(c==k){//如果目標長度為1
                ++tmp;

                ans=max(ans, tmp);
            }
            if(isupper(a[i]) && pre==1)//如果為大寫
                pre=0;
            else//如果為小寫
                pre=1;
        }
    }
    cout<<ans<<endl;//輸出最長連續交錯字串

    return 0;
}
/*
Input:
1
aBBdaaa
Output:
2
*//*
Input:
3
DDaasAAbbCC
Output:
3
*//*
Input:
2
aafAXbbCDCCC
Output:
8
*//*
Input:
3
DDaaAAbbCC
Output:
0
*/