/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：about_class2.cpp
// 文件功能描述：类的继承，重载
// 创建者：MickelZhang
// 时间：2020/12/20
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include "about_class2.h"
using namespace std;

/*
继承：面向对象程序设计中最重要的一个概念是继承。
		继承允许我们依据另一个类来定义一个类，这使得创建和维护一个应用程序变得更容易。
		这样做，也达到了重用代码功能和提高执行效率的效果。
		当创建一个类时，您不需要重新编写新的数据成员和成员函数，
		只需指定新建的类继承了一个已有的类的成员即可。这个已有的类称为基类，
		新建的类称为派生类。
		继承代表了 is a 关系。
		例如，哺乳动物是动物，狗是哺乳动物，因此，狗是动物，等等。‘’

		// 基类
		class Dog : public Animal {...};


		//派生类
		class Animal {
		// eat() 函数
		// sleep() 函数
		};

		class Dog : public Animal {
		// bark() 函数
		};
		一个类可以派生自多个类，这意味着，它可以从多个基类继承数据和函数。
		定义一个派生类，我们使用一个类派生列表来指定基类。
		类派生列表以一个或多个基类命名
		class derived-class: access-specifier base-class
		其中，访问修饰符 access-specifier 是 public、protected 
		或 private 其中的一个，base-class 是之前定义过的某个类的名称。
		如果未使用访问修饰符 access-specifier，则默认为 private
派生类：派生类可以访问基类中所有的非私有成员。
		因此基类成员如果不想被派生类的成员函数访问，
		则应在基类中声明为 private。
		我们可以根据访问权限总结出不同的访问类型，如下所示：
		访问	   public	protected	private
		同一个类	 yes	yes	        yes
		派生类	     yes	yes	        no
		外部的类	 yes	no	        no
		一个派生类继承了所有的基类方法，但下列情况除外：
			基类的构造函数、析构函数和拷贝构造函数。
			基类的重载运算符。
			基类的友元函数。
		当一个类派生自基类，该基类可以被继承为 public、protected 或 private 几种类型。
		继承类型是通过上面讲解的访问修饰符 access-specifier 来指定的。
		我们几乎不使用 protected 或 private 继承，通常使用 public 继承。
		当使用不同类型的继承时，遵循以下几个规则：
			公有继承（public）：当一个类派生自公有基类时，基类的公有成员也是派生类的公有成员，
								基类的保护成员也是派生类的保护成员，
								基类的私有成员不能直接被派生类访问，
								但是可以通过调用基类的公有和保护成员来访问。
			保护继承（protected）：当一个类派生自保护基类时，
								   基类的公有和保护成员将成为派生类的保护成员。
			私有继承（private）：当一个类派生自私有基类时，
								 基类的公有和保护成员将成为派生类的私有成员。
多继承：
重载：C++ 允许在同一作用域中的某个函数和运算符指定多个定义，
	分别称为函数重载和运算符重载。
	重载声明是指一个与之前已经在该作用域内声明过的函数或方法具有相同名称的声明，
	但是它们的参数列表和定义（实现）不相同。
	当您调用一个重载函数或重载运算符时，
	编译器通过把您所使用的参数类型与定义中的参数类型进行比较，
	决定选用最合适的定义。选择最合适的重载函数或重载运算符的过程，
	称为重载决策。 （说明：重载机制目前还没有找到一个具体使用的场景，暂时不需要花费太多时间去思考）
函数重载：
	在同一个作用域内，可以声明几个功能类似的同名函数，
	但是这些同名函数的形式参数（指参数的个数、类型或者顺序）必须不同。
	您不能仅通过返回类型的不同来重载函数。
运算符重载：
	您可以重定义或重载大部分 C++ 内置的运算符。这样，您就能使用自定义类型的运算符。
	重载的运算符是带有特殊名称的函数，函数名是由关键字 operator 和其后要重载的运算符符号构成的。
	与其他函数一样，重载运算符有一个返回类型和一个参数列表。
	声明加法运算符用于把两个 Box 对象相加，返回最终的 Box 对象。
	大多数的重载运算符可被定义为普通的非成员函数或者被定义为类成员函数。
	如果我们定义上面的函数为类的非成员函数，那么我们需要为每次操作传递两个参数，如下所示：
	Box operator+(const Box&, const Box&);
可重载的运算符：
	双目算术运算符	+ (加)，-(减)，*(乘)，/(除)，% (取模)
	关系运算符	==(等于)，!= (不等于)，< (小于)，> (大于>，<=(小于等于)，>=(大于等于)
	逻辑运算符	||(逻辑或)，&&(逻辑与)，!(逻辑非)
	单目运算符	+ (正)，-(负)，*(指针)，&(取地址)
	自增自减运算符	++(自增)，--(自减)
	位运算符	| (按位或)，& (按位与)，~(按位取反)，^(按位异或),，<< (左移)，>>(右移)
	赋值运算符	=, +=, -=, *=, /= , % = , &=, |=, ^=, <<=, >>=
	空间申请与释放	new, delete, new[ ] , delete[]
	其他运算符	()(函数调用)，->(成员访问)，,(逗号)，[](下标)

不可重载的运算符：
	. 成员访问运算符
	.*, ->* 成员指针访问运算符
	:: 域运算符
	sizeof 长度运算符
	?: 条件运算符
	#  预处理符号
	
*/

