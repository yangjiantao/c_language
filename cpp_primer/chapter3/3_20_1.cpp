
#include <iostream>
#include <vector>

using namespace std;

// 读入一组整数并把它们存入一个vector对象，将每对相邻整数的和输出出来。
int main(){
    vector<int> vInt;
    int iVal;
    cout << "请输入一组数字：" << endl; // ctrl + d 结束

    while (cin >> iVal)
    {
        vInt.push_back(iVal);
    }
    if(vInt.size() == 0){
        cout << "没有任何元素" << endl;
        return -1;
    }

    cout << "相邻两项的和依次是："<< endl;
    // 利用decltype 推断 i 的类型
    for(decltype(vInt.size()) i = 0; i < vInt.size() - 1; i += 2){
        //求相邻两项的和
        cout << vInt[i] + vInt[i+1] << " ";
        // 每行输出5个数字
        if((i + 2) % 10 ==0){
            cout << endl;
        }
    }

    // 如果是奇数，单独处理最有一个元素
    if(vInt.size() % 2 != 0){
        cout << vInt[vInt.size() - 1];
    }
    return 0;
}