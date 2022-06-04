#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo; // 书籍编号
    unsigned units_sold = 0; //销售量
    double sellingprice = 0.0; // 零售价
    double saleprice = 0.0; // 实售价
    double discount = 0.0;
};
#endif