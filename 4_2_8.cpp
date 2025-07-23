//静态变量
#include<iostream>
using namespace std;

class Person
{
   public:
   static int m_A;

   private:
   static int m_B;
};

int Person::m_A=100;
int Person::m_B=200;

void test01()
{
   Person p;
   cout<<p.m_A<<endl;

   Person p2;
   p2.m_A=200;

   cout<<p.m_A<<endl;
}

void test02()
{
   //?通过对象访问
   Person p;
   cout<<p.m_A<<endl;
   //通过类名访问
   cout<<Person::m_A<<endl;
   //cout<<Person::m_B<<endl;无法访问私有的静态变量
}

int main()
{
   //test01();
   test02();
   system("pause");
   return 0;
}