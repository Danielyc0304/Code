#include<iostream>
#include<algorithm>
#include<sstream>
#include<cstring>
using namespace std;

int c1[13]={0}, c2[13]={0};//c1第一個人每個數字出現次數; c2第二個人每個數字出現次數

int num_conversion(string a){//轉換成數字; a卡牌
    int sui, num;//sui花色; num數字

    switch(a[0]){
        case 'C': sui=0; break;//黑梅
        case 'D': sui=1; break;//紅磚
        case 'H': sui=2; break;//紅心
        default: sui=3;//黑桃
    }
    switch(a[1]){
        case 'A': num=12; break;
        case 'K': num=11; break;
        case 'Q': num=10; break;
        case 'J': num=9; break;
        case 'T': num=8; break;
        default: num=a[1]-'2';
    }
    return 13*sui+num;//回傳數字
}
bool SF(int a[]){//同花順
    if(a[4]-a[0]==4){//如果是連續數
        if(a[0]>=0 && a[4]<13)//同為黑梅
            return true;//回傳是
        if(a[0]>=13 && a[4]<26)//同為紅磚
            return true;//回傳是
        if(a[0]>=26 && a[4]<39)//同為紅心
            return true;//回傳是
        if(a[0]>=39 && a[4]<52)//同為黑桃
            return true;//回傳是
    }
    return false;//回傳否
}
bool F(int a[]){//同花
    if(a[0]>=0 && a[4]<13)//同為黑梅
        return true;//回傳是
    if(a[0]>=13 && a[4]<26)//同為紅磚
        return true;//回傳是
    if(a[0]>=26 && a[4]<39)//同為紅心
        return true;//回傳是
    if(a[0]>=39 && a[4]<52)//同為黑桃
        return true;//回傳是
    return false;//回傳否
}
int level1(int a[]){//判斷牌的大小; a數字
    int i, j;//i, j旗標

    if(SF(a)==true)
        return 9;//回傳同花順
    for(i=0; i<13; ++i)
        if(c1[i]==4)
            return 8;//回傳四條
    for(i=0; i<13; ++i){
        if(c1[i]==2)
            for(j=i+1; j<13; ++j)
                if(c1[j]==3)
                    return 7;//回傳葫蘆
        if(c1[i]==3)
            for(j=i+1; j<13; ++j)
                if(c1[j]==2)
                    return 7;//回傳葫蘆
    }
    if(F(a)==true)
        return 6;//回傳同花
    for(i=0; i<9; ++i)
        if(c1[i]==1 && c1[i+1]==1 && c1[i+2]==1 && c1[i+3]==1 && c1[i+4]==1)
            return 5;//回傳順子
    for(i=0; i<13; ++i)
        if(c1[i]==3)
            return 4;//回傳三條
    for(i=0; i<13; ++i)
        if(c1[i]==2)
            for(j=i+1; j<13; ++j)
                if(c1[j]==2)
                    return 3;//回傳兩對
    for(i=0; i<13; ++i)
        if(c1[i]==2)
            return 2;//回傳一對
    return 1;//回傳散牌
}
int level2(int a[]){//判斷牌的大小; a數字
    int i, j;//i, j旗標

    if(SF(a)==true)
        return 9;//回傳同花順
    for(i=0; i<13; ++i)
        if(c2[i]==4)
            return 8;//回傳四條
    for(i=0; i<13; ++i){
        if(c2[i]==2)
            for(j=i+1; j<13; ++j)
                if(c2[j]==3)
                    return 7;//回傳葫蘆
        if(c2[i]==3)
            for(j=i+1; j<13; ++j)
                if(c2[j]==2)
                    return 7;//回傳葫蘆
    }
    if(F(a)==true)
        return 6;//回傳同花
    for(i=0; i<9; ++i)
        if(c2[i]==1 && c2[i+1]==1 && c2[i+2]==1 && c2[i+3]==1 && c2[i+4]==1)
            return 5;//回傳順子
    for(i=0; i<13; ++i)
        if(c2[i]==3)
            return 4;//回傳三條
    for(i=0; i<13; ++i)
        if(c2[i]==2)
            for(j=i+1; j<13; ++j)
                if(c2[j]==2)
                    return 3;//回傳兩對
    for(i=0; i<13; ++i)
        if(c2[i]==2)
            return 2;//回傳一對
    return 1;//回傳散牌
}
int same(int level){
    int num1, num2;//num1, num2數字
    int i;//i旗標

    if(level==9){//如果同為同花順
        for(i=12; i>3; --i)//找出第一個人牌的最大數字
            if(c1[i]==1){
                num1=i;

                break;
            }
        for(i=12; i>3; --i)//找出第二個人牌的最大數字
            if(c2[i]==1){
                num2=i;

                break;
            }
        if(num1>num2)//如果第一個人的數字比較大
            return 1;//回傳1
        return 0;//回傳0
    }
    if(level==8){//如果同為四條
        for(i=12; i>=0; --i)//找出第一個人牌的數字
            if(c1[i]==4){
                num1=i;

                break;
            }
        for(i=12; i>=0; --i)//找出第二個人牌的數字
            if(c2[i]==4){
                num2=i;

                break;
            }
        if(num1>num2)//如果第一個人的數字比較大
            return 1;//回傳1
        return 0;//回傳0
    }
    if(level==7){//如果同為葫蘆
        for(i=12; i>=0; --i)
            if(c1[i]==3){//找出第一個人牌三張的數字
                num1=i;

                break;
            }
        for(i=12; i>=0; --i)
            if(c2[i]==3){//找出第二個人牌三張的數字
                num2=i;

                break;
            }
        if(num1>num2)//如果第一個人的數字比較大
            return 1;//回傳1
        return 0;//回傳0
    }
    if(level==6)//如果同為同花
        for(i=12; i>=0; --i){
            if(c1[i]==1 && c2[i]==0)//如果第一位有較大的數字
                return 1;//回傳1
            if(c1[i]==0 && c2[i]==1)//如果第二位有較大的數字
                return 0;//回傳0
        }
    if(level==5){//順子
        for(i=12; i>=0; --i)//找出第一個人牌的最大數字
            if(c1[i]==1){
                num1=i;

                break;
            }
        for(i=12; i>=0; --i)//找出第二個人牌的最大數字
            if(c2[i]==1){
                num2=i;

                break;
            }
        if(num1>num2)//如果第一個人的數字比較大
            return 1;//回傳1
        return 0;//回傳0
    }
    if(level==4){//如果同為三條
        for(i=12; i>=0; --i)//找出第一個人牌的數字
            if(c1[i]==3){
                num1=i;

                break;
            }
        for(i=12; i>=0; --i)//找出第二個人牌的數字
            if(c2[i]==3){
                num2=i;

                break;
            }
        if(num1>num2)//如果第一個人的數字比較大
            return 1;//回傳1
        return 0;//回傳0
    }
    if(level==3)//如果同為兩對
        for(i=12; i>=0; --i){
            if(c1[i]==2 && c2[i]<2)//如果第一位有較大的數字
                return 1;//回傳1
            if(c1[i]<2 && c2[i]==2)//如果第二位有較大的數字
                return 0;//回傳0
        }
    if(level==2)//如果同為一對
        for(i=12; i>=0; --i){
            if(c1[i]==2 && c2[i]<2)//如果第一位有較大的數字
                return 1;//回傳1
            if(c1[i]<2 && c2[i]==2)//如果第二位有較大的數字
                return 0;//回傳0
        }
    if(level==1)
        for(i=12; i>=0; --i){
            if(c1[i]==1 && c2[i]==0)//如果第一位有較大的數字
                return 1;//回傳1
            if(c1[i]==0 && c2[i]==1)//如果第二位有較大的數字
                return 0;//回傳0
        }
    return 1;//消除警告
}
int main(){//撲克牌比大小(模擬撲克牌遊戲進行)
    string a;//a卡牌
    stringstream ss;//ss字串串流
    string tmp;//tmp暫存值
    int num1[5], num2[5], l1, l2, c3;//num1, num2數字; l1第一個人牌的大小; l2第二個人牌的大小; c3判斷
    int i;//i旗標

    while(getline(cin, a)){
        ss<<a;

        for(i=0; i<5; ++i){
            ss>>tmp;
            num1[i]=num_conversion(tmp);//轉換成數字
        }
        for(i=0; i<5; ++i){
            ss>>tmp;
            num2[i]=num_conversion(tmp);//轉換成數字
        }
        for(i=0; i<5; ++i)
            ++c1[num1[i]%13];//計算數字出現的次數
        for(i=0; i<5; ++i)
            ++c2[num2[i]%13];//計算數字出現的次數
        sort(num1, num1+5);//排序
        sort(num2, num2+5);//排序

        l1=level1(num1), l2=level2(num2);//判斷牌的大小

        if(l1>l2)//如果第一個人牌比較大
            cout<<"第一位玩家獲勝\n";
        else if(l1<l2)//如果第二個人牌比較大
            cout<<"第二位玩家獲勝\n";
        else{//如果牌一樣大
            c3=same(l1);

            if(c3==1)//如果第一個人牌比較大
                cout<<"第一位玩家獲勝\n";
            else//如果第二個人牌比較大
                cout<<"第二位玩家獲勝\n";
        }
        memset(c1, 0, sizeof(c1)), memset(c2, 0, sizeof(c2));//初始化
    }
    return 0;
}
/*
Input:
CJ CK CT C2 C4 D2 S2 H2 DJ DT
Output:
第一位玩家獲勝
*/