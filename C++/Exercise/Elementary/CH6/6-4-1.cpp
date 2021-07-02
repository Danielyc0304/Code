#include<iostream>
#include<algorithm>
using namespace std;

int loc[50000], N, K;//loc服務點位置, N服務點個數; K基地台個數

bool judge(int range){//判斷可行性; range基地台範圍
    int c=0, ser;//c計數; ser服務範圍
    int i;//i旗標

    for(i=0; i<N; ){
        ser=loc[i]+range;//服務範圍
        ++c;

        if(c>K)//如果基地台個數大於目標個數
            return false;
        if(ser>=loc[N-1])//如果服務範圍大於最後一個服務點
            return true;
        do{//至少執行一次
            ++i;
        }while(ser>=loc[i]);//當服務點在服務範圍內
    }
    return false;
}
int main(){//基地台(10603第4題)
    int L, M, R;//L左邊界; M中間點; R右邊界
    int i;//i旗標

    while(cin>>N){
        cin>>K;

        for(i=0; i<N; ++i)
            cin>>loc[i];
        sort(loc, loc+N);//排序

        if(K==1)
            cout<<loc[N-1]-loc[0]<<endl;
        else{
            L=1;//最小直徑
            R=(loc[N-1]-loc[0])/K+1;//最大值徑，防止有小數點直接捨去所以+1

            while(L<=R){//二分搜尋
                M=(L+R)/2;

                if(judge(M))//如果可行
                    R=M;
                else
                    L=M+1;
                if(L==R)//如果左邊界等於右邊界
                    break;
            }
            cout<<R<<endl;//輸出最小直徑
        }
    }
    return 0;
}
/*
Input:
5 2
5 1 2 8 7
Output:
3
*//*
Input:
5 1
7 5 1 2 8
Output:
7
*/