/*-----------------------------------------------------------------
// 功能描述：创建一个Shape基类，实现对基类的继承
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/20
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class Shape
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

// 派生类
class Rectangle : public Shape
{
public:
	int getArea()
	{
		return (width * height);
	}
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：Shape 的继承
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForShape()
{
   Rectangle Rect;
 
   Rect.setWidth(5);
   Rect.setHeight(7);
 
   // 输出对象的面积
   cout << "Total area: " << Rect.getArea() << endl;
}

/*-----------------------------------------------------------------
// 功能描述：创建一个Shape，和PaintCost基类
// 用法：（也可以举例添加详细的使用方法，或者尽可能描述清楚）
// 作者：MickelZhang
// 日期：2020/12/20
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
// 基类 Shape
class Shape2
{
public:
	void setWidth(int w)
	{
		width = w;
	}
	void setHeight(int h)
	{
		height = h;
	}
protected:
	int width;
	int height;
};

// 基类 PaintCost
class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

// 派生类
class Rectangle2 : public Shape2, public PaintCost
{
public:
	int getArea()
	{
		return (width * height);
	}
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：实现多继承
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForMultipleInheritance()
{
   Rectangle2 Rect2;
   int area;
 
   Rect2.setWidth(5);
   Rect2.setHeight(7);
 
   area = Rect2.getArea();
   
   // 输出对象的面积
   cout << "Total area: " << Rect2.getArea() << endl;
 
   // 输出总花费
   cout << "Total paint cost: $" << Rect2.getCost(area) << endl;
}


/*-----------------------------------------------------------------
// 功能描述：创建一个printData类，实现函数的重载
// 用法：同名函数被用于输出不同的数据类型
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
class PrintData
{
   public:
      void print(int i) {
        cout << "整数为: " << i << endl;
      }
 
      void print(double  f) {
        cout << "浮点数为: " << f << endl;
      }
 
      void print(char c[]) {
        cout << "字符串为: " << c << endl;
      }
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：对PrintData的测试  函数重载
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForFunctionOverload()
{
   PrintData pd;
 
   // 输出整数
   pd.print(5);
   // 输出浮点数
   pd.print(500.263);
   // 输出字符串
   char c[] = "Hello C++";
   pd.print(c);
}

/*-----------------------------------------------------------------
// 功能描述：运算符重载
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
 
      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }
 
      void setBreadth( double bre )
      {
          breadth = bre;
      }
 
      void setHeight( double hei )
      {
          height = hei;
      }
      // 重载 + 运算符，用于把两个 Box 对象相加 
      // 对象作为参数进行传递，对象的属性使用 this 运算符进行访问
      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length;      // 长度
      double breadth;     // 宽度
      double height;      // 高度
};

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：对Box的测试  运算符重载
// 作者：MickelZhang
// 日期：2020/12/18
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForOperatorOverload()
{
  Box Box1;                // 声明 Box1，类型为 Box
   Box Box2;                // 声明 Box2，类型为 Box
   Box Box3;                // 声明 Box3，类型为 Box
   double volume = 0.0;     // 把体积存储在该变量中
 
   // Box1 详述
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // Box2 详述
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // Box1 的体积
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // Box2 的体积
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
 
   // 把两个对象相加，得到 Box3
   Box3 = Box1 + Box2;
 
   // Box3 的体积
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
}

// TODO(1223256867@qq.com / 18502290727@163.com)
// TODO(MickelZhang)
// TODO 运算符重载的实例暂时先不看，用到的机会不大
