#include<iostream>
using namespace std;

int main(){//一路存到掛
    int price;//price價錢
    int ans=0;//ans答案
    int i;//i旗標

    for(i=1; ans<70000; ++i){
        cin>>price;

        ans+=price;
    }
    cout<<i-1<<endl<<ans<<endl;//輸出次數、總金額

    return 0;
}
/*
Input:
20
80000
2334
4500
3169
2724
4478
4358
4962
2464
4705
3145
4281
3827
2961
2491
4995
4942
3827
4436
4391
4604
2902
2153
2292
2382
4421
2716
3718
3895
Output:
2
80020
*//*
Input:
3583
3163
4768
3956
4572
4293
3404
4566
4793
3737
4894
4181
4858
3306
4332
3265
4532
4476
3215
4544
3582
4004
4853
4505
3562
3071
3189
4768
3749
4854
Output:
17
70203
*/