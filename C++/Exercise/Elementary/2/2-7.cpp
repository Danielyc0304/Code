#include<iostream>
#include<algorithm>
#include<ctime>
using namespace std;

#define Size 40

typedef struct data{
    int chi;
    int eng;
    int math;
}Data;
bool cmp(Data a, Data b){
    if((a.chi==b.chi) && (a.eng==b.eng))
        return a.math>b.math;
    if(a.chi==b.chi)
        return a.eng>b.eng;
    return a.chi>b.chi;
}
int main(){//多鍵值排序
    Data a[Size];
    int i;

    srand(time(NULL));

    for(i=0; i<Size; ++i){
        a[i].chi=rand()%40+60;
        a[i].eng=rand()%40+60;
        a[i].math=rand()%40+60;
    }
    sort(a, a+Size, cmp);

    for(i=0; i<Size; ++i)
        cout<<a[i].chi<<' '<<a[i].eng<<' '<<a[i].math<<endl;
    return 0;
}