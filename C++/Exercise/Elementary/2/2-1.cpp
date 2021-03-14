#include<iostream>
#include<ctime>
using namespace std;

#define Size 10

void print(int *num, int size){
    int i;

    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;
}
int main(){
    int num[Size], tmp;
    int i, j;

    srand(time(NULL));

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;
    cout<<"排序前\n";
    print(num, Size);

    for(i=Size-1; i>1; --i){
        for(j=0; j<i; ++j)
            if(num[j]>num[j+1]){
                tmp=num[j];
                num[j]=num[j+1];
                num[j+1]=tmp;
            }
        cout<<"外層迴圈跑"<<Size-i<<"次結果為\n";
        print(num, Size);
    }
    cout<<"排序後\n";
    print(num, Size);
    
    return 0;
}