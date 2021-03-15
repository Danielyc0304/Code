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


    }
}
int main(){
    return 0;
}