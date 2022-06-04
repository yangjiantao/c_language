#include<iostream>
#include<typeinfo>
#include "./chapter2/Sales_data.h"

using namespace std;

// 申明在使用之前
void useSalesDataH(){
    cout << "useSalesDataH function start" <<endl;

    Sales_data data, data2;
    cin >> data.bookNo >> data.units_sold >> data.saleprice;

    cin >> data2.bookNo >> data2.units_sold >> data2.saleprice;

    unsigned totalCnt = data.units_sold + data2.units_sold;
    cout << "totalCnt :" << totalCnt << endl;

}

// 本题旨在考查auto说明符与复合类型、常量混合使用时的各种情形。
int main(){
    const int i = 42;
    auto j = i;
    const auto &k = i;
    auto *p = &i; // p为指向整型常量的指针
    const auto j2 = i, &k2 = i;

    cout << typeid(i).name() << endl;
    cout << typeid(j).name() << endl;
    cout << typeid(k).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(j2).name() << endl;
    cout << typeid(k2).name() << endl;
    

    useSalesDataH();
    return 0;
}