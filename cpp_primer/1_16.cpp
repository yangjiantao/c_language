// 从cin读取一组数，输出其和

#include <iostream>

// std::cin 读取数据逻辑/原理
int main(){
    int sum = 0, value = 0;

    std::cout << "please input some nums, press ctrl+z to finish" << std::endl;
    for(; std::cin >> value;){
        sum += value;
    }
    std::cout << "\nsum of the nums :" << sum << std::endl;
    return 0;

}