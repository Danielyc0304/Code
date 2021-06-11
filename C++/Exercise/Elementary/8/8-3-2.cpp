#include<iostream>
#include<list>
using namespace std;

int main(){//可以插隊在任意位置
    char a;//a指令
    int n, m, num1, num2;//n人數; m指令總數; num1, num2數字
    list<int> lin;//lin隊伍
    int i;//i旗標

    while(cin>>n>>m){
        for(i=1; i<=n; ++i)
            lin.push_back(i);//輸入
        for(i=0; i<m; ++i){
            cin>>a;

            if(a=='s'){//如果指令是s
                cout<<lin.front()<<endl;//輸出第一個人

                lin.push_back(lin.front());
                lin.pop_front();//移到最後一個
            }
            else{//如果指令是p
                cin>>num1>>num2;

                lin.remove(num1);

                list<int>::iterator it=lin.begin();
                for(i=1; i<num2; ++i)
                    ++it;
                lin.insert(it, num1);//將第num1個人移到num2
            }
        }
    }
    return 0;
}
/*
Input:
100 10
s
p 100 2
s
s
p 50 1
s
p 75 1
p 56 1
s
s
Output:
1
2
100
50
56
75
*/