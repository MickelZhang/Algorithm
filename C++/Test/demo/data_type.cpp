﻿/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：data_type.cpp
// 文件功能描述：菜鸟教程函数部分
// 创建者：MickelZhang
// 时间：2020/12/15
// 修改人：MickelZhang
// 时间：2020/12/15
// 修改说明:添加一些使用案例和细节
// 修改人：MickelZhang
// 时间：2020/12/16
// 修改说明:添加结构体相关
// 软件版本：VS2015
//----------------------------------------------------------------*/

/*
内置函数的使用头文件为：<cmath>
随机数：rand   srand
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include "data_type.h"

using namespace std;
using std::setw;

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：随机数的使用
// 作者：MickelZhang
// 日期：2020/12/14
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void RandomNumber()
{
	int i, j;
	// 设置种子
	srand((unsigned)time(NULL));

	/* 生成 10 个随机数 */
	for (i = 0; i < 10; i++)
	{
		// 生成实际的随机数
		j = rand();
		cout << "随机数： " << j << endl;
	}
}

/*
数组存储一个固定大小的相同类型的元素的顺序集合
double blance[10]; // 声明一个类型为double类型，包含10个元素的数组
初始化
访问元素
多维数组： int threedim[5][10][4];//三维数组
	二维数组比较常见，行和列
	//int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11}; // 通过索引访问数组

指向指针的数组 可以通过指定不带索引的数组名称来生成一个指向数组中第一个元素的指针。
	数组名是指向数组中第一个元素的常量指针
	double array[50]; // array是一个指向&array[0]的指针，即数组array的第一个元素的地址
	double *p;
	p = array; // 将p复制为array第一个元素的地址
	
传递数组给函数 可以通过指定不带索引的数组名称来给函数传递一个指向数组的指针
	C++ 中您可以通过指定不带索引的数组名来传递一个指向数组的指针。
	C++ 传数组给一个函数，数组类型自动转换为指针类型，因而传的实际是地址。
	如果您想要在函数中传递一个一维数组作为参数，您必须以下面三种方式来声明函数形式参数，这三种声明方式的结果是一样的，
	因为每种方式都会告诉编译器将要接收一个整型指针。同样地，您也可以传递一个多维数组作为形式参数
		方式一：形式参数是一个指针
		方式二：形式参数是一个已定义大小的数组
		方式三：形式参数是一个未定义大小的数组
从函数返回数组：
	C++ 不允许返回一个完整的数组作为函数的参数。但是，您可以通过指定不带索引的数组名来返回一个指向数组的指针。
	如果您想要从函数返回一个一维数组，您必须声明一个返回指针的函数
	C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。
*/

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：数组测试
// 作者：MickelZhang
// 日期：2020/12/15
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForArray()
{
	int n[10]; // n 是一个包含 10 个整数的数组

				// 初始化数组元素          
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100; // 设置元素 i 为 i + 100
	}
	cout << "Element" << setw(13) << "Value" << endl;

	// 输出数组中每个元素的值                     
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：指向数组的指针测试代码，p 是一个指向 double 型的指针，这意味着它可以存储一个 double 类型的变量。
//				  一旦我们有了 p 中的地址，*p 将给出存储在 p 中相应地址的值
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void ThePointerOfArray()
{
	// 带有 5 个元素的双精度浮点型数组
	double runoobAarray[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
	double *p;
 
	p = runoobAarray;
 
	// 输出数组中每个元素的值
	cout << "使用指针的数组值 " << endl; 
	for ( int i = 0; i < 5; i++ )
	{
		cout << "*(p + " << i << ") : ";
		cout << *(p + i) << endl;
	}
 
	cout << "使用 runoobAarray 作为地址的数组值 " << endl;
	for ( int i = 0; i < 5; i++ )
	{
		cout << "*(runoobAarray + " << i << ") : ";
		cout << *(runoobAarray + i) << endl;
	}
}

/*-----------------------------------------------------------------
// 输入：数组，及长度 
// 输出：均值
// 功能描述：输入一个数组，求他的均值 （传递数组给函数）
// 调用方式：可以传递一个指向数组的指针作为参数  
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
double GetAverage(int arr[], int size)
{
	int i, sum = 0;       
	double avg;          
	for (i = 0; i < size; ++i)
	{
	sum += arr[i];
	}
	avg = double(sum) / size;
 
	return avg;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：返回一个数组
// 功能描述：
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
int* GetRandom()
{
	/*
	调用方式：  
	   int *p;
	   p = GetRandom();
	   for ( int i = 0; i < 10; i++ )
	   {
	       cout << "*(p + " << i << ") : ";
	       cout << *(p + i) << endl;
	   }
	*/
	static int  r[10];
 
	// 设置种子
	srand( (unsigned)time( NULL ) );
	for (int i = 0; i < 10; ++i)
	{
	r[i] = rand();
	cout << r[i] << endl;
	}
 
	return r;
}

