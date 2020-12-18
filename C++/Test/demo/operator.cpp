/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：operator.cpp
// 文件功能描述：菜鸟教程运算符，循环，判断
// 创建者：MickelZhang
// 时间：2020/12/15
// 修改人：MickelZhang
// 时间：2020/12/16
// 修改说明：添加一些使用案例，code和说明
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include "operator.h"
using namespace std;
//运算符
/*
算数运算符  +  -  *  /  %  ++  -- 
	++x,x++  使用前缀形式和后缀形式有点不同，前缀形式的话，采用进行加或者减，然后再进行表达式的操作
关系运算符  ==  !=   >   <   >=   <=
逻辑运算符  &&   ||   ! 
位运算符   &  |  ^异或 ` <<   >>
赋值运算符 =   +=  -=  *=    /=  %=  <<=   >>=   &=  ^=   |=    
杂项运算符  
	sizeof 返回变量的大小 sizeof(cahr)  是一个关键字，
	它是编译时候用于判断变量或者数据类型的字节大小
	condition ? X:Y 条件运算符 和if..else效果一样 var = (y < 10) ? 30 : 40;  小于10则结果是30，否则是40
	逗号运算符 使用逗号将几个表达式放在一起 
		int i, j;
		j = 10;
		i = (j++, j+100, 999+j); //j++此时j在运算完成之后变成11,最后999+11 = 1010
		cout<<i;
	点和箭头  用于引用类，结构体和共用体的成员
		struct Employee {
		  char first_name[16];
		  int  age;
		} emp;
		strcpy(emp.first_name,"zara") // 赋值
		strcpy(p_emp->first_name, "zara");  //如果 p_emp 是一个指针，指向类型为 Employee 的对象，则要把值 "zara" 赋给对象 emp 的 first_name 成员
		访问结构的成员时使用点运算符，而通过指针访问结构的成员时，则使用箭头运算符。
	cast强制转换运算符 属于一元运算符，优先级与其他一元运算符相同
		 double a = 21.343545;
		 c = int(a);
	&指针运算符: 
		取地址运算符&，一元运算符，返回操作数的内存地址
		间接寻址运算符* 一元运算符，返回操作是所指定的地址的变量的值
		   int  var;
		   int  *ptr;
		   int  val;

		   var = 3000;

		   // 获取 var 的地址
		   ptr = &var;

		   // 获取 ptr 的值
		   val = *ptr;
		   cout << "Value of var :" << var << endl;
		   cout << "Value of ptr :" << ptr << endl;
		   cout << "Value of val :" << val << endl;

了解运算符的优先级别 (用到时候再查看)
*/


/*
循环有哪些：
while：使用方法：
	int a = 10;
	while(a<20)
	{
		cout<<a;
		a++
	}
for：
//第一种使用：
	for( int a = 10; a < 20; a = a + 1 )
	{
	cout << "a 的值：" << a << endl;
	}
// 第二种使用：
	int my_array[5] = {1, 2, 3, 4, 5};
	// 每个数组元素乘于 2
	for (int &x : my_array)
	{
	    x *= 2;
	    cout << x << endl;  
	}
	// auto 类型也是 C++11 新标准中的，用来自动获取变量的类型
	for (auto &x : my_array) {
	    x *= 2;
	    cout << x << endl;  
	}

do ...while：
	int a = 10;
	// do 循环执行
	do
	{
	cout << "a 的值：" << a << endl;
	a = a + 1;
	}while( a < 20 );

嵌套循环
for嵌套：
	for ( init; condition; increment )
	{
	   for ( init; condition; increment )
	   {
	      statement(s);
	   }
	   statement(s); // 可以放置更多的语句
	}
while嵌套：
	while(condition)
	{
	   while(condition)
	   {
	      statement(s);
	   }
	   statement(s); // 可以放置更多的语句
	}
do..while嵌套：
	do
	{
	   statement(s); // 可以放置更多的语句
	   do
	   {
	      statement(s);
	   }while( condition );

	}while( condition );

循环控制语句：
break 终止循环
	1.当 break 语句出现在一个循环内时，循环会立即终止，
		且程序流将继续执行紧接着循环的下一条语句。
	2.它可用于终止 switch 语句中的一个 case。
	int a = 10;
	// do 循环执行
	do
	{
		cout << "a 的值：" << a << endl;
		a = a + 1;
		if( a > 15)
		{
			// 终止循环
			break;
		}
	}while( a < 20 );

continute:
会跳过当前循环中的代码，强迫开始下一次循环
	int a = 10;
	// do 循环执行
	do
	{
	if( a == 15)
	{
	  // 跳过迭代
	  a = a + 1;
	  continue;
	}
	cout << "a 的值：" << a << endl;
	a = a + 1;
	}while( a < 20 );
goto 不建议使用，对程序不好
*/

/*
判断语句：
if
if...else：
	一个 if 语句后可跟一个可选的 else if...else 语句，这可用于测试多种条件。
	当使用 if...else if...else 语句时，以下几点需要注意：
		一个 if 后可跟零个或一个 else，else 必须在所有 else if 之后。
		一个 if 后可跟零个或多个 else if，else if 必须在 else 之前。
		一旦某个 else if 匹配成功，其他的 else if 或 else 将不会被测试。
嵌套if
switch：
	一个 switch 语句允许测试一个变量等于多个值时的情况。每个值称为一个 case，
	且被测试的变量会对每个 switch case 进行检查。
嵌套switch：
	switch 语句中的 expression 必须是一个整型或枚举类型，或者是一个 class 类型，
	其中 class 有一个单一的转换函数将其转换为整型或枚举类型。
	在一个 switch 中可以有任意数量的 case 语句。
	每个 case 后跟一个要比较的值和一个冒号。
	case 的 constant-expression 必须与 switch 中的变量具有相同的数据类型，
	且必须是一个常量或字面量。
	当被测试的变量等于 case 中的常量时，case 后跟的语句将被执行，
	直到遇到 break 语句为止。
	当遇到 break 语句时，switch 终止，控制流将跳转到 switch 语句后的下一行。
	不是每一个 case 都需要包含 break。如果 case 语句不包含 break，
	控制流将会 继续 后续的 case，直到遇到 break 为止。
	一个 switch 语句可以有一个可选的 default case，出现在 switch 的结尾。
	default case 可用于在上面所有 case 都不为真时执行一个任务。
	default case 中的 break 语句不是必需的。

	char grade = 'D';
	switch(grade)
	{
	case 'A' :
		cout << "很棒！" << endl; 
		break;
	case 'B' :
		cout << "做得好" << endl;
		break;
	case 'D' :
		cout << "您通过了" << endl;
		break;
	case 'F' :
		cout << "最好再试一下" << endl;
		break;
	default :
		cout << "无效的成绩" << endl;
	}
	cout << "您的成绩是 " << grade << endl;
 
*/
/*-----------------------------------------------------------------
// 输入： 
// 输出：
// 功能描述：测试自增或者自减
// 作者：MickelZhang
// 日期：2020/12/16
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForSelfIncrease()
{
	int a = 21;
	int c;
		// a 的值在赋值之前不会自增
	c = a++;   
	cout << "Line 1 - Value of a++ is :" << c << endl ;

	// 表达式计算之后，a 的值增加 1
	cout << "Line 2 - Value of a is :" << a << endl ;

	// a 的值在赋值之前自增
	c = ++a;  
	cout << "Line 3 - Value of ++a is  :" << c << endl ;
}


