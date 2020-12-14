/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：base_data_type.cpp
// 文件功能描述：
// 创建者：MickelZhang
// 时间：2020/12/14
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <limits>
#include "base_data_type.h"

using namespace std;  // 命名空间

typedef int renameint;  //起别名

// 基本的数据类型,函数命名为单词首字母大写，驼峰变量命名方式
void BaseDataType()
{
	// 查看数据类型大小 2020/12/14
	cout << "type: \t\t" << "************size**************" << endl;
	cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
	cout << "\t最大值：" << (numeric_limits<bool>::max)();
	cout << "\t\t最小值：" << (numeric_limits<bool>::min)() << endl;
	cout << "char: \t\t" << "所占字节数：" << sizeof(char);
	cout << "\t最大值：" << (numeric_limits<char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<char>::min)() << endl;
	cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
	cout << "\t最大值：" << (numeric_limits<signed char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<signed char>::min)() << endl;
	cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
	cout << "\t最大值：" << (numeric_limits<unsigned char>::max)();
	cout << "\t\t最小值：" << (numeric_limits<unsigned char>::min)() << endl;
	cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
	cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
	cout << "\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;
	cout << "short: \t\t" << "所占字节数：" << sizeof(short);
	cout << "\t最大值：" << (numeric_limits<short>::max)();
	cout << "\t\t最小值：" << (numeric_limits<short>::min)() << endl;
	cout << "int: \t\t" << "所占字节数：" << sizeof(int);
	cout << "\t最大值：" << (numeric_limits<int>::max)();
	cout << "\t最小值：" << (numeric_limits<int>::min)() << endl;
	cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
	cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned>::min)() << endl;
	cout << "long: \t\t" << "所占字节数：" << sizeof(long);
	cout << "\t最大值：" << (numeric_limits<long>::max)();
	cout << "\t最小值：" << (numeric_limits<long>::min)() << endl;
	cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
	cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
	cout << "\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;
	cout << "double: \t" << "所占字节数：" << sizeof(double);
	cout << "\t最大值：" << (numeric_limits<double>::max)();
	cout << "\t最小值：" << (numeric_limits<double>::min)() << endl;
	cout << "long double: \t" << "所占字节数：" << sizeof(long double);
	cout << "\t最大值：" << (numeric_limits<long double>::max)();
	cout << "\t最小值：" << (numeric_limits<long double>::min)() << endl;
	cout << "float: \t\t" << "所占字节数：" << sizeof(float);
	cout << "\t最大值：" << (numeric_limits<float>::max)();
	cout << "\t最小值：" << (numeric_limits<float>::min)() << endl;
	cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
	cout << "\t最大值：" << (numeric_limits<size_t>::max)();
	cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;
	cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
	// << "\t最大值：" << (numeric_limits<string>::max)() << "\t最小值：" << (numeric_limits<string>::min)() << endl;  
	cout << "type: \t\t" << "************size**************" << endl;

	// typedef使用
	renameint value = 9;
	cout << "typedef" << "起别名:" << value << endl;

	// 枚举数据类型,用到的几率不大
	enum color {red, green, blue};
	enum letter_set { a, d, F, s, T };
	enum year_set { y2000, y2001, y2002, y2003, y2004, y2005 };

	// 变量的作用域
	// 在函数或者是一个代码块内部声明的变量是局部变量
	// 在函数参数定义中声明的变量被称为形式参数
	// 在所有函数外部声明的变量称为全局变量

}

void Constant()
{
	// C++常量：整数常量，浮点常量，布尔常量，字符常量，字符串常量
	// 212         // 合法的
	// 215u        // 合法的
	// 0xFeeL      // 合法的
	// 078         // 非法的：8 不是八进制的数字
	// 032UU       // 非法的：不能重复后缀
	// 85         // 十进制
	// 0213       // 八进制 
	// 0x4b       // 十六进制 
	// 30         // 整数 
	// 30u        // 无符号整数 
	// 30l        // 长整数 
	// 30ul       // 无符号长整数
	// 浮点常量
	// 3.14159       // 合法的 
	// 314159E-5L    // 合法的 
	// 510E          // 非法的：不完整的指数
	// 210f          // 非法的：没有小数或指数
	// .e55          // 非法的：缺少整数或分数
	// bool常量
	// true 值代表真。
	// false 值代表假。
	// 字符常量 （用处不大，课选择性pass）
	// 字符串常量 (在双引号中)
	// "hello,dear"
	
	// 如何定义常量
	// #define
	// const
}

void MemoryClass()
{

}

/*
2020/12/14
C++的四大特性： 封装，抽象，继承，多态
C++11 第三个C++标准  2011年
基本语法：
对象
类
方法
即时变量
C++关键字有哪些
三字符组（用不到）
重点************
基本的数据类型
bool
char    unsigned char      signed char
int    short int            long int    unsigned int    signed int
float
double   long double
void
whar_t (用不到)
枚举数据类型 
指针
结构体
引用
数组
类
extern 作用
常量的定义方法，常量的命名规范等
C++中的修饰符  signed   unsigned  long  short

C++中的类型限定符 
const（整个运行期间不能被修改） 
volatile 修饰符 volatile 告诉编译器不需要优化volatile声明的变量，
		 让程序可以直接从内存中读取变量。对于一般的变量编译器会对变量进行优化，
		 将内存中的变量值放在寄存器中以加快读写效率。
restrict 由 restrict 修饰的指针是唯一一种访问它所指向的对象的方式。
		 只有C99 增加了新的类型限定符 restrict。

C++中的存储类
auto  声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符

register
static
extern
mutable
thread_local
*/