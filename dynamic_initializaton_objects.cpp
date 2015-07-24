#include<iostream>
#include<cstdlib>
#include<cmath>

using namespace std;

class Fixed_deposit
{
	long int P_amount;	//Principal amount
	int Years;			//Period of investment
	float Rate;			//Interest rate
	float R_value;	//Return value of amount 			
	public:
	Fixed_deposit(){ }
	Fixed_deposit(long int p,int y,float r=0.12);
	Fixed_deposit(long int p,int y,int r);
	void display(void);
	// ~Fixed_deposit();
};

Fixed_deposit :: Fixed_deposit(long int p, int y, float r){
	P_amount = p;
	Years = y;
	Rate = r;
	R_value = P_amount;

	for (int i = 1; i <= y; i++)
	{
		R_value = R_value*(1.0+r);
	}
}

Fixed_deposit :: Fixed_deposit(long int p, int y, int r){
	P_amount = p;
	Years = y;
	Rate = r;
	R_value = P_amount;

	for (int i = 1; i <= y; i++)
	{
		R_value = R_value*(1.0+float(r)/100);
	}
}

void Fixed_deposit :: display(void){
	cout<< "\n"<<"Principal Amount ="<< P_amount<<"\n"
		<<"Return value ="<< R_value<<endl;
}

int main(int argc, char const *argv[]){
	Fixed_deposit FD1,FD2,FD3;
	long int p;
	int y;
	float r;
	int R;

	cout<<"Enter amount,Period,interest rate(in percent)"<<"\n";
	cin>>p>>y>>R;
	FD1=Fixed_deposit(p,y,R);
	cout<<"\n Deposit 1:";
	FD1.display();

	return 0;
}