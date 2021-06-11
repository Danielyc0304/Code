#include<iostream>
#include<queue>
using namespace std;

int main(){//找出最後一個數字
    queue<int> num;//數字
    int n, tmp;//n數字總數; tmp暫存值
    int i;//i旗標

    while(cin>>n){
        for(i=0; i<n; ++i){
            cin>>tmp;
            num.push(tmp);
        }
        while(num.size()>1){
            tmp=num.front();
            cout<<"將"<<tmp<<"加到最後\n";
            num.pop();
            num.push(tmp);
            
            tmp=num.front();
            cout<<"將"<<tmp<<"加到最後\n";
            num.pop();
            num.push(tmp);//將前兩項移到最後面

            tmp=num.front();
            cout<<"將"<<tmp<<"刪除\n";
            num.pop();//將第三項刪除
        }
        cout<<"剩餘最後一個號碼為"<<num.front()<<endl;//輸出結果

        num=queue<int>();
    }
    return 0;
}
/*
Input:
5
1 3 5 4 2
Output:
將1加到最後
將3加到最後
將5刪除
將4加到最後
將2加到最後
將1刪除
將3加到最後
將4加到最後
將2刪除
將3加到最後
將4加到最後
將3刪除
剩餘最後一個號碼為4
*/