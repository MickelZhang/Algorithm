/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：base_data_type.cpp
// 文件功能描述：基本数据类型
// 创建者：MickelZhang
// 时间：2020/12/14
// 修改人：MickelZhang
// 时间：2020/12/22
// 修改说明：详细描述：数据类型，变量类型，变量作用域，修饰符类型
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <limits>
#include "base_data_type.h"

using namespace std;  // 命名空间

typedef int renameint;  //起别名


// 在主函数所在文件中使用的需要添加 extern 有相关测试代码
extern int countnum;
void write_extern(void)
{
	std::cout << "countnum is " << countnum << std::endl;
}



/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：基本的数据类型,函数命名为单词首字母大写，驼峰变量命名方式
// 作者：MickelZhang
// 日期：2020/12/14
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
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

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：常量类型有哪些
// 作者：MickelZhang
// 日期：2020/12/14
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
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

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：C++中的存储类型
// 作者：MickelZhang
// 日期：2020/12/14
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void Memory()
{
	// C++中的存储类
	// auto  声明变量时根据初始化表达式自动推断该变量的类型、声明函数时函数返回值的占位符
	auto f = 3.14;  // double
	auto s("hello");  // const char*
	auto z = new auto(9);  // int*
	//auto x1 = 5, x2 = 5.0, x3 = 'r';  // 错误，必须是初始化为同一类型

	// register  (用到的几率为0，因为不涉及嵌入式和其他开发，基本用不到)register 存储类用于定义存储在寄存器中而不是 RAM 中的局部变量。
	// 这意味着变量的最大尺寸等于寄存器的大小（通常是一个词），且不能对它应用一元的 '&' 运算符（因为它没有内存位置）
	// 寄存器只用于需要快速访问的变量，比如计数器。还应注意的是，定义 'register' 
	// 并不意味着变量将被存储在寄存器中，它意味着变量可能存储在寄存器中，这取决于硬件和实现的限制。
	// static  存储类指示编译器在程序的生命周期内保持局部变量的存在，而不需要在每次它进入和离开作用域时进行创建和销毁。
	// 因此，使用 static 修饰局部变量可以在函数调用之间保持局部变量的值。
	// static 修饰符也可以应用于全局变量。当 static 修饰全局变量时，会使变量的作用域限制在声明它的文件内。
	// 在 C++ 中，当 static 用在类数据成员上时，会导致仅有一个该成员的副本被类的所有对象共享。
	// extern
	// mutable
	// thread_local

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

*/
