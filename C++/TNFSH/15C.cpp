#include<iostream>
using namespace std;

int main(){//班級成績統計
    int gra[200], N;//gra成績; N成績總數
    int sum=0, max=0, min=100;//sum總和; max最大值; min最小值
    int i;//i旗標

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>gra[i];

        sum+=gra[i];

        if(gra[i]>max)
            max=gra[i];
        if(gra[i]<min)
            min=gra[i];
    }
    cout<<sum<<endl<<sum/N<<endl<<max<<endl<<min<<endl;//輸出總和、平均、最高分、最低分

    return 0;
}
/*
Input:
10
42 71 63 73 1 52 8 40 38 88
Output:
476
47
88
1
*/