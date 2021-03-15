#include<iostream>
#include<ctime>
using namespace std;

#define Size 10

void swap(int *a, int *b){
    int tmp;

    tmp=*a;
    *a=*b;
    *b=tmp;
}
void print(int num[], int size){
    int i;

    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;
}
void quicksort(int *num, int left, int right){
    int i, j;

    if(left<right){
        i=left;
        j=right+1;

        while(1){
            while((i<right) && (num[++i]<num[left]));
            while((j>0) && (num[--j]>num[left]));

            if(i>=j)
                break;
            swap(&num[i], &num[j]);
        }
        swap(&num[left], &num[j]);

        cout<<"L="<<left<<" j="<<j<<" R="<<right<<endl;
        print(num, Size);

        quicksort(num, left, j-1);
        quicksort(num, j+1, right);
    }
}
int main(){
    int num[Size];
    int i;

    srand(time(NULL));

    for(i=0; i<Size; ++i)
        num[i]=rand()%1000+1;
    cout<<"排序前\n";
    print(num, Size);

    quicksort(num, 0, Size-1);

    cout<<"排序後\n";
    print(num, Size);

    return 0;
}