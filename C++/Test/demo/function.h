/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：function.h
// 文件功能描述：编写.h 头文件，提供给其他文件调用
// 创建者：MickelZhang
// 时间：2020/12/17
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/

#ifndef FUNCTION_H
#define  FUNCTION_H

//函数传值
void SwapOfValue(int x, int y);
//函数传指针
void SwapOfPointer(int *x, int *y);
//函数传引用
void SwapOfQuote(int &x, int &y);

#endif
