/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：pointer.cpp
// 文件功能描述：
// 创建者：MickelZhang
// 时间：2020/12/16
// 修改人：MickelZhang
// 时间：2020/12/17
// 修改说明：B站中郝斌的C语言指针教程一定要看一下
// 修改人：MickelZhang
// 时间：2020/12/22
// 修改说明：详细说明：指针，引用
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <ctime>
#include <windows.h>　
#include "pointer.h"
using namespace std;
/*
什么是指针：
          指针是一个变量，其值为另一个变量的地址，即内存地址，就像其他变量或常量一样，您必须在使用指针存储其他变量地址之前，对其进行声明
	  int* p; // p表示变量的名字，p的数据类型是：int*表示类型， 表示p变量存放的是int类型变量的地址，int*数据类型：存放int变量地址的类型
	  int i = 3;
	  p = i; // 错误：类型不一致
	  p = &i; // 正确，p存放的是地址，&i 表示取地址，两个都是地址，正确
	  p = 55; // 错误：55也是整形
	  p = &i; // p保存了i的地址，则说明p指向了i
	  	     p不是i,i也不是p。修改p不影响i,修改i不影响p
		     如果一个指针变量指向了一个普通变量，*P 完全等于i  即*p,i 都是3 
		     *p  和 i 是完全等价的，两个可以相互替换，所有出现i的地方可以换成*p  所有出现*p的地方可以换成i
		     p指向i,*p就是i,是一个东西。
		     *p 就是以p的内容为地址（p的内容 = i地址）的变量 等价于 i就是以p的内容为地址的变量  等价于 i就是以i地址为地址的变量
		     *p 和（&）取地址就是逆运算
	  指针就是地址，地址就是指针
	  地址就是内存单元的编号,等价起来指针就是内存中的编号
	  指针变量就是存放地址的变量，变量又分很多类型
	  指针和指针变量是不同的概念，但是要主要，通常我们叙述时会把指针变量简称为指针，实际上不一样。
	  	  
          int    *ip;    //一个整型的指针 
          double *dp;    // 一个 double 型的指针 
          float  *fp;    // 一个浮点型的指针 
          char   *ch;    // 一个字符型的指针 
          所有指针的值的实际数据类型，不管是整型、浮点型、字符型，还是其他的数据类型，都是一样的，都是一个代表内存地址的长的十六进制数。
          不同数据类型的指针之间唯一的不同是，指针所指向的变量或常量的数据类型不同。
	  
指针的好处（重要性）：
	表示一些复杂的数据结构
	快速的传递数据
	是函数返回一个以上的值
	直接访问硬件
	能够方便的处理字符串
	是理解面向对象语言中引用的基础

	  
Null指针：在变量声明的时候，如果没有确切的地址可以赋值，为指针变量赋一个 NULL 值是一个良好的编程习惯。赋为 NULL 值的指针被称为空指针。
          int  *ptr = NULL;
          cout << "ptr 的值是 " << ptr ; // 零 在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。
          然而，内存地址 0 有特别重要的意义，它表明该指针不指向一个可访问的内存位置。
          但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。
	  
指针的算术运算：指针是一个用数值表示的地址。因此，您可以对指针执行算术运算。可以对指针进行四种算术运算：++、--、+、-。
               递减一个指针
               递增一个指针
               指针的比较
	       
指针VS数组：指针和数组是密切相关的。事实上，指针和数组在很多情况下是可以互换的。
           例如，一个指向数组开头的指针，可以通过使用指针的算术运算或数组索引来访问数组
	   注：数组名为常量指针，不可更改   // modified by Seventeen
	   
指针数组：

指向指针的指针：是一种多级间接寻址的形式，或者说是一个指针链。通常，一个指针包含一个变量的地址。
               当我们定义一个指向指针的指针时，第一个指针包含了第二个指针的地址，第二个指针指向包含实际值的位置。
	       
传递指针给函数：C++ 允许您传递指针给函数，只需要简单地声明函数参数为指针类型即可。

从函数返回指针：见operator.cpp

*/


