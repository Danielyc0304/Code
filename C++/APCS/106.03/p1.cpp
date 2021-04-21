#include<iostream>
#include<sstream>
using namespace std;

int main(){//秘密差
    string X;//X數字
    stringstream ss;//ss字串串流
    int s, num1=0, num2=0;//s計算值; num1奇數位總和; num2偶數位總和
    int i;//i旗標

    getline(cin, X);

    for(i=0; i<X.length(); ++i){
        ss<<X[i];
        ss>>s;
        ss.clear();

        if(i%2==0)
            num1+=s;
        else
            num2+=s;
    }
    cout<<abs(num1-num2)<<endl;//輸出奇數位總和-偶數位總和的絕對值

    return 0;
}
/*
Input:
263541
Output:
3
*//*
Input:
131
Output:
3
*/