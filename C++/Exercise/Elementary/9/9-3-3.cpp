#include<iostream>
#include<queue>
using namespace std;

struct node{//節點
    char word;//word字元
    struct node *left;//*left左邊子節點指標
    struct node *right;//*right右邊子節點指標
};
queue<struct node *> tre;//tre樹狀圖

void traverse(struct node *Node){
    tre.push(Node); 

    while(!tre.empty()){
        cout<<tre.front()->word<<' ';//輸出節點文字

        if(tre.front()->left)//如果left指標有指向位址
            tre.push(tre.front()->left);
        if(tre.front()->right)//如果right指標有指向位址
            tre.push(tre.front()->right);
        tre.pop();
    }
}
int main(){//二元樹階層走訪--使用指標
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

    traverse(roo);
    cout<<endl;

    return 0;
}
/*
Output:
A B C D E F
*/