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
void merge(int *num, int left, int right){
    int tmp[Size], L, R;
    int i;

    L=left;
    R=(left+right)/2+1;

    for(i=left; L<=(left+right)/2 && R<=right; ++i){
        if(num[L]<num[R]){
            tmp[i]=num[L];
            ++L;
        }
        else{
            tmp[i]=num[R];
            ++R;
        }
    }
    for(; L<=(left+right)/2; ++i){
        tmp[i]=num[L];
        ++L;
    }
    for(; R<=right; ++i){
        tmp[i]=num[R];
        ++R;
    }
    for(i=left; i<=right; ++i)
        num[i]=tmp[i];
}
void mergesort(int *num, int left, int right){
    if(left<right){
        mergesort(num, left, (left+right)/2);
        mergesort(num, (left+right)/2+1, right);
        merge(num, left, right);
        
        cout<<"L="<<left<<" M="<<(left+right)/2<<" R="<<right<<endl;
        print(num, Size);
    }
}
int main(){//合併排序
    int num[Size];
    int i;

    srand(time(NULL));

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;
    cout<<"排序前\n";
    print(num, Size);

    mergesort(num, 0, Size-1);

    cout<<"排序後\n";
    print(num, Size);
    
    return 0;
}