#include<iostream>
using namespace std;

struct node{//節點
    char word;//word字元
    struct node *left;//*left左邊子節點指標
    struct node *right;//*right右邊子節點指標
};
void preorder(struct node *Node){//前序走訪(中-左-右); node節點
    if(Node){//如果指標有指向位址
        cout<<Node->word<<' ';//輸出節點文字
        
        preorder(Node->left);//左邊子節點
        preorder(Node->right);//右邊子節點
    }
}
void inorder(struct node *Node){//中序走訪(左-中-右); node節點
    if(Node){
        inorder(Node->left);//左邊子節點

        cout<<Node->word<<' ';//輸出節點文字

        inorder(Node->right);//右邊子節點
    }
}
void postorder(struct node *Node){//後序走訪(左-右-中); node節點
    if(Node){
        postorder(Node->left);//左邊子節點
        postorder(Node->right);//右邊子節點

        cout<<Node->word<<' ';//輸出節點文字
    }
}
int main(){//二元樹走訪--使用指標
    struct node *roo, *nod1, *nod2, *nod3, *nod4, *nod5, *nod7;//*roo, *nod1, *nod2, *nod3, *nod4, *nod5, *nod7節點指標

    nod1=new struct node;//動態配置
    nod1->word='A';//指標nod1指向的word空間為A
    roo=nod1;//節點1是根節點

    nod2=new struct node;//動態配置
    nod2->word='B';//指標nod2指向的word空間為B

    nod3=new struct node;//動態配置
    nod3->word='C';//指標nod3指向的word空間為C

    nod4=new struct node;//動態配置
    nod4->word='D';//指標nod4指向的word空間為D

    nod5=new struct node;//動態配置
    nod5->word='E';//指標nod5指向的word空間為E

    nod7=new struct node;//動態配置
    nod7->word='F';//指標nod7指向的word空間為F

    nod1->left=nod2;//指標nod1指向的left指標為指標nod2
    nod1->right=nod3;//指標nod1指向的right指標為指標nod3

    nod2->left=nod4;//指標nod2指向的left指標為指標nod4
    nod2->right=nod5;//指標nod2指向的right指標為指標nod5
    
    nod3->left=NULL;//指標nod3左邊沒有子節點
    nod3->right=nod7;//指標nod3指向的right指標為指標nod7

    nod4->left=NULL;//指標nod4左邊沒有子節點
    nod4->right=NULL;//指標nod4右邊沒有子節點

    nod5->left=NULL;//指標nod5左邊沒有子節點
    nod5->right=NULL;//指標nod5右邊沒有子節點

    nod7->left=NULL;//指標nod7左邊沒有子節點
    nod7->right=NULL;//指標nod7右邊沒有子節點

    preorder(roo);
    cout<<endl;//輸出前序走訪結果

    inorder(roo);
    cout<<endl;//輸出中序走訪結果

    postorder(roo);
    cout<<endl;//輸出後序走訪結果

    return 0;
}
/*
Output:
A B D E C F 
D B E A C F
D E B F C A
*/