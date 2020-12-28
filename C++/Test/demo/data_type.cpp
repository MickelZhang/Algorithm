/*----------------------------------------------------------------
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
// 修改人：MickelZhang
// 时间：2020/12/22
// 修改说明:动态内存分配中的一些知识点，详细说明：函数，数组，数据结构，动态内存
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

指向数组的指针 可以通过指定不带索引的数组名称来生成一个指向数组中第一个元素的指针。
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
	C++ 不允许返回一个完整的数组作为函数的参数。但是，
	您可以通过指定不带索引的数组名来返回一个指向数组的指针。
	如果您想要从函数返回一个一维数组，您必须声明一个返回指针的函数
	C++ 不支持在函数外返回局部变量的地址，除非定义局部变量为 static 变量。
	
动态内存分配：
了解动态内存在 C++ 中是如何工作的是成为一名合格的 C++ 程序员必不可少的。C++ 程序中的内存分为两个部分：
栈：在函数内部声明的所有变量都将占用栈内存。
堆：这是程序中未使用的内存，在程序运行时可用于动态分配内存。
很多时候，您无法提前预知需要多少内存来存储某个定义变量中的特定信息，所需内存的大小需要在运行时才能确定。
在 C++ 中，您可以使用特殊的运算符为给定类型的变量在运行时分配堆内的内存，这会返回所分配的空间地址。这种运算符即 new 运算符。
如果您不再需要动态分配的内存空间，可以使用 delete 运算符，删除之前由 new 运算符分配的内存。
double* pvalue  = NULL; // 初始化为 null 的指针
pvalue  = new double;   // 为变量请求内存

如果自由存储区已被用完，可能无法成功分配内存。所以建议检查 new 运算符是否返回 NULL 指针，并采取以下适当的操作：
double* pvalue  = NULL;
if( !(pvalue  = new double ))
{
   cout << "Error: out of memory." <<endl;
   exit(1);
 
}
malloc() 函数在 C 语言中就出现了，在 C++ 中仍然存在，但建议尽量不要使用 malloc() 函数。new 与 malloc() 函数相比，
其主要的优点是，new 不只是分配了内存，它还创建了对象。
在任何时候，当您觉得某个已经动态分配内存的变量不再需要使用时，您可以使用 delete 操作符释放它所占用的内存
一维数组：
// 动态分配,数组长度为 m
int *array=new int [m];
//释放内存
delete [] array;
二维数组：
三维数组：

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
	//int  r[10];
 
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
	访问成员：为了访问结构的成员，我们使用成员访问运算符（.）。
	成员访问运算符是结构变量名称和我们要访问的结构成员之间的一个句号。
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



// 该函数以结构体指针作为参数
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

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试动态内存分配中 new  delete
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForMemory()
{
   double* pvalue  = NULL; // 初始化为 null 的指针
   pvalue  = new double;   // 为变量请求内存
 
   *pvalue = 29494.99;     // 在分配的地址存储值
   cout << "Value of pvalue : " << *pvalue << endl;
 
   delete pvalue;         // 释放内存
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试动态内存分配 二维数组
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForTwoDimensionalArray()
{
    int **p;   
    int i,j;   //p[4][8] 
    //开始分配4行8列的二维数据   
    p = new int *[4];
    for(i=0;i<4;i++){
        p[i]=new int [8];
    }
 
    for(i=0; i<4; i++){
        for(j=0; j<8; j++){
            p[i][j] = j*i;
        }
    }   
    //打印数据   
    for(i=0; i<4; i++){
        for(j=0; j<8; j++)     
        {   
            if(j==0) cout<<endl;   
            cout<<p[i][j]<<"\t";   
        }
    }   
    //开始释放申请的堆   
    for(i=0; i<4; i++){
        delete [] p[i];   
    }
    delete [] p;  
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试动态内存分配 三维数组
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForThreeDimensionalArray()
{
    int i,j,k;   // p[2][3][4]
    
    int ***p;
    p = new int **[2]; 
    for(i=0; i<2; i++) 
    { 
        p[i]=new int *[3]; 
        for(j=0; j<3; j++) 
            p[i][j]=new int[4]; 
    }
    
    //输出 p[i][j][k] 三维数据
    for(i=0; i<2; i++)   
    {
        for(j=0; j<3; j++)   
        { 
            for(k=0;k<4;k++)
            { 
                p[i][j][k]=i+j+k;
                cout<<p[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    // 释放内存
    for(i=0; i<2; i++) 
    {
        for(j=0; j<3; j++) 
        {   
            delete [] p[i][j];   
        }   
    }       
    for(i=0; i<2; i++)   
    {       
        delete [] p[i];   
    }   
    delete [] p;  
}

/*-----------------------------------------------------------------
// 功能描述：创建一个Box的类，用来被相关函数调用来实现对象的内存分配
// 用法：
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Box
{
   public:
      Box() { 
         cout << "调用构造函数！" <<endl; 
      }
      ~Box() { 
         cout << "调用析构函数！" <<endl; 
      }
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：对象的内存分配
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForMemoryOfObject()
{
   Box* myBoxArray = new Box[4];
   delete [] myBoxArray; // 删除数组
}

