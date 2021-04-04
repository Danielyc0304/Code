#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n, a, b, c;//n全班人數; a, b, c成績
    double grade[100];//grade三科成績總和
    int i;//i旗標

    cin>>n;

    for(i=1; i<=n; ++i){
        cin>>a>>b>>c;

        grade[i]=a+b+c;
    }
    for(; n>0; --n)
        cout<<fixed<<setprecision(2)<<n<<": "<<grade[n]/3<<endl;//反序輸出三科成績平均
    return 0;
}
/*
Input:
6
92 71 83
73 21 52
3 40 38
88 55 66
98 67 96
30 10 38
Output:
6: 26.00
5: 87.00
4: 69.67
3: 27.00
2: 48.67
1: 82.00
*//*
Input:
20
77 50 36
87 31 74
2 3 3
23 93 90
31 77 21
91 2 80
44 73 77
50 36 87
31 74 95
3 11 23
77 50 36
87 31 74
32 73 83
23 93 90
31 77 21
91 2 80
44 73 77
50 36 87
31 74 95
93 91 93
Output:
20: 92.33
19: 66.67
18: 57.67
17: 64.67
16: 57.67
15: 43.00
14: 68.67
13: 62.67
12: 64.00
11: 54.33
10: 12.33
9: 66.67
8: 57.67
7: 64.67
6: 57.67
5: 43.00
4: 68.67
3: 2.67
2: 64.00
1: 54.33
*/