/*
字符串
C风格: 实际是字符数组  本质数组
char greeting[6] = {'H','E','L','L','O','\n'} //末尾存储了空字符
或者 ：char greeting2 = "hello"
处理字符串的函数
C++风格：string
*/

/*
结构体：
	定义：
	访问成员：为了访问结构的成员，我们使用成员访问运算符（.）。成员访问运算符是结构变量名称和我们要访问的结构成员之间的一个句号。
	结构体作为函数参数:
	指向结构体的指针：

*/

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：结构体测试
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForStruct()
{
	struct Books
	{
		char  title[50];
		char  author[50];
		char  subject[100];
		int   book_id;
	};
	Books Book1;        // 定义结构体类型 Books 的变量 Book1
	Books Book2;        // 定义结构体类型 Books 的变量 Book2

						// Book1 详述
	strcpy(Book1.title, "C++ 教程");
	strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "编程语言");
	Book1.book_id = 12345;

	// Book2 详述
	strcpy(Book2.title, "CSS 教程");
	strcpy(Book2.author, "Runoob");
	strcpy(Book2.subject, "前端技术");
	Book2.book_id = 12346;

	// 输出 Book1 信息
	cout << "第一本书标题 : " << Book1.title << endl;
	cout << "第一本书作者 : " << Book1.author << endl;
	cout << "第一本书类目 : " << Book1.subject << endl;
	cout << "第一本书 ID : " << Book1.book_id << endl;

	// 输出 Book2 信息
	cout << "第二本书标题 : " << Book2.title << endl;
	cout << "第二本书作者 : " << Book2.author << endl;
	cout << "第二本书类目 : " << Book2.subject << endl;
	cout << "第二本书 ID : " << Book2.book_id << endl;
}

// 声明一个结构体Books
struct Books
{
	char  title[50];
	char  author[50];
	char  subject[100];
	int   book_id;
};

// 参数为结构体的函数
void printBook(struct Books book)
{
	cout << "书标题 : " << book.title << endl;
	cout << "书作者 : " << book.author << endl;
	cout << "书类目 : " << book.subject << endl;
	cout << "书 ID : " << book.book_id << endl;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：结构体做为函数参数
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForStructOfFunction()
{
	Books Book1;        // 定义结构体类型 Books 的变量 Book1
	Books Book2;        // 定义结构体类型 Books 的变量 Book2
						// Book1 详述
	strcpy(Book1.title, "C++ 教程");
	strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "编程语言");
	Book1.book_id = 12345;

	// Book2 详述
	strcpy(Book2.title, "CSS 教程");
	strcpy(Book2.author, "Runoob");
	strcpy(Book2.subject, "前端技术");
	Book2.book_id = 12346;

	// 输出 Book1 信息
	printBook(Book1);

	// 输出 Book2 信息
	printBook(Book2);

}



// 该函数以结构指针作为参数
void printBook2(struct Books *book)
{
	cout << "书标题  : " << book->title << endl;
	cout << "书作者 : " << book->author << endl;
	cout << "书类目 : " << book->subject << endl;
	cout << "书 ID : " << book->book_id << endl;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：函数使用结构体指针作为参数
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForStructPointer()
{
	Books Book1;        // 定义结构体类型 Books 的变量 Book1
	Books Book2;        // 定义结构体类型 Books 的变量 Book2

						// Book1 详述
	strcpy(Book1.title, "C++ 教程");
	strcpy(Book1.author, "Runoob");
	strcpy(Book1.subject, "编程语言");
	Book1.book_id = 12345;

	// Book2 详述
	strcpy(Book2.title, "CSS 教程");
	strcpy(Book2.author, "Runoob");
	strcpy(Book2.subject, "前端技术");
	Book2.book_id = 12346;

	// 通过传 Book1 的地址来输出 Book1 信息
	printBook2(&Book1);

	// 通过传 Book2 的地址来输出 Book2 信息
	printBook2(&Book2);
}