#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> loc;//loc服務點位置
int N, K;//N服務點個數; K基地台個數

bool judge(int range){//判斷可行性; range基地台範圍
    int c=0, ser;//c計數; ser服務範圍
    int i;//i旗標

    for(i=0; i<N; ){
        ser=loc[i]+range;//服務範圍
        ++c;

        if(c>K)//如果基地台個數大於目標個數
            return false;//回傳否   
        if(ser>=loc[N-1])//如果服務範圍大於最後一個服務點
            return true;//回傳是
        for(; ser>=loc[i]; ++i);//當服務點在服務範圍內
    }
    return false;
}
int main(){//基地台
    int tmp;//tmp暫存值
    int max, min=1;//max最大可能答案; min最小可能答案
    int i;//i旗標

    cin>>N>>K;

    for(i=0; i<N; ++i){
        cin>>tmp;
        loc.push_back(tmp);
    }
    sort(loc.begin(), loc.end());//排序

    max=(loc[N-1]-loc[0])/K+1;//最大可能答案為最遠距離/基地台個數+1

    while(max>min){//二分搜尋法
        if(judge((max+min)/2))//如果可行
            max=(max+min)/2;//往左邊找，涵蓋(max+min)/2因為此為成立的情況
        else
            min=(max+min)/2+1;//往右邊找，不涵蓋(max+min)/2+1因為此為不成立的情況
    }
    cout<<min<<endl;//輸出基地台最小直徑

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