#include<iostream>
using namespace std;

struct node{//節點
    int num;//num數字
    struct node *left;//*left左邊子節點指標
    struct node *right;//*right右邊子節點指標
};
int num1[9999], num2[9999];//num1中序走訪結果; num2後序走訪結果
int ans=10000000;//ans答案
int i;//i旗標

struct node *build_tree(int left, int right){//建立樹狀圖; left左邊界; right右邊界
    struct node *nod;//*nod節點指標
    int mid;//mid中間點
    int j;//j旗標

    nod=new struct node;//動態配置
    nod->num=num2[i--];//nod->num=num2[i], --i

    if(left<right){//如果還可以分割
        for(j=right; j>=left; --j)
            if(nod->num==num1[j]){//找出中間點
                mid=j;

                break;
            }
        if(mid+1<=right)//如果右邊有字
            nod->right=build_tree(mid+1, right);
        else//如果右邊沒有字
            nod->right=NULL;
        if(left<=mid-1)//如果左邊有字
            nod->left=build_tree(left, mid-1);
        else//如果左邊沒有字
            nod->left=NULL;
    }
    else{//如果不能分割
        nod->left=NULL;
        nod->right=NULL;
    }
    return nod;//回傳nod位址
}
void traverse(struct node *node, int sum){//尋找根節點到葉節點的最小總和; *node節點指標; sum總和
    if(node->left==NULL && node->right==NULL){//如果是葉節點
        sum+=node->num;

        if(ans>sum)//如果ans不是最小總和
            ans=sum;
    }
    sum+=node->num;

    if(node->left!=NULL)//如果左邊有子節點
        traverse(node->left, sum);
    if(node->right!=NULL)//如果右邊有子節點
        traverse(node->right, sum);
}
int main(){//後序與中序建立樹求最小路徑和
    struct node *roo;//*roo根節點指標
    int N;//N節點總數
    int j;//j旗標

    while(cin>>N){
        for(j=0; j<N; ++j)
            cin>>num1[j];
        for(j=0; j<N; ++j)
            cin>>num2[j];
        i=N-1;

        roo=build_tree(0, N-1);//建立樹狀圖

        traverse(roo, 0);//遍歷

        cout<<ans<<endl;//輸出根節點到葉節點的最小總和
    }
    return 0;
}
/*
Input:
7
4 2 6 5 1 3 7
4 6 2 1 7 3 5
Output:
9
*/