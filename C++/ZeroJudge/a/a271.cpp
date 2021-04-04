#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string food;//food食物
    int a, x, y, z, w, n, m;//a測資總數; x紅蘿蔔; y白蘿蔔; z黃蘿蔔; w發霉蘿蔔; n中毒; m體重
    stringstream ss;//ss字串串流
    int c=0, tmp;//c計數; tmp暫存值
    int i;//i旗標

    cin>>a;

    for(i=0; i<a; ++i){
        cin>>x>>y>>z>>w>>n>>m;
        cin.get();
        getline(cin, food);
        
        ss<<food;

        while(ss>>tmp){
            m-=n*c;

            if(m<=0){
                cout<<"bye~Rabbit\n";

                break;
            }
            switch(tmp){
                case 1: m+=x; break;
                case 2: m+=y; break;
                case 3: m-=z; break;
                case 4: m-=w, ++c;
            }
            if(m<=0){
                cout<<"bye~Rabbit\n";

                break;
            }
        }
        if(m>0)
            cout<<m<<'g'<<endl;//輸出結果
        ss.clear(), ss.str("");
        c=0;//初始化
    }
    return 0;
}
/*
Input:
4
5 3 2 4 3 10
1 1 2 3 3 3 3 4 3 3
5 3 2 4 3 10
1 1 2 3 3 3 3 4 3 3 2 2 2 2 2 2 2
5 3 2 4 3 10
4 1 3 3 1 1 2 2 1 1 3 1 1 1 1 4
10 3 2 2 1 5
1 4 4 0 0 4 1 2 2 2 0 0 2 2 0
Output:
1g
bye~Rabbit
bye~Rabbit
bye~Rabbit
*/