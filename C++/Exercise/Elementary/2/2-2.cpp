#include<iostream>
#include<ctime>
using namespace std;

#define Size 10

void print(int num[], int size){
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

    for(i=1; i<Size; ++i){
        tmp=num[i];

        for(j=i-1; j>=0; --j){
            if(tmp<num[j])
                num[j+1]=num[j];
            else
                break;
        }
        num[j+1]=tmp;

        cout<<"外層迴圈執行"<<i<<"次結果為\n";
        print(num, Size);
    }
    cout<<"排序後\n";
    print(num, Size);

    return 0;
}