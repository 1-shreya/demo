#include<iostream>
using namespace std;

int main()
{
   string n="abba dabba chabba";
   string *p;
   p=&n;
   cout<<"from pointer:"<<*p;//referce to complete string
   
}