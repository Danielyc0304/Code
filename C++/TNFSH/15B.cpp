#include<iostream>
using namespace std;

int main(){
    int grade[51], N;
    int c1=0, c2=0, c3=0;
    int i;

    cin>>N;

    for(i=0; i<N; ++i){
        cin>>grade[i];

        if(grade[0]>grade[i])
            ++c1;
        else if(grade[0]==grade[i])
            ++c2;
        else
            ++c3;
    }
    cout<<c1<<endl<<c2-1<<endl<<c3<<endl;

    return 0;
}