#include<iostream>
using namespace std;

struct node{//節點
    char word;//word字元
    struct node *left;//*left左邊子節點指標
    struct node *right;//*right右邊子節點指標
};
string a, b;//a前序走訪結果; b中序走訪結果
int i=0;//i旗標

struct node *build_tree(int left, int right){//建立樹狀圖; left左邊界; right右邊界
    struct node *Nod;//*Nod節點指標
    int mid;//mid中間點
    int j;//j旗標

    Nod=new struct node;//動態配置
    Nod->word=a[i++];//Nod->word=a[i], ++i

    if(left<right){//如果還可以分割
        for(j=left; j<=right; ++j)
            if(Nod->word==b[j]){//找出中間點
                mid=j;

                break;
            }
        if(left<=mid-1)//如果左邊有字
            Nod->left=build_tree(left, mid-1);
        else//如果左邊沒有字
            Nod->left=NULL;
        if(mid+1<=right)//如果右邊有字
            Nod->right=build_tree(mid+1, right);
        else//如果右邊沒有字
            Nod->right=NULL;
    }
    else{//如果不能分割
        Nod->left=NULL;
        Nod->right=NULL;
    }
    return Nod;//回傳Nod位址
}
void postorder(struct node *Node){//後序走訪; Node節點
    if(Node){
        postorder(Node->left);//左邊子節點
        postorder(Node->right);//右邊子節點

        cout<<Node->word;//輸出節點文字
    }
}
int main(){//前序與中序建立樹求後序走訪
    node *roo;//*roo根節點

    while(cin>>a>>b){
        roo=build_tree(0, a.length()-1);//建立樹狀圖

        postorder(roo);//後序走訪
        cout<<endl;
    }
    return 0;
}
/*
Input:
ABDECF
DBEACF
Output:
DEBFCA
*/