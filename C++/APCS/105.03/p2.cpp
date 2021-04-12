#include<iostream>
using namespace std;

int num[10][10], R, C;//num數字; R行數; C每行個數
int tmp[10][10];//tmp暫存值

void spin(){//旋轉陣列
    int i, j;//i, j旗標

    memcpy(tmp, num, sizeof(num));//複製num的值到tmp

    swap(R, C);//交換數字

    for(i=0; i<R; ++i)
        for(j=0; j<C; ++j)
            num[i][j]=tmp[j][R-i-1];//旋轉陣列
}
void flip(){//翻轉陣列
    int i, j;//i, j旗標

    memcpy(tmp, num, sizeof(num));//複製num的值到tmp

    for(i=0; i<R; ++i)
        for(j=0; j<C; ++j)
            num[i][j]=tmp[R-i-1][j];//翻轉陣列
}
int main(){
    int act[10], M;//act動作; M動作次數
    int i, j;//i, j旗標

    cin>>R>>C>>M;

    for(i=0; i<R; ++i)
        for(j=0; j<C; ++j)
            cin>>num[i][j];
    for(i=0; i<M; ++i)
        cin>>act[i];
    for(i=M-1; i>=0; --i){
        if(act[i]==0)//如果數字為0
            spin();//旋轉
        else//如果數字不為0
            flip();//翻轉
    }
    cout<<R<<' '<<C<<endl;
    for(i=0; i<R; ++i){
        for(j=0; j<C-1; ++j)
            cout<<num[i][j]<<' ';
        cout<<num[i][j]<<endl;//輸出結果
    }
    return 0;
}
/*
Input:
3 2 3
1 1
3 1
1 2
1 0 0
Output:
3 2
1 1
1 3
2 1
*//*
Input:
3 2 2
3 3
2 1
1 2
0 1
Output:
2 3
2 1 3
1 2 3
*/