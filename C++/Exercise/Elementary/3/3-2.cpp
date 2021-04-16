#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int a[199], b[199], t, n;//a客人到達時間; b客人服務時間; t店員上班時間; n客人數
    int ser[599]={0}, s=0;//ser服務時間; s計算值
    int ans=0;//ans答案
    int i, j;//i, j旗標

    while(cin>>t>>n){
        for(i=0; i<n; ++i)
            cin>>a[i]>>b[i];
        for(i=0; i<n; ++i){
            if(s>=60*t)//如果已經超過上班時間
                break;
            if(a[i]>=s){//如果客人到達時間不在服務時間內
                for(j=a[i]; j<a[i]+b[i]; ++j){
                    if(j>=60*t)//如果已經超過上班時間
                        break;
                    ser[j]=1;//需要服務客人的時間
                }
                s=a[i]+b[i];//計算需要服務客人的時間
            }
            else{//如果客人到達時間在服務時間內，需排隊
                for(j=s; j<s+b[i]; ++j){//排在上一個人後面
                    if(j>=60*t)//如果已經超過上班時間
                        break;
                    ser[j]=1;//需要服務客人的時間
                }
                s+=b[i];//計算需要服務客人的時間
            }
        }
        for(i=0; i<60*t; ++i)
            if(ser[i]==0)
                ++ans;
        cout<<ans<<endl;//輸出不需服務客人的時間

        memset(ser, 0, sizeof(ser));
        s=0, ans=0;//初始化
    }
    return 0;
}
/*
Input:
4 5
1 3
45 20
160 3
161 80
170 10
Output:
137
*/