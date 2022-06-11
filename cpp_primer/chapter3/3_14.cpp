
#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vInt; 
    int i; // 记录用户的输入值
    char cont = 'y';  // 与用户交互，决定是否继续输入

    while (cin >> i)
    {
        vInt.push_back(i); // 向vector对象中添加元素
        cout << "continue ?" << endl;
        cin >> cont;
        if(cont != 'y' && cont != 'Y'){
            break;
        }
    }

    for(auto mem: vInt){
        cout << mem << " ddd ";
    }
    cout << endl;
    return 0;
}