/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：测试指针的一些代码
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForPoint()
{
   int  var = 20;   // 实际变量的声明
   int  *ip;        // 指针变量的声明
   ip = &var;       // 在指针变量中存储 var 的地址
 
   cout << "Value of var variable: ";
   cout << var << endl;

   cout << "*ip : "; // *p 也等于20
   cout << *ip << endl;	
	
 
   // 输出在指针变量中存储的地址
   cout << "Address stored in ip variable: ";
   cout << ip << endl;
 
   // 访问指针中地址的值
   cout << "Value of *ip variable: ";
   cout << *ip << endl;

// 修改ip不会改变var,同样的修改var也不会改变ip,但是var改了之后*P也会跟着变化
	var = 35;
	cout<<"var:"<<var<<" ip:"<<ip<<" *ip:"<<*ip<<endl;

// 同样的修改*ip,会影响var的数值
	*ip = 34;
	
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：递增指针对于数组的测试，通过一个指向数组头部的指针来实现对数组的访问
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForPointerIncreaseToArray()
{   
	const int MAX = 3;
	int  var[MAX] = {10, 100, 200};
	int  *ptr;
 
   // 指针中的数组地址
	ptr = var; //ptr指向了数组的开头
	for (int i = 0; i < MAX; i++)
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
 
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
 
		// 移动到下一个位置
		ptr++;
	}

}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：指针的比较，可以通过比较运算符进行地址大小的比较
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForPointerCompare()
{
	const int MAX = 3;
	int  var[MAX] = {10, 100, 200};
	int  *ptr;
 
	// 指针中第一个元素的地址
	ptr = var;
	int i = 0;
	while ( ptr <= &var[MAX - 1] )
	{
		cout << "Address of var[" << i << "] = ";
		cout << ptr << endl;
 
		cout << "Value of var[" << i << "] = ";
		cout << *ptr << endl;
 
		// 指向上一个位置
		ptr++;
		i++;
	}
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：指针VS数组 ：指针和数组并不是完全的互换
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForPointerVsArray()
{
	const int MAX = 3;
	int  var[MAX] = {10, 100, 200};
	int  *ptr;
 
	// 指针中的数组地址
	ptr = var;
	for (int i = 0; i < MAX; i++)
	{
		cout << "var[" << i << "]的内存地址为 ";
		cout << ptr << endl;
 
		cout << "var[" << i << "] 的值为 ";
		cout << *ptr << endl;
      
		*var = i; //正确
		// var++; // 错误的。把指针运算符 * 应用到 var 上是完全可以的，但修改 var 的值是非法的，这是因为 var 是一个指向数组开头的常量，不能作为左值。
				// 由于一个数组名对应一个指针常量，只要不改变数组的值,仍然可以用指针形式的表达式
		*(var + 2) = 500; //正确
		// 移动到下一个位置
		ptr++;
	}

}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：指针数组
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForPointerArray1()
{
	const int MAX = 3;
	int  var[MAX] = {10, 100, 200};
	int *ptr[MAX];
 	
// ptr[]  数组中存放的是var数组中每个值的地址
	for (int i = 0; i < MAX; i++)
	{
		ptr[i] = &var[i]; // 赋值为整数的地址
	}
// *ptr[1] 代表了 var[1]
	for (int i = 0; i < MAX; i++)
	{
		cout << "Value of var[" << i << "] = ";
		cout << *ptr[i] << endl;
	}
}

// 一个指向字符的指针数组来存储一个字符串列表
void TestForPointerArray2()
{
	const int MAX = 4;
	const char *names[MAX] = {
					"Zara Ali",
					"Hina Ali",
					"Nuha Ali",
					"Sara Ali",
	};
    cout <<"*names:"<<*names<<endl;
    cout <<"names:"<<names<<endl;
 
	for (int i = 0; i < MAX; i++)
	{
		cout << "Value of names[" << i << "] = ";
		cout << names[i] << endl;
		cout << "Value of *names[" << i << "] = ";
		cout << *names[i] << endl; //*****没弄明白
        
	}
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：指向指针的指针  多级指针 指向问题
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForPointToPointerOfPointer()
{
	int  var;
	int  *ptr;
	int  **pptr;
 
	var = 3000;
 
	// 获取 var 的地址  ptr指向了var,所*ptr等于var
	ptr = &var;
 
	// 使用运算符 & 获取 ptr 的地址  *pptr 等于 ptr  然后**pptr 等于 *ptr  等于 var
	pptr = &ptr;
 
	// 使用 pptr 获取值
	//cout << "var 值为 :" << var << endl;
	//cout << "*ptr 值为:" << *ptr << endl;
	//cout << "**pptr 值为:" << **pptr << endl;
	//cout << "*pptr 值为：" << *pptr << endl;
	//cout << "ptr 值为：" << ptr << endl;
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：传递指针给函数
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForGetSeconds(unsigned long *par)
{
	/*
	调用方式
	unsigned long sec;
	getSeconds( &sec );
	// 输出实际值
	cout << "Number of seconds :" << sec << endl;
	*/
	
	// 获取当前的秒数
	*par = time(NULL);
	return;
}

/*-----------------------------------------------------------------
// 输入：数组作为参数传递，直接使用数组名做参数即可，因为数组名就代表了指向该数组的指针，第二个参数为数组长度
// 输出：
// 功能描述：传递指针给函数
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：Seventeen
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
double GetAverage(int *arr, int size)
{
	/*
	调用方式：
	// 带有 5 个元素的整型数组
	int balance[5] = {1000, 2, 3, 17, 50};
	double avg;
	// 传递一个指向数组的指针作为参数
	avg = getAverage( balance, 5 ) ;
	// 输出返回值
	cout << "Average value is: " << avg << endl;
	*/
	int i, sum = 0;
	double avg;

	for (i = 0; i < size; ++i)
	{
		sum += arr[i];
	}

	avg = double(sum) / size;

	return avg;
}

/*
引用：引用变量是一个别名，也就是说，它是某个已存在变量的另一个名字。
	  一旦把引用初始化为某个变量，就可以使用该引用名称或变量名称来指向变量。
引用和指针的区别：
	不存在空引用。引用必须连接到一块合法的内存。
	一旦引用被初始化为一个对象，就不能被指向到另一个对象。指针可以在任何时候指向到另一个对象。
	引用必须在创建时被初始化。指针可以在任何时间被初始化。
	参考链接：https://blog.csdn.net/weikangc/article/details/49762929 // modified by Seventeen
	
创建引用：
	int i = 17;
	int& r = i; //"r 是一个初始化为 i 的整型引用"
	double& s = d; //"s 是一个初始化为 d 的 double 型引用"

	// 声明简单的变量
	int    i;
	double d;

	// 声明引用变量
	int&    r = i;
	double& s = d;

	i = 5;
	cout << "Value of i : " << i << endl;
	cout << "Value of i reference : " << r  << endl;

	d = 11.7;
	cout << "Value of d : " << d << endl;
	cout << "Value of d reference : " << s  << endl;

把引用作为参数：参考function.cpp,传引用
把引用作为函数返回值：
	通过使用引用来替代指针，会使 C++ 程序更容易阅读和维护。
	C++ 函数可以返回一个引用，方式与返回一个指针类似。
	当函数返回一个引用时，则返回一个指向返回值的隐式指针。
	这样，函数就可以放在赋值语句的左边
*/



/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：将引用作为函数的返回值，传引用改变了数组中值
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
// 传引用这个函数命名比较难改，暂时不涉及规范问题
double vals[] = { 10.1, 12.6, 33.1, 24.1, 50.0 };
double& setValues(int i)
{
	return vals[i];   // 返回第 i 个元素的引用
}

void TestForSetValues()
{
	//cout << "改变前的值" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "vals[" << i << "] = ";
	//	cout << vals[i] << endl;
	//}

	//setValues(1) = 20.23; // 改变第 2 个元素
	//setValues(3) = 70.8;  // 改变第 4 个元素

	//cout << "改变后的值" << endl;
	//for (int i = 0; i < 5; i++)
	//{
	//	cout << "vals[" << i << "] = ";
	//	cout << vals[i] << endl;
	//}
}

/*
日期和时间：关于这一栏，暂时不用学习，后面学习下怎样检测程序运行时间的代码

*/
/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：程序运行时间测试
// 作者：MickelZhang
// 日期：2020/12/23
// 修改人：
// 记录：参考链接：https://www.cnblogs.com/didiaodidiao/p/9194702.html
//                https://zhuanlan.zhihu.com/p/54665895
//                https://www.cnblogs.com/jerry-fuyi/p/12723287.html
//                https://blog.csdn.net/luoweifu/article/details/51470998  vs2015程序效率分析相关
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForTime()
{
clock_t start = clock();
	// codes
clock_t end = clock();
double elapsed_secs = static_cast<double>(end - start) / (CLOCKS_PER_SEC);
cout <<elapsed_secs <<"s"<<endl;
}

//void TestForTime2()
//{
//    LARGE_INTEGER t1,t2,tc;
//    QueryPerformanceFrequency(&tc);
//    QueryPerformanceCounter(&t1);
//    //codes
//    QueryPerformanceCounter(&t2);
//    time=(double)(t2.QuadPart-t1.QuadPart)/(double)tc.QuadPart; 
//    cout<<"time = "<<time<<endl;  //输出时间（单位：ｓ）
//}
/*
输入和输出：
C++ 的 I/O 发生在流中，流是字节序列。
如果字节流是从设备（如键盘、磁盘驱动器、网络连接等）流向内存，这叫做输入操作。
如果字节流是从内存流向设备（如显示屏、打印机、磁盘驱动器、网络连接等），这叫做输出操作。
cerr和clog 通过一个具体的例子进行学习
关于日志：学会使用日志框架 log4cplus,log4cpp,spdlog,G3log,Pantheios.....
参考链接：https://www.cnblogs.com/junqiang-217/p/4347432.html
         https://thinkerou.com/post/easyloggingpp/
	 https://gitbook.cn/gitchat/column/5b2c5b29072e851cae4299f3/topic/5b2c633e072e851cae42a1aa
	 
log4cplus配置:  https://blog.csdn.net/xiake001/article/details/79899115
https://www.codetd.com/article/2759894
https://blog.csdn.net/shaozhenged/article/details/51866186
*/
