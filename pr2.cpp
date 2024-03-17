/* write a program  create class which name is city with member city name and temperature
create 2 objects and print city name which temerature is less.
constructure,show temp,comparision function with *this ponter
*/

#include<iostream>
using namespace std;
class city{
	private:
		int temp;
		char name[20];
		public:
			city(int temp,char s[])
			{
				this->temp=temp;
				strcpy(this ->name,s);
			}
			void set1()
			{
				cout<<"\nTemerature and city :"<<temp<<"\n"<<name;
			}
			city com(city &obj)
			{
				if(temp>obj.temp)
				{
				
				return *this;
			}
				else
				return(obj);
			}
};
main()
{
	city c1(30,"Nashik");
city c2(29,"pune");
city temp(0,"\0");
	c1.set1();
	c2.set1();
	
	cout<<"********************************";
	cout<<"\nHighest temperature is:";
	temp=c1.com(c2);
	temp.set1();
	
	
}
