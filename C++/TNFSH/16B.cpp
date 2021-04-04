#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int grade[100], n;//grade成績; n成績
    int c1=0, c2=0, c3=0, c4=0, c5=0, max=0, maxi;//c1, c2, c3, c4, c5計數; max最大值; maxi最大值項數
    double sum=0;//sum總和
    int i;//i旗標

    cin>>n;

    for(i=1; i<=n; ++i){
        cin>>grade[i];

        sum+=grade[i];

        if(grade[i]>max){
            max=grade[i];
            maxi=i;
        }
        if(grade[i]>=90) ++c1;
        else if(grade[i]>=80) ++c2;
        else if(grade[i]>=70) ++c3;
        else if(grade[i]>=60) ++c4;
        else ++c5;
    }
    cout<<fixed<<setprecision(2)<<sum/n<<endl;
    cout<<maxi<<endl;//輸出平均、最大值項數

    cout<<"A:";
    for(i=0; i<c1; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"B:";
    for(i=0; i<c2; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"C:";
    for(i=0; i<c3; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"D:";
    for(i=0; i<c4; ++i)
        cout<<'*';
    cout<<endl;

    cout<<"E:";
    for(i=0; i<c5; ++i)
        cout<<'*';
    cout<<endl;//輸出圖表

    return 0;
}
/*
Input:
10
42 71 63 73 1 52 8 40 38 88
Output:
47.60
10
A:
B:*
C:**
D:*
E:******
*//*
Input:
20
77 50 36 87 31 74 95 3 11 23 93 90 31 77 21 91 2 80 44 73
Output:
54.45
7
A:****
B:**
C:****
D:
E:**********
*/