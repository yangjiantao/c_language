
#include<iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    std::cout << "请输入销售记录: " << std::endl;

    while(std::cin >> book){
        std::cout << "ISBN、售出本数、销售额和平均售价为 " << book << std::endl;
    }
    return 0;
}

// run: ctrl+option+n 
// output: 
// 请输入销售记录: 
// 终端输入：xxxisbn_xx1 2 20.6  回车enter
// 程序输出：ISBN、售出本数、销售额和平均售价为 xxxisbn_xx1  2       41.2    20.6

// 从文件中读取数据
// run: ./1_20 < sales_items.txt   // tips: '<' 表示从文件读取数据
// output:
// ISBN、售出本数、销售额和平均售价为 isbn_1       2       40      20
// ISBN、售出本数、销售额和平均售价为 isbn_1       2       40      20
// ISBN、售出本数、销售额和平均售价为 isbn_1       2       40      20
// ISBN、售出本数、销售额和平均售价为 isbn_3       2       60      30
// ISBN、售出本数、销售额和平均售价为 isbn_3       2       60      30
// ISBN、售出本数、销售额和平均售价为 isbn_5       2       100     50
// ISBN、售出本数、销售额和平均售价为 isbn_5       2       100     50
// ISBN、售出本数、销售额和平均售价为 isbn_6       2       120     60