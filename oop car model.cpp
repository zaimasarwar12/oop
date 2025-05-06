#include<iostream>
using namespace std;
class car{
	public:
		string model;
		string color;
		int speed;
		int price;
		void input(){
			cout<<"enter model:";
			cin>>model;
			cout<<"enter color:";
			cin>>color;
			cout<<"enter speed:";
			cin>>speed;
			cout<<"enter price:";
			cin>>price;
		}
};
int main(){
	car c1;
	c1.input();
	return 0;
}
