#include<iostream>
#include<sstream>
#include<vector>
using namespace std;

vector<int> base;//base壘包上的人
int ans=0;//ans答案

void take_base(char a){//上壘; a幾壘安打
    stringstream ss;//ss字串串流
    int s;//s計算值
    int i;//i旗標

    ss<<a;
    ss>>s;
    ss.clear();

    base.push_back(0);
    for(i=0; i<base.size(); ++i)
        base[i]+=s;
    for(i=base.size()-1; i>=0; --i)
        if(base[i]>=4){//如果已經到本壘
            ++ans;

            base.erase(base.begin()+i);
        }
}
int main(){//棒球遊戲
    vector<vector<string>> sit;//sit打擊情況
    vector<string> tmp;//tmp暫存值
    string act;//act打擊
    int a, b;//a行裡有幾項; b目標出局數
    int c=0;//c計數
    int i, j;//i, j旗標

    for(i=0; i<9; ++i){
        cin>>a;

        for(j=0; j<a; ++j){
            cin>>act;
            tmp.push_back(act);
        }
        sit.push_back(tmp);
        tmp.clear();
    }
    cin>>b;

    for(i=0; (j==9 || i<sit[j].size()) && b>0; ++i)//當情況尚未執行完且(尚未執行完橫排情況或執行到最後一個人)且未達目標出局數，持續執行
        for(j=0; j<9 && i<sit[j].size() && b>0; ++j){//當尚未執行到最後一人且尚未執行完橫排情況且未達目標出局數，持續執行
            if(sit[j][i][1]=='B')//如果是安打
                take_base(sit[j][i][0]);//傳入幾壘安打
            else if(sit[j][i][1]=='R')//如果是全壘打
                take_base('4');//傳入4
            else{//如果出局
                ++c;
                --b;
            }
            if(c==3){//如果三出局
                base.clear();//壘包上清空
                c=0;//初始化
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