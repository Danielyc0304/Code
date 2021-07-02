#include<iostream>
#include<sstream>
#include<stack>
using namespace std;

int main(){//後序運算
    string a;//a字串
    stringstream ss;//ss字串串流
    stack<int> num1;//num1數字
    string tmp1;//tmp1暫存值
    int num2=0, tmp2, tmp3;//num2數字; tmp2, tmp3暫存值
    int i;//i旗標

    while(getline(cin, a)){
        ss<<a;

        while(ss>>tmp1){
            if(tmp1=="+"){//如果是+號
                tmp2=num1.top();
                num1.pop();

                tmp3=num1.top();
                num1.pop();
                
                num1.push(tmp3+tmp2);
            }
            else if(tmp1=="-"){//如果是-號
                tmp2=num1.top();
                num1.pop();
                
                tmp3=num1.top();
                num1.pop();
                
                num1.push(tmp3-tmp2);
            }
            else if(tmp1=="*"){//如果是*號
                tmp2=num1.top();
                num1.pop();
                
                tmp3=num1.top();
                num1.pop();
                
                num1.push(tmp3*tmp2);
            }
            else if(tmp1=="/"){//如果是/號
                tmp2=num1.top();
                num1.pop();

                tmp3=num1.top();
                num1.pop();

                num1.push(tmp3/tmp2);
            }
            else{//如果是數字
                for(i=0; i<tmp1.length(); ++i)
                    num2=10*num2+tmp1[i]-'0';
                num1.push(num2);

                num2=0;//初始化
            }
        }
        cout<<num1.top()<<endl;//輸出結果

        ss.clear();
        num1.pop();//初始化
   }
   return 0;
}
/*
Input:
3 2 5 * + 9 -
Output:
4
*/