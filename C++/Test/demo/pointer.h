#pragma once
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

void TestForPoint();
void TestForPointerIncreaseToArray();
void TestForPointerCompare();
void TestForPointerVsArray();
void TestForPointerArray1();
void TestForPointerArray2();
void TestForPointToPointerOfPointer();
void TestForGetSeconds(unsigned long *par);
double GetAverage(int *arr, int size);
double& setValues(int i);
void TestForSetValues();

#endif