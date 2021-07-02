#include<iostream>
using namespace std;

int a[10];//a數字

int intermediate(int left, int middle, int right){//往兩邊尋訪; left左邊界; middle中間點; right右邊界
    int sumL=0, sumR=0, maxL, maxR;//sumL左邊總和; sumR右邊總和; maxL左邊最大連續總和; maxR右邊最大連續總和
    int i;//i旗標

    maxL=a[middle];
    for(i=middle; i>=left; --i){
        sumL+=a[i];

        if(sumL>maxL)
            maxL=sumL;
    }//計算左邊最大連續總和
    maxR=a[middle+1];
    for(i=middle+1; i<=right; ++i){
        sumR+=a[i];

        if(sumR>maxR)
            maxR=sumR;
    }//計算右邊最大連續總和
    return max(maxL, max(maxR, maxL+maxR));//回傳maxL, maxR, maxL+maxR的最大值
}
int segmentation(int left, int right){//分割; left左邊界; right右邊界
    int M, maxL, maxR, maxC;//M中間點; maxL左邊最大連續總和; maxR右邊最大連續總和; maxC往兩邊尋訪最大連續總和

    if(left==right)//如果左邊界等於右邊界
        return a[left];//回傳數字
    M=(left+right)/2;
    maxL=segmentation(left, M);//計算左邊最大連續總和
    maxR=segmentation(M+1, right);//計算右邊最大連續總和
    maxC=intermediate(left, M, right);//計算往兩邊尋訪最大連續總和

    return max(maxL, max(maxR, maxC));//回傳maxL, maxR, maxC的最大值
}
int main(){//最大子陣列(Maximum Subarray)
    int i;//i旗標

    for(i=0; i<10; ++i)
        cin>>a[i];
    cout<<segmentation(0, 9)<<endl;//輸出最大連續總和
    
    return 0;
}
/*
Input:
1 2 3 4 5 -10 20 30 -40 10
Output:
55
*/