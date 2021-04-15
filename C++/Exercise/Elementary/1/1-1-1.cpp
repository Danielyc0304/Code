#include<iostream>
#include<sstream>
using namespace std;

int main(){//找出所有英文單字
    string a;//a字串
    stringstream ss;//ss字串串流
    string ans;//ans答案
    int i;//i旗標

    while(getline(cin, a)){
        for(i=0; i<a.length(); ++i){
            if(isalpha(a[i])!=0)//如果是字母
                a[i]=tolower(a[i]);//轉換為小寫
            else//如果不是字母
                a[i]=' ';//轉換為空格
        }
        ss<<a;

        while(ss>>ans)//逐一輸出
            cout<<ans<<endl;//輸出單字
        ss.clear();
    }
    return 0;
}