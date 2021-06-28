#include<iostream>
#include<list>
using namespace std;

void printList(list<int> a){//輸出; a數字
    cout<<"目前LinkedList內的資料：";
    
    for(auto it=a.begin(); it!=a.end(); ++it)//宣告list<int>的迭代器
        cout<<*it<<' ';
    cout<<endl;//輸出鏈結串列
}
int main(){//Linked List使用STL實作
    list<int> a;//a數字

    a.push_back(1);
    printList(a);

    a.push_back(2);
    printList(a);

    a.push_back(4);
    printList(a);

    auto it=a.begin();//宣告list<int>的迭代器
    ++it;
    ++it;

    a.insert(it, 3);
    cout<<"插入3後\n";
    printList(a);

    a.remove(2);
    cout<<"取出2後\n";
    printList(a);

    return 0;
}
/*
Output:
目前LinkedList內的資料：1 
目前LinkedList內的資料：1 2 
目前LinkedList內的資料：1 2 4 
插入3後
目前LinkedList內的資料：1 2 3 4 
取出2後
目前LinkedList內的資料：1 3 4
*/