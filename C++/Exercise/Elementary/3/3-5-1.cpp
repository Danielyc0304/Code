#include<iostream>
using namespace std;

int main(){//小群體(10603第2題)
    int fri[50000], N;//fri朋友; N人數
    int use[50000], nex, c=0;//use已經被處理過的人; nex下一個人; c計數
    int i;//i旗標

    while(cin>>N){
        for(i=0; i<N; ++i){
            cin>>fri[i];
            use[i]=0;//初始化
        }
        for(i=0; i<N; ++i)
            if(use[i]==0){//如果還沒被處理
                if(fri[i]==i){//如果跟自己是朋友
                    ++c;//團體數+1
                    use[i]==1;
                }
                else{
                    nex=i;

                    do{
                        use[nex]=1;
                        nex=fri[nex];
                    }while(use[nex]==0);
                    ++c;
                }
            }
        cout<<c<<endl;

        c=0;
    }
    return 0;
}
/*
Input:
10
4 7 2 9 6 0 8 1 5 3
Output:
4
*//*
Input:
3
0 2 1
Output:
2
*/