#include<iostream>
using namespace std;

bool bas[4];//bas壘包

int num_conversion(string a){//數字轉換; a字串
    if(a=="FO" || a=="GO" || a=="SO") return 0;//如果為出局，回傳0
    if(a=="1B") return 1;//如果為一壘安打，回傳1
    if(a=="2B") return 2;//如果為二壘安打，回傳2
    if(a=="3B") return 3;//如果為三壘安打，回傳3
    return 4;//如果為全壘打，回傳4
}
int take_base(int a){//上壘; a數字
    int s=0;//s計算值
    int i;//i旗標

    for(i=3; i>3-a; --i)//得分
        if(bas[i])
            ++s;
    for(i=3; i>a; --i)//移動
        bas[i]=bas[i-a];
    if(a==4)//如果為全壘打
        ++s;//打擊者得分
    else
        bas[a]=true;//打擊者上壘
    for(i=1; i<a; ++i)
        bas[i]=false;//進壘
    return s;//回傳得分
}
int main(){//棒球遊戲(10510第4題)
    string act;//act打擊
    int sit[9][5], a[9], b;//sit打擊情況; a行裡有幾項; b目標出局數
    int c=0;//c計數
    int ans=0;//ans答案
    int i, j, k;//i, j旗標

    for(i=0; i<9; ++i){
        cin>>a[i];

        for(j=0; j<a[i]; ++j){
            cin>>act;

            sit[i][j]=num_conversion(act);//轉換成數字
        }
    }
    cin>>b;

    for(i=1; i<4; ++i)
        bas[i]=false;//初始化
    for(i=0; i<9 && c<b; ++i)
        for(j=0; j<9 && c<b; ++j){
            if(sit[j][i]>0)//如果上壘
                ans+=take_base(sit[j][i]);
            else{//如果出局
                ++c;

                if(c%3==0)//如果三出局
                    for(k=1; k<4; ++k)
                        bas[k]=false;//清空壘包
            }
        }
    cout<<ans<<endl;//輸出分數

    return 0;
}
/*
Input:
5 1B 1B FO GO 1B
5 1B 2B FO FO SO
4 SO HR SO 1B
4 FO FO FO HR
4 1B 1B 1B 1B
4 GO GO 3B GO
4 1B GO GO SO
4 SO GO 2B 2B
4 3B GO GO FO
3
Output:
0
*//*
Input:
5 1B 1B FO GO 1B
5 1B 2B FO FO SO
4 SO HR SO 1B
4 FO FO FO HR
4 1B 1B 1B 1B
4 GO GO 3B GO
4 1B GO GO SO
4 SO GO 2B 2B
4 3B GO GO FO
6
Output:
5
*/