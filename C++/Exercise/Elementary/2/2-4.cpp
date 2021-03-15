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
void print(int *num, int size){
    int i;

    for(i=0; i<size; ++i)
        cout<<num[i]<<' ';
    cout<<endl;
}
int main(){
    return 0;
}