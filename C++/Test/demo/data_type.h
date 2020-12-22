/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：data_type.h
// 文件功能描述：编写.h 头文件，提供给其他文件调用
// 创建者：MickelZhang
// 时间：2020/12/17
// 修改人：MickelZhang
// 时间：2020/12/22
// 修改说明：添加动态内存分配的相关测试代码
// 软件版本：VS2015
//----------------------------------------------------------------*/

#ifndef DATA_TYPE_H
#define  DATA_TYPE_H

void RandomNumber();
void TestForArray();
void ThePointerOfArray();
double GetAverage(int arr[], int size);
int* GetRandom();
void TestForStruct();
void printBook(struct Books book);
void TestForStructOfFunction();
void printBook2(struct Books *book);
void TestForStructPointer();
void TestForMemory();
void TestForTwoDimensionalArray();
void TestForThreeDimensionalArray();
void TestForMemoryOfObject();

#endif
