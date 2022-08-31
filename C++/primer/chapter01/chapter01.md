### 1.1
返回值为0表示成功，为其他值表示失败

### 1.2
iostream库
* cin   输入  
* cout  输出
* cerr  标准错误
* clog  
TODO：查看库代码

#include <iostream> 
忽略当前目录，从库目录进行查找
#include "a.h"
优先从当前目录查找

### 错误信息
* main 忘记（）
testError1.cpp:3:9: error: cannot declare ‘::main’ to be a global variable
testError1.cpp:3:9: note: to match this ‘(’
testError1.cpp:6:2: error: expected unqualified-id before ‘return’

* 句尾分号写成冒号
testError2.cpp:5:46: error: found ‘:’ in nested-name-specifier, expected ‘::’

* cout 内字符串没加“”
testError2.cpp:6:15: error: ‘Update’ was not declared in this scope

* return 后忘记分号
testError2.cpp:8:2: error: expected unqualified-id before ‘return’

* 给定的数据赋值不同的数据格式
testError3.cpp:7:6: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]

* 变量名打错，且新名为定义
testError4.cpp:5:14: error: ‘v’ was not declared in this scope

* 命名空间没写
testError4.cpp:6:2: error: ‘cout’ was not declared in this scope

#### debug tips
* 按顺序修bug
* 每修一个后就编译

#### 输入文件终止符
Linux： Ctrl + D
Win： Ctrl + Z 再 Enter

 
