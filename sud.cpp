/*write a program create student class
1.default constructor to stored FE marks
2.parameterized and pass SE and TE total marks
3.create pareameterized constructor and pass BE percentage
*/
#include<iostream>
using namespace std;
class student{
	private:
		int a,b;
		float fe,c;
 	public:
 	student()
	 {
 		fe=8.00;
	 }
	 student(int x,int y)
	 {
	 	a=x;
	 	b=y;
	 }
	student(float x)	
	{
	    c=x;	
	}
	
	void show_fe()
	 {
	 	cout<<"\nFirst year:"<<fe;
	 }
	void show_seandte(){
	 
	 	cout<<"\nsecond year:"<<a;
	 	cout<<"\nthird year:"<<b;
	 }
	 void show_be(){
	 
	 	cout<<"\nFinal year:"<<c;
	 }
};
main()
	{
	student s1;
	s1.show_fe();
	student st2(500,600);
	st2.show_seandte();
	student st3(8.15);
	st3.show_be();
}