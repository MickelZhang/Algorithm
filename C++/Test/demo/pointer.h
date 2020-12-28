/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：pointer.h
// 文件功能描述：编写.h 头文件，提供给其他文件调用
// 创建者：MickelZhang
// 时间：2020/12/17
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/

#ifndef POINTER_H
#define  POINTER_H

//指针测试
void TestForPoint();
//指针的递增对数组的测试
void TestForPointerIncreaseToArray();
//指针的比较
void TestForPointerCompare();
//指针和数组的比较
void TestForPointerVsArray();
//指针和数组
void TestForPointerArray1();
//指针和数组
void TestForPointerArray2();
//多级指针
void TestForPointToPointerOfPointer();
//函数传指针
void TestForGetSeconds(unsigned long *par);
//函数传数组
double GetAverage(int *arr, int size);
double& setValues(int i);
//应用做为函数的返回值
void TestForSetValues();
//程序运行时间
void TestForTime();

#endif
