#include<iostream>
using namespace std;

int main(){
    int n, grade;
    int c=0;
    int i;

    cin>>n;

    for(i=0; i<n; ++i){
        cin>>grade;

        if(grade<60)
            c=1;
    }
    if(c==0)
        cout<<"HAHA, I PASS!!! Bite me!!!\n";
    else
        cout<<"Oh, No!!!\n";
    return 0;
}