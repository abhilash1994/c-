#include<iostream>

using namespace std;

class item
{
	private:
	
	int number;
	float cost;
	
	public:
	
	item(void);
	void putdata(int a, float b); //prototype declaration,

	//function defined inside the class
	void getdata(void){
		cout<<"number :"<<  number << "\n";
		cout<< "cost : "<< cost << "\n";
	}
};
// ...............Member function defination .........
void item::putdata(int a, float b){
	number=a;
	cost=b;
}

item :: item(void){
	number=0;
	cost=0;
}
// Main Program

int main(int argc, char const *argv[])
{
	/* code */

	item x;

	// x.putdata(100,299.95);
	x.getdata();

	return 0;
}