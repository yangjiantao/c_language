#include<iostream>

int main(){
    unsigned u = 10, u2 = 42;

    // todo C++取模运算？
    
    // output: 32，运算结果为正数，不变
    std::cout << u2 - u << std::endl;
    // output：4294967264 ，运算结果为-32,所以表示无符号时自动加上了模
    std::cout << u - u2 << std::endl;

    int i = 10, i2 = 42;
    std::cout << i2 - i << std::endl;
    std::cout << i - i2 << std::endl;

    // output:0，Tips：表达式中不要混合使用有无符号类型。
    std::cout << i - u << std::endl;
    std::cout << u - i << std::endl;

}