#include<iostream>
#include<algorithm>
using namespace std;

int main(){//翻轉世界
    int num[10][10], T, N, M;//num數字; T測資總數; N長; M寬
    int tmp[10], c=0;//tmp暫存值; c判斷
    int i, j, k;//i, j, k旗標

    cin>>T;

    for(i=0; i<T; ++i){
        cin>>N>>M;

        for(j=0; j<N; ++j)
            for(k=0; k<M; ++k)
                cin>>num[j][k];
        for(j=0; j<N-j; ++j){
            for(k=0; k<M; ++k)
                tmp[k]=num[j][k];
            reverse(num[N-j-1], num[N-j-1]+M);//反轉陣列

            for(k=0; k<M; ++k)
                if(tmp[k]!=num[N-j-1][k]){//如果反轉之後不相符
                    c=1;

                    break;
                }
            if(c==1)
                break;
        }
        if(c==0)//如果相符
            cout<<"go forward\n";
        else//如果不相符
            cout<<"keep defending\n";
        c=0;//初始化
    }
    return 0;
}
/*
Input:
2
3 3
1 1 0
0 1 0
0 1 1
1 5
0 0 1 0 1
Output:
go forward
keep defending
*/