/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：about_exception.cpp
// 文件功能描述：异常处理
// 创建者：MickelZhang
// 时间：2020/12/22
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <stdExcept>
#include "about_exception.h"
using namespace std;
double Division(int a, int b);

/*
异常是程序在执行期间产生的问题。C++ 异常是指在程序运行时发生的特殊情况，比如尝试除以零的操作。

异常提供了一种转移程序控制权的方式。C++ 异常处理涉及到三个关键字：try、catch、throw。

throw: 当问题出现时，程序会抛出一个异常。这是通过使用 throw 关键字来完成的。
catch: 在您想要处理问题的地方，通过异常处理程序捕获异常。catch 关键字用于捕获异常。
try: try 块中的代码标识将被激活的特定异常。它后面通常跟着一个或多个 catch 块。
如果有一个块抛出一个异常，捕获异常的方法会使用 try 和 catch 关键字。
如果 try 块在不同的情境下会抛出不同的异常，这个时候可以尝试罗列多个 catch 语句，用于捕获不同类型的异常。
catch 块跟在 try 块后面，用于捕获异常。您可以指定想要捕捉的异常类型，这是由 catch 关键字后的括号内的异常声明决定的。
try 块中放置可能抛出异常的代码，try 块中的代码被称为保护代码。使用 try/catch 语句的语法如下所示：
    try
    {
       // 保护代码
    }catch( ExceptionName e1 )
    {
       // catch 块
    }catch( ExceptionName e2 )
    {
       // catch 块
    }catch( ExceptionName eN )
    {
       // catch 块
    }
c++标准异常：
std::exception	该异常是所有标准 C++ 异常的父类。
std::bad_alloc	该异常可以通过 new 抛出。
std::bad_cast	该异常可以通过 dynamic_cast 抛出。
std::bad_exception	这在处理 C++ 程序中无法预期的异常时非常有用。
std::bad_typeid	该异常可以通过 typeid 抛出。
std::logic_error	理论上可以通过读取代码来检测到的异常。
std::domain_error	当使用了一个无效的数学域时，会抛出该异常。
std::invalid_argument	当使用了无效的参数时，会抛出该异常。
std::length_error	当创建了太长的 std::string 时，会抛出该异常。
std::out_of_range	该异常可以通过方法抛出，例如 std::vector 和 std::bitset<>::operator[]()。
std::runtime_error	理论上不可以通过读取代码来检测到的异常。
std::overflow_error	当发生数学上溢时，会抛出该异常。
std::range_error	当尝试存储超出范围的值时，会抛出该异常。
std::underflow_error	当发生数学下溢时，会抛出该异常。

定义自己的异常类：
  https://blog.csdn.net/misayaaaaa/article/details/90108912
  https://cloud.tencent.com/developer/ask/95267
  https://www.cnblogs.com/narjaja/p/10905516.html
*/

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试除法异常处理，throw
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForDivision()
{
  int a = 5;
  int b = 9;
  Division(a, b);
}

double Division(int a, int b)
{
   if(b == 0)
   {
      throw "Division by zero condition!";
   }
   return (a/b);
}


/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：抛出异常并捕获
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：由于我们抛出了一个类型为 const char* 的异常，因此，当捕获该异常时，我们必须在 catch 块中使用 const char*。
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForExceptionOfDivision()
{
   int x = 50;
   int y = 0;
   double z = 0;
 
   try {
     z = Division(x, y);
     cout << z << endl;
   }catch (const char* msg) {
     cerr << msg << endl;
   }
}

/*-----------------------------------------------------------------
// 功能描述：编写属于自己的异常类
// 用法：
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/12
// 记录：
// 修改人：
// 记录：参考链接：https://blog.csdn.net/misayaaaaa/article/details/90108912
//                https://blog.csdn.net/abc_123_linbin/article/details/52893685
//                https://www.cnblogs.com/laizhenghong2012/p/11782299.html
// 版本：
-----------------------------------------------------------------*/
class myException :public exception
{
public:
	myException(char* c)
	{
		m_p = c;
	}
	//what()函数返回错误信息
	virtual char* what()
	{
		cout << "异常类型为 myException: "<< m_p << endl;
		return m_p;
	}
private:
	char *m_p;
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试自己编写的异常类
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForMyException()
{
	try
	{
		throw myException("出错啦！");
	}
	catch (myException& e)
	{
		e.what();
	}
	catch (bad_alloc& e)
	{
		e.what();
	}
	catch (...)
	{
		cout << "Unknown Error" << endl;
	}
}

