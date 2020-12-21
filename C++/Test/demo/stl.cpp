/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：about_class2.cpp
// 文件功能描述：类的继承，重载
// 创建者：MickelZhang
// 时间：2020/12/21
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/

/*
容器（Containers）	容器是用来管理某一类对象的集合。C++ 提供了各种不同类型的容器，比如 deque、list、vector、map 等。
算法（Algorithms）	算法作用于容器。它们提供了执行各种操作的方式，包括对容器内容执行初始化、排序、搜索和转换等操作。
迭代器（iterators）	迭代器用于遍历对象集合的元素。这些集合可能是容器，也可能是容器的子集。
*/

#include <iostream>
#include <vector>
using namespace std;

//它与数组十分相似，唯一不同的是，向量在需要扩展大小的时候，
//会自动处理它自己的存储需求

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试vector
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForVector()
{
	// 创建一个向量存储 int
	vector<int> vec;
	int i;

	// 显示 vec 的原始大小
	cout << "vector size = " << vec.size() << endl;

	// 推入 5 个值到向量中
	for (i = 0; i < 5; i++) {
		vec.push_back(i);
	}

	// 显示 vec 扩展后的大小
	cout << "extended vector size = " << vec.size() << endl;

	// 访问向量中的 5 个值
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// 使用迭代器 iterator 访问值
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}
}