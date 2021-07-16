#include<iostream>
using namespace std;

int main(){//英國聯蒙
    string a;//a字串
    int N;//N指令總數
    int c=0;//c計數
    int ans1=0, ans2=0, ans3=0;//ans1, ans2, ans3答案
    int i;//i旗標

    cin>>N;
    for(i=0; i<N; ++i){
        cin>>a;

        if(a=="Get_Kill"){
            ++ans1;//計算擊殺
            ++c;//計算連續擊殺

            switch(c){
                case 1: cout<<"You have slain an enemie.\n"; break;
                case 2: cout<<"You have slain an enemie.\n"; break;
                case 3: cout<<"KILLING SPREE!\n"; break;
                case 4: cout<<"RAMPAGE~\n"; break;
                case 5: cout<<"UNSTOPPABLE!\n"; break;
                case 6: cout<<"DOMINATING!\n"; break;
                case 7: cout<<"GUALIKE!\n"; break;
                default: cout<<"LEGENDARY!\n"; break;
            }
        }
        else if(a=="Get_Assist")
            ++ans3;//計算助攻
        else{
            ++ans2;//計算死亡

            if(c<3)//連續擊殺不到3個
                cout<<"You have been slained.\n";
            else//連續擊殺3個
                cout<<"SHUTDOWN.\n";
            c=0;
        }
    }
    cout<<ans1<<'/'<<ans2<<'/'<<ans3<<endl;//輸出擊殺、死亡、助攻

    return 0;
}
/*
Input:
11
Get_Kill
Get_Kill
Get_Assist
Get_Assist
Get_Kill
Die
Get_Kill
Get_Assist
Get_Kill
Die
Get_Kill
Output:
You have slain an enemie.
You have slain an enemie.
KILLING SPREE!
SHUTDOWN.
You have slain an enemie.
You have slain an enemie.
You have been slained.
You have slain an enemie.
6/2/3
*/