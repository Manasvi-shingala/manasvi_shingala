#include<iostream>
using namespace std;

class house
{
	public:
		
	int room=2;
	int kichen=1;
	int window=3;
	int tv=1;
	int sofa=3;
};
																																																																																																																																																																																																																																																																					
class room																								
{		
	public:																															
	int bed;																																		
	int window;
	int table;
	int photo_frame;
	int AC;
			
};

int main()																																				
{
	house h1;
	room r1;
	
	cout<<"house datail:"<<endl;
	
	h1.room;
    h1.kichen;
	h1.window;
    h1.tv;
    h1.sofa;
	
	cout<<"A room is:"<<endl;
	cin>>h1.room;
	
	cout<<"A kichen is:"<<endl;
	cin>>h1.kichen;
	
	cout<<"A window is:"<<endl;
	cin>>h1.window;
	
	cout<<"A t.v is:"<<endl;
	cin>>h1.tv;
	
	cout<<"A sofa is:"<<endl;
	cin>>h1.sofa;
	
	cout<<"******************"<<endl;
	
	cout<<"room detail:"<<endl;
	
	r1.bed;																																		
	r1.window;
	r1.table;
	r1.photo_frame;
	r1.AC;	
	
	cout<<"a bed is:"<<endl;
	cin>>r1.bed;
	
	cout<<"a window is:"<<endl;
	cin>>r1.window;
	
	cout<<"a  table:"<<endl;
	cin>>r1.table;
	
	cout<<"a photo_frame is:"<<endl;
	cin>>r1.photo_frame;
	
	cout<<"a A.C is:"<<endl;
	cin>>r1.AC;
																																																																																																																																																																																																																																																																																																																																																																																																																																																																																																									
}
