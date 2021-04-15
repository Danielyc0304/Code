#include<iostream>
#include<fstream>
using namespace std;

int main(){//檔案的讀取與寫入
    ifstream in("input.txt");//從input.txt讀取資料
    ofstream out("output.txt");//在output.txt輸出資料

    string a;//a字串

    while(getline(in, a))
        out<<a<<endl;
    return 0;
}