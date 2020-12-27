/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：main.cpp
// 文件功能描述：
// 创建者：MickelZhang
// 时间：2020/12/11
// 修改人：MickelZhang
// 时间：2020/12/14
// 修改说明：添加基本数据类型相关的代码，测试static
// 修改人：MickelZhang
// 时间：2020/12/15
// 修改说明：对2020/12/14进行相关修改
// 修改人：MickelZhang
// 时间：2020/12/17
// 修改说明：实现对相关cpp文件的调用
// 修改人：MickelZhang, SeventeenChen
// 时间：2020/12/22
// 修改说明：文件功能描述：测试相关代码，C++中的常量定义
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <limits>
#include <string>
#include "base_data_type.h"
#include "function.h"
#include "data_type.h"
#include "operator.h"
#include "pointer.h"
#include "about_class.h"
#include "about_class2.h"
#include "about_class3.h"
#include "about_class4.h"
#include "stl.h"
#include "about_exception.h"
#include "about_template.h"

using namespace std;  // 命名空间

// 测试static相关的功能
void TestForStatic(void);

int g_num;  // 全局变量，整个生命周期都是有效的，全局变量会默认给定初始化的值
// 常量定义的两种方法,常量一般为全部大写的方式
#define LENGHT 10
#define WIDTH 5
const int AREA = 50;
static int g_count_number = 10; /* 全局变量 */

// test for extern
int countnum;
extern void write_extern();

// 主函数
int main()
{
	//cout << "hello,world\n";
	std::cout << "hello,Mickel" << std::endl;  //endl和\n结果一样 2020/12/14
	//BaseDataType();  // 数据类型所占空间大小
	//string str = "hello";
	//cout << str << endl;
	//int a = 0;
	//cout << "a:"<<a << endl;
	//cout << "g:" << g << endl; // 默认赋值为0

	//int a;  // 局部变量，定义后系统不会初始化，需要人为初始化数值，否则报错


	// 测试static的代码段
	//while (count_number--)
	//{
	//	TestForStatic();
	//}

	//test for extern
	//countnum= 5;
	//write_extern();

	//函数传参的几种形式，from function.cpp
	//int x, y;
	//x = 5;
	//y = 9;
	//SwapOfValue(x, y);
	//SwapOfPointer(&x, &y);
	//SwapOfQuote(x, y);
	//cout << x << y << endl;

	//数据类型 from data_type.cpp
	//RandomNumber();
	//TestForArray();
	//ThePointerOfArray();
	//int balance[5] = { 1000, 2, 3, 17, 50 };
	//double avg;
	//GetAverage(balance, 5);
	//cout << GetAverage(balance, 5) << endl;
	//int *p;
	//p = GetRandom();
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << "*(p + " << i << ") : ";
	//	cout << *(p + i) << endl;
	//}
	//TestForStruct();
	//TestForStructOfFunction();
	//TestForStructPointer();
	//TestForMemory();
	//TestForTwoDimensionalArray();
	//TestForThreeDimensionalArray();
	//TestForMemoryOfObject();

	//操作符 from operator.cpp
	//TestForSelfIncrease();


	//指针相关 from pointer.cpp
	//TestForPoint();
	//TestForPointerIncreaseToArray();
	//TestForPointerCompare();
	//TestForPointerVsArray();
	//TestForPointerArray1();
	//TestForPointerArray2();
	//TestForPointToPointerOfPointer();
	//unsigned long sec;
	//TestForGetSeconds(&sec);
	//int balance[5] = { 1000, 2, 3, 17, 50 };
	//double avg;
	//GetAverage(balance, 5);
	//TestForSetValues();

	//类相关 
	//TestForBoxClass();
	//TestForLineClass();
	//TestForLine2Class();
	//TestForThePointerOfThis();
	//TestForPointerOfPointClass();
	//TestForBox4();
	//TestForBox5();
	//TestForShape();
	//TestForMultipleInheritance();
	//TestForFunctionOverload();
	//TestForOperatorOverload();
	//TestForShapePolymorphism();
	//TestForDataAbstract();
	//TestForInterFace();

	//STL相关
	//TestForVector();

	//异常处理
	//TestForDivision(); 
	//TestForExceptionOfDivision();
	TestForMyException();

	//模板，命名空间
	//TestForNamespace();
	//int flag = TestForTemplateClass();
	//TestForTemplateFunction();
	//TestForTemplateOfSwap();
	//TestForTemplateMyMax();
	//TestForPair();



	return 0;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试static的相关功能
// 作者：MickelZhang
// 日期：2020/12/14
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForStatic()
{
	static int i = 5; // 局部静态变量
	i++;
	std::cout << "变量 i 为 " << i;
	std::cout << " , 变量 count 为 " << g_count_number << std::endl;
}
