// 练习1.23：编写程序，读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。

#include<iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item trans1, trans2;
    int num = 1;
    cout << "请输入若干销售记录："  << endl;
    if(cin >> trans1){
        while (cin >> trans2)
        {
            if(trans1.same_isbn(trans2)){
                num ++;
            }else{
                cout << trans1.isbn << "共有" << num << "条记录" << endl;

                trans1 = trans2;
                num = 1;
            }
        }
        cout << trans1.isbn << "共有" << num << "条记录" << endl;
        
    }else{
        cout << "no data" << endl;
        return -1;
    }
    return 0;
}