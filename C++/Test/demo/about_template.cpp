/*----------------------------------------------------------------
// Copyright (C) MickelZhang
// License:MIT
// 文件名：about_template.cpp
// 文件功能描述：模板，命名空间，预处理器（内容较少添加进来）
// 创建者：MickelZhang
// 时间：2020/12/22
// 修改人：
// 时间：
// 修改说明：
// 软件版本：VS2015
//----------------------------------------------------------------*/
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>
#include "about_template.h"
using namespace std;

/*
命名空间：
假设这样一种情况，当一个班上有两个名叫 Zara 的学生时，为了明确区分它们，我们在使用名字之外，
不得不使用一些额外的信息，比如他们的家庭住址，或者他们父母的名字等等。
同样的情况也出现在 C++ 应用程序中。例如，您可能会写一个名为 xyz() 的函数，
在另一个可用的库中也存在一个相同的函数 xyz()。这样，编译器就无法判断您所使用的是哪一个 xyz() 函数。
因此，引入了命名空间这个概念，专门用于解决上面的问题，
它可作为附加信息来区分不同库中相同名称的函数、类、变量等。使用了命名空间即定义了上下文。本质上，命名空间就是定义了一个范围。
我们举一个计算机系统中的例子，一个文件夹(目录)中可以包含多个文件夹，每个文件夹中不能有相同的文件名，但不同文件夹中的文件可以重名。

命名空间的定义使用关键字 namespace，后跟命名空间的名称，如下所示：
  namespace namespace_name {
     // 代码声明
  }
您可以使用 using namespace 指令，这样在使用命名空间时就可以不用在前面加上命名空间的名称。
这个指令会告诉编译器，后续的代码将使用指定的命名空间中的名称。 如：using namespace first_space;

不连续的命名空间：
命名空间可以定义在几个不同的部分中，因此命名空间是由几个单独定义的部分组成的。
一个命名空间的各个组成部分可以分散在多个文件中。
所以，如果命名空间中的某个组成部分需要请求定义在另一个文件中的名称，则仍然需要声明该名称。
下面的命名空间定义可以是定义一个新的命名空间，也可以是为已有的命名空间增加新的元素：

嵌套的命名空间：
  // 第一个命名空间
  namespace first_space{
     void func(){
        cout << "Inside first_space" << endl;
     }
     // 第二个命名空间
     namespace second_space{
        void func(){
           cout << "Inside second_space" << endl;
        }
     }
  }
  using namespace first_space::second_space; //using的使用

C++预处理器：
    预处理器是一些指令，指示编译器在实际编译之前所需完成的预处理。
  所有的预处理器指令都是以井号（#）开头，只有空格字符可以出现在预处理指令之前。预处理指令不是 C++ 语句，所以它们不会以分号（;）结尾。
  我们已经看到，之前所有的实例中都有 #include 指令。这个宏用于把头文件包含到源文件中。
  C++ 还支持很多预处理指令，比如 #include、#define、#if、#else、#line 等，让我们一起看看这些重要指令。
  #define 预处理指令用于创建符号常量。该符号常量通常称为宏，指令的一般形式是：#define PI 3.14159
  参数宏：
    #define MIN(a,b) (a<b ? a : b)
  条件编译：参考相关的.h文件的书写
  预定义宏：
  __LINE__	这会在程序编译时包含当前行号。
  __FILE__	这会在程序编译时包含当前文件名。
  __DATE__	这会包含一个形式为 month/day/year 的字符串，它表示把源文件转换为目标代码的日期。
  __TIME__	这会包含一个形式为 hour:minute:second 的字符串，它表示程序被编译的时间。
  
c++中模板：
  模板是泛型编程的基础，泛型编程即以一种独立于任何特定类型的方式编写代码。
  模板是创建泛型类或函数的蓝图或公式。库容器，比如迭代器和算法，都是泛型编程的例子，它们都使用了模板的概念。
  每个容器都有一个单一的定义，比如 向量，我们可以定义许多不同类型的向量，比如 vector <int> 或 vector <string>。
  您可以使用模板来定义函数和类，接下来让我们一起来看看如何使用。
template <typename type> ret-type func-name(parameter list)
{
   // 函数的主体
}

在这里，type 是函数所使用的数据类型的占位符名称。这个名称可以在函数定义中使用。
模板函数：

模板类：
  
  
  
*/

