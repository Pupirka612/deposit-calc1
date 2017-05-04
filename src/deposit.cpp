#include "deposit.h"

int FinalAmount(int &d, int ye){
	double s=ye;
	s=s/100*90;
	return s;
}

int AmountWhisPercent1(int &d, int ye){
	int s=ye;
	double p;
	if (d==1)p = 0.02;
	if (d==2)p = 0.03;
	s=s+s*p;
	return s;
}

int AmountWhisPercent2(int &d, int ye){
	int s=ye;
	cout << d<< endl;
	double p;
	if (d==1)p = 0.06;
	if (d==2)p = 0.08;
	s=s+s*p;
	return s;

}

int AmountWhisPercent3(int &d, int ye){
	int s=ye;
	double p;
	if (d==1)p = 0.12;
	if (d==2)p = 0.15;
	s=s+s*p;
	return s;

}
