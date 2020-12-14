/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：main.cpp
// 文件功能描述：
// 创建者：MickelZhang
// 时间：2020/12/11
// 修改人：MickelZhang
// 时间：2020/12/14
// 修改说明：添加基本数据类型相关的代码
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <limits>
#include "base_data_type.h"

using namespace std;  // 命名空间
int g;  // 全局变量，整个生命周期都是有效的，全局变量会默认给定初始化的值

// 常量定义的两种方法,常量一般为全部大写的方式
#define LENGHT 10
#define WIDTH 5
const int AREA = 50;


// 主函数
int main()
{
	cout << "hello,world\n";
	cout << "hello,Mickel" << endl;  //endl和\n结果一样 2020/12/14
	BaseDataType();  // 数据类型所占空间大小

	int a;  // 局部变量，定义后系统不会初始化，需要人为初始化数值

	return 0;
}
