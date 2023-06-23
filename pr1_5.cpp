#include<iostream>
using namespace std;

class teacher
{
	
	public:
		
	int id=101;
	char school_name[100]="gajera";
	char name[100]="rita patel";
	char subject[100]="english";
	
	private:
		
	int salary=10000;
};																																																																																												
int main()
{																																																																																																																																																																																																																																																																					
	teacher t1;
																																																																																																																																																																																																																																																																			
	cout<<"enter id:"<<t1.id<<endl;
	cout<<"enter school :"<<t1.school_name<<endl;
	cout<<"enetr teacher name :"<<t1.name<<endl;
	cout<<"eneter subjrct:"<<t1.subject;
	
	return 0;
	
}
