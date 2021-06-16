#include<iostream>
using namespace std;

char tre[1024];//tre樹狀圖

void preorder(int node){//前序走訪(中-左-右); node節點
    if(tre[node]){
        cout<<tre[node]<<' ';//輸出節點文字

        preorder(2*node);
        preorder(2*node+1);
    }
}
void inorder(int node){//中序走訪(左-中-右); node節點
    if(tre[node]){
        inorder(2*node);

        cout<<tre[node]<<' ';//輸出節點文字

        inorder(2*node+1);
    }
}
void postorder(int node){//後序走訪(左-右-中); node節點
    if(tre[node]){
        postorder(2*node);
        postorder(2*node+1);

        cout<<tre[node]<<' ';//輸出節點文字
    }
}
int main(){//二元樹走訪--使用陣列
    tre[1]='A';
    tre[2]='B';
    tre[3]='C';
    tre[4]='D';
    tre[5]='E';
    tre[7]='F';

    preorder(1);
    cout<<endl;//輸出前序走訪結果

    inorder(1);
    cout<<endl;//輸出中序走訪結果

    postorder(1);
    cout<<endl;//輸出後序走訪結果

    return 0;
}
/*
Output:
A B D E C F 
D B E A C F
D E B F C A
*/