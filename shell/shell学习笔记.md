#### 1.什么是shell

#### 2.几种流行的shell

#### 3.shell程序设计

##### 3.1 shell的基本语法

##### 3.2 shell程序的变量和参数

* 自定义变量，变量名称可以使用字母，数字，下划线，不能以数字开头，不能使用特殊符号

  ```shell
  a=10 #定义变量
  unset a #取消变量
  echo ${a}RMB #加{}分隔变量名与常量
  ```

* 环境变量 USER UID HOME SHELL PATH PS1 PS2

```shell
echo $USER #当前用户名
echo $UID #查看当前用户ID号
```

* 位置变量 $1 $2 $3......
* 预定义变量 $0 $$ $? $# $*

```shell
#!/bin/bash
echo $1 脚本后跟的第1个参数
echo $2 脚本后跟的第2个参数
echo $3 脚本后跟的第3个参数
echo $$ 当前脚本的进程号
echo $# 位置变量的个数
echo $* 所有位置变量
echo $? 上一条指令的结果, 0是正常, 非0是异常
echo $0 执行脚本的名字
echo $! 最后一条放入后台的程序进程号,可以用sleep 1000 &测试

env  查看所有环境变量
set  查看所有变量
```

""界定范围

''界定范围，可以屏蔽特殊符号

```shell
touch a b #创建2个文件
touch "a b" #创建1个文件
touch 'x y' #创建1个文件
a=10
echo "$a" #显示变量的值
echo '$a'#显示$a,$是特殊符号，功能被屏蔽
```

`` 获取指令的结果

```shell
a=data#定义变量a，内容是date
a=`date`#定义变量a,内容是date命令执行的结果

stty -echo#关闭回显
stty echo#恢复回显
```



#### 4.shell程序设计的流程控制

##### 4.1 test语句

##### 4.2 if条件语句

##### 4.3 for循环

##### 4.4 while和until循环

##### 4.5 case条件选择

##### 4.6 无条件控制语句break和continue

##### 4.7 函数定义

#### 5.命令分组

#### 6.用trap命令捕捉信号

#### 7.运行shell的方法

#### 8.shell程序的调试

#### 9.bash的内部命令