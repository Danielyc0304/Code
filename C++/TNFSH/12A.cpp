#include<iostream>
using namespace std;

int main(){//向偉大的發明-沙漏-致敬
    int X;//X數字
    int n;//n運算
    int i, j;//i, j旗標

    cin>>X;

    n=X;

    for(i=0; i<X; ++i){
        for(j=0; j<i; ++j)
            cout<<' ';
        for(j=0; j<2*n-1; ++j)
            cout<<'*';
        cout<<endl;

        --n;
    }
    n=2;

    for(i-=2; i>=0; --i){
        for(j=0; j<i; ++j)
            cout<<' ';
        for(j=0; j<2*n-1; ++j)
            cout<<'*';
        cout<<endl;

        ++n;//輸出結果
    }
    return 0;
}
/*
Input:
3
Output:
*****
 ***
  *
*//*
Input:
1
Output:
*
*//*
Input:
7
Output:
*************
 ***********
  *********
   *******
    *****
     ***
      *
     ***
    *****
   *******
  *********
 ***********
*************
*/