// 第一个命名空间
namespace first_space{
   void func(){
      cout << "Inside first_space" << endl;
   }
}
// 第二个命名空间
namespace second_space{
   void func(){
      cout << "Inside second_space" << endl;
   }
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：命名空间的测试代码
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForNamespace()
{
   // 调用第一个命名空间中的函数
   first_space::func();
   
   // 调用第二个命名空间中的函数
   second_space::func(); 
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：模板函数的测试代码
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
template <typename T>
inline T const& Max (T const& a, T const& b) 
{ 
    return a < b ? b:a; 
} 

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：模板函数的测试代码
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
void TestForTemplateFunction()
{
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl; 
 
    double f1 = 13.5; 
    double f2 = 20.7; 
    cout << "Max(f1, f2): " << Max(f1, f2) << endl; 
 
    string s1 = "Hello"; 
    string s2 = "World"; 
    cout << "Max(s1, s2): "<<Max(s1, s2) << endl; 
}

/*-----------------------------------------------------------------
// 功能描述：模板类
// 用法：
// 日期：2020/12/18
// 修改人：MickelZhang 2020/12/18
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
template <class T>
class Stack { 
  private: 
    vector<T> elems;     // 元素 
 
  public: 
    void push(T const&);  // 入栈
    void pop();               // 出栈
    T top() const;            // 返回栈顶元素
    bool empty() const{       // 如果为空则返回真。
        return elems.empty(); 
    } 
}; 
 
template <class T>
void Stack<T>::push (T const& elem) 
{ 
    // 追加传入元素的副本
    elems.push_back(elem);    
} 
 
template <class T>
void Stack<T>::pop () 
{ 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::pop(): empty stack"); 
    }
    // 删除最后一个元素
    elems.pop_back();         
} 
 
template <class T>
T Stack<T>::top () const 
{ 
    if (elems.empty()) { 
        throw out_of_range("Stack<>::top(): empty stack"); 
    }
    // 返回最后一个元素的副本 
    return elems.back();      
} 

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：模板类的测试代码
// 作者：MickelZhang
// 日期：2020/12/22
// 修改人：
// 记录：
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
int TestForTemplateClass()
{
      try { 
        Stack<int>         intStack;  // int 类型的栈 
        Stack<string> stringStack;    // string 类型的栈 
 
        // 操作 int 类型的栈 
        intStack.push(7); 
        cout << intStack.top() <<endl; 
 
        // 操作 string 类型的栈 
        stringStack.push("hello"); 
        cout << stringStack.top() << std::endl; 
        stringStack.pop(); 
        stringStack.pop(); 
    } 
    catch (exception const& ex) { 
        cerr << "Exception: " << ex.what() <<endl; 
        return -1;
    } 
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：使用函数模板实现两个数的交换
// 作者：MickelZhang
// 日期：2020/12/23
// 修改人：
// 记录：参考链接：https://zhuanlan.zhihu.com/p/101898043
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
template <class T>
void Swap(T &x,T &y)
{
    T tmp = x;
    x = y;
    y = tmp;
}

// 函数模板的调用
void TestForTemplateOfSwap()
{
  int n = 1,m = 2;
  Swap(n,m);
  cout<<n<<m<<endl;
  double i = 3.4, j = 9.6;
  Swap(i,j);
  cout<<i<<j<<endl;
}

/*-----------------------------------------------------------------
// 输入：两个不同类型的数找最大值
// 输出：
// 功能描述：
// 作者：MickelZhang
// 日期：2020/12/23
// 修改人：
// 记录：参考链接：https://zhuanlan.zhihu.com/p/101898043
//                https://blog.csdn.net/hellokandy/article/details/70173366
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
template <class T, class T2>
T MyMax(T a, T2 b) 
{
  if (a > b)
  {
    cout<<"最大值："<<a<<endl;
  }
  else
  {
    cout<<"最大值："<<b<<endl;
  }
    return 0;
}

// 输入两个不同的参数类型的模板函数调用

// 函数模板的调用
void TestForTemplateMyMax()
{
  MyMax(3, 5.6);
}

/*-----------------------------------------------------------------
// 输入：
// 输出：
// 功能描述：Pair类模板例子
// 作者：MickelZhang
// 日期：2020/12/23
// 修改人：
// 记录：参考链接：https://zhuanlan.zhihu.com/p/101898043
//                https://blog.csdn.net/hellokandy/article/details/70173366
// 修改人：
// 记录：
// 版本：
-----------------------------------------------------------------*/
template <class T1, class T2>
class Pair
{
public:
    Pair(T1 k, T2 v):m_key(k),m_value(v) {};
    bool operator < (const Pair<T1,T2> & p) const;
private:
    T1 m_key;
    T2 m_value;
};

// 类模板里成员函数的写法
template <class T1, class T2>
bool Pair<T1,T2>::operator < (const Pair<T1,T2> &p) const
{
    return m_value < p.m_value;
}

// 类模板的测试代码
void TestForPair()
{
    Pair<string,int> Astudent("Jay",20); 
    Pair<string,int> Bstudent("Tom",21);
  cout << (Astudent < Bstudent) << endl;
}

