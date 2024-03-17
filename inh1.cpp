//Inheritance Example


#include <iostream>
using namespace std;
class parent{
	public:
		void show(){
		
		cout<<"\nSuper class ";
	}
	
};

class child:public parent{
		public:
			void show(){
		show();
		cout<<"\nSub class ";
	}
};

main()
{
 //parent obj;
 //obj.show()	;
 child obj1;
 obj1.show1();
 //obj.show();
}
