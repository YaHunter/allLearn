# C++的编译流程

## 单文件编译
src 中 test1
* 1. src 内的main.cpp
* 2. 在Linux下使用g++ main.cpp -o a.out
* 3. 运行 ./a.out
* 4. 查看汇编   objdump -D a.out | less
less：使反汇编文件能够上下滚动
a.out：为生成的可执行文件
* 5. printf 实现使调用put 实现，put位于libc.so.6
* 6. ldd a.out 可以查看连接的库

## 多文件编译
src 中 test2
* 1. g++ hello.cpp main.cpp -o a.out
* 2. 可以先编译成.o文件
```
    g++ -c hello.cpp -o hello.o
    g++ -c main.cpp -o main.o
```
* 3. 然后编译成可执行文件 g++ hello.o main.o -o a.out
* 4. 每次修改都需要重新生成.o文件
  
## Makefile
src/test3
* 1. main.o:main.cpp  表示main.o与main.cpp 有关，如果main.cpp 发生变化，则再次输入make时会重新编译main.o，没有关联则不会识别到main.cpp的变化。
* 2. 当没有检测到发生变化时，make指令不做任何处理
  
## cmake
* 1. cmake_minimum_required 指定cmake版本
* 2. project 指定工程名
* 3. add_executable  第一个文件是输出， 后面是源文件
* 4. cmake -B build    build为项目的构建目录
* 5. 进入build，会看到相应的Makefile等文件，make执行等


