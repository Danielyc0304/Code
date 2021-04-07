#include<iostream>
using namespace std;

int ans=0;//ans答案

void merge(int *num, int left, int right){//合併; num數字; left左範圍; right右範圍
    int tmp[right-left], L, R;//tmp暫存值; L左半部數字; R右半部數字
    int i;//i旗標

    L=left;
    R=(left+right)/2+1;

    for(i=0; L<=(left+right)/2 && R<=right; ++i){
        if(num[L]<num[R]){//如果左半部數字大於右半部數字
            tmp[i]=num[L];
            ++L;
        }
        else{//如果左半部數字大於等於右半部數字
            tmp[i]=num[R];
            ++R;
            ans+=(left+right)/2-L+1;//因為合併時左右半部皆有序，所以左半部數字較大時，比此數小的數字位在left到L-1與(left+right)/2+1到R-1之間，可知比此數大的數位於L到(left+right)/2之間，所以加上(left+right)/2-L+1;
        }
    }
    for(; L<=(left+right)/2; ++i){//處理左邊剩餘的數
        tmp[i]=num[L];
        ++L;
    }
    for(; R<=right; ++i){//處理右邊剩餘的數
        tmp[i]=num[R];
        ++R;
    }
    for(i=0; i<=right-left; ++i)//輸出到原本的陣列
        num[i+left]=tmp[i];
}
void mergesort(int *num, int left, int right){//分割、排序; num數字; left左範圍; right右範圍
    if(left<right){
        mergesort(num, left, (left+right)/2);
        mergesort(num, (left+right)/2+1, right);//分割成前後兩部分
        merge(num, left, right);//排序
    }
}
int main(){
    int num[10000], N;//num數字, N數字總數
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i)
        cin>>num[i];
    mergesort(num, 0, N-1);//合併排序

    cout<<ans<<endl;//輸出逆序數

    return 0;
}
/*
Input:
4
4 3 2 1
Output:
6
*/