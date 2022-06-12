#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

// 练习3.23：编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值都变成原来的两倍。
// 输出vector对象的内容，检验程序是否正确。

using namespace std;

int main(){
    vector<int> vInt;
    srand((unsigned) time(NULL)); //生成随机数种子
    for(int i = 0; i< 10; i++){
        // 每次生成一个 1000 以内的随机数
        vInt.push_back(rand() % 1000);
    }

    cout << "随机生成的10个数是：" << endl;
    // 利用常量迭代器读取原始数据
    for(auto it = vInt.cbegin(); it != vInt.cend(); it ++){
        cout << *it << " "; 
    }
    cout << endl;
    cout << "翻倍后的10个数字是："<<endl;

    // 利用非常量迭代器修改vInt内容
    for(auto it = vInt.begin(); it != vInt.end(); it++){
        *it = *it * 2; 
        cout << *it << " "; 
    }
    cout << endl;

    return 0;

}