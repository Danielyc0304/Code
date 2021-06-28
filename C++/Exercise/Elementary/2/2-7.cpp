#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

#define Size 40//Size最大值

typedef struct grade{//成績
    int chinese;//chinese國文成績
    int english;//english英文成績
    int math;//math數學成績
}Grade;
bool cmp(Grade a, Grade b){//排序規則; a, b資料
    if((a.chinese==b.chinese) && (a.english==b.english))//如果國文成績與英文成績都相同
        return a.math>b.math;//數學成績高的在前面
    if(a.chinese==b.chinese)//如果只有國文成績相同
        return a.english>b.english;//英文成績高的在前面
    return a.chinese>b.chinese;//國文成績高的在前面
}
int main(){//多鍵值排序
    Grade a[Size];//a成績
    int i;//i旗標

    srand(time(NULL));//產生隨機數

    for(i=0; i<Size; ++i){
        a[i].chinese=rand()%40+60;
        a[i].english=rand()%40+60;
        a[i].math=rand()%40+60;//隨機陣列
    }
    sort(a, a+Size, cmp);//排序

    for(i=0; i<Size; ++i)
        cout<<a[i].chinese<<' '<<a[i].english<<' '<<a[i].math<<endl;//輸出排序後的陣列
    return 0;
}