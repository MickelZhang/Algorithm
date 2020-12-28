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

//随机数
void RandomNumber();
//数组测试
void TestForArray();
//数组的指针
void ThePointerOfArray();
//求均值
double GetAverage(int arr[], int size);
//结构体
int* GetRandom();
void TestForStruct();
//结构体
void printBook(struct Books book);
//结构体作为函数参数
void TestForStructOfFunction();
void printBook2(struct Books *book);
//结构体指针作为参数
void TestForStructPointer();
//动态内存分配测试
void TestForMemory();
//二维数组动态内存分配
void TestForTwoDimensionalArray();
//三维数组动态内存分配
void TestForThreeDimensionalArray();
//对象的内存分配
void TestForMemoryOfObject();

#endif
