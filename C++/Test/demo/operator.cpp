/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：operator.cpp
// 文件功能描述：菜鸟教程运算符，循环，判断
// 创建者：MickelZhang
// 时间：2020/12/15
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/

//运算符
/*
算数运算符  +  -  *  /  %  ++  -- 
	++x,x++  使用前缀形式和后缀形式有点不同，前缀形式的话，采用进行加或者减，然后再进行表达式的操作
关系运算符  ==  !=   >   <   >=   <=
逻辑运算符  &&   ||   ! 
位运算符   &  |  ^异或 ` <<   >>
赋值运算符 =   +=  -=  *=    /=  %=  <<=   >>=   &=  ^=   |=    
杂项运算符  
	sizeof 返回变量的大小 sizeof(cahr)  是一个关键字，它是编译时候用于判断变量或者数据类型的字节大小
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
		
		
	*指向一个变量

了解运算符的优先级别
*/


/*
循环有哪些：
while
for
do ...while
嵌套循环

循环控制语句：
break
continute
goto
*/

/*
判断语句：
if
if...else
嵌套if
switch
嵌套switch
*/

void SelfIncreaseForTest()
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
