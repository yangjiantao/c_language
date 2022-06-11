# VScode C++ Macos 配置
参考视频：https://www.bilibili.com/video/BV1U741157Rd

## 扩展插件
### C/C++
### chinese
### code Runner
**C++11 运行环境配置**

- 点击Code Runner的齿轮⚙（或者直接右键它），打开扩展设置
找到 Code-runner:Executor Map 点击 在settings.json中编辑

- 在 "code-runner.executorMap"中 找到 "cpp" 的这一行
- 在 $fileNameWithoutExt 的后面添加 -std=c++11 保存后即可食用
  参考：https://zhuanlan.zhihu.com/p/269244754

### C/C++ extension pack

### C/C++ Clang Command Adapter
**静态检查报错**
>这个是因为C/C++ Clang Command Adapter 这个插件没有配置默认支持C++11.
解决办法：点击Code->Preferences->Settings， 搜索Clang: Cflags、Clang: Cxxflags增加C++11 的配置即可

Clang: Cflags增加Item： "-std=c11"
Clang: Cxxflags增加Item： "-std=c++11"

## vsCode 快捷键

- 运行代码 `ctrl + option +N`
- 

## 文件结束符
- windows `ctrl + Z`
- unix/macos `ctrl + D`

## 学习资料
- C++书籍推荐:https://zhuanlan.zhihu.com/p/88654750
- 