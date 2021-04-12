#include<iostream>
#include<fstream>
using namespace std;

int main(){//檔案的讀取與寫入
    ifstream in("input.txt");
    ofstream out("output.txt");

    string a;

    while(getline(in, a))
        out<<a<<endl;
    return 0;
}