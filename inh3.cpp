


#include<iostream>
using namespace std;

class FE{
	private:
		int rollno;
		char name[20];
		protected:
			int total1;
	
		public:
			void set1()
			{
				cout<<"\nEnter roll number:";
				cin>>rollno;
					cout<<"\nEnter name:";
				cin>>name;
				cout<<"marks";
				cin>>total1;
			}
			void show1()
			{
				cout<<"\nDetails are:"<<rollno<<"\n"<<name;
			}
			
	};
	
	class SE:public FE{
	private:
		int total,t;
		float per;
		public:
			void set2()

		{
				cout<<"\nenter total";
				cin>>total;
				t=total+total1;
				per=t/6;
				
		}	
		
		void show2()
			{
				cout<<"\nDetails are:"<<total<<"\n"<<per;	
			}	
	};
	main()
	{
		SE clg;
		clg.set1();
		clg.show1();
		clg.set2();
		clg.show2();
		
	}