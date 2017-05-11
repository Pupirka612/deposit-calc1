#include <iostream>
#include <stdio.h>
using namespace std;
int getvklad()
{
    int x;
    int a = 1;
    while (a)
{ 
setlocale(LC_ALL,"Russian");
a = 0;
cout << "Введите сумму вклада: ";
cin >> x;
if (x<10) (a=1,cout<<"Вклад должен быть выше 10 т.р.");
cout << endl;
}
return x;
}
int getsrok ()
{
    int x;
    int a=1;
    while (a)
  { 
    a=0;
    cout << endl << "Введите срок вклада: ";
    cin >> x;
    if (x<0) (a=1, cout << "Срок не должен быть меньше 0 ");
    if (x>365) (a=1, cout << "Срок должен быть меньше 365");
  } 
return x;
}

int main ()
{
    double a,b,c;
    int vkl;
    vkl=getvklad();

    int srok;
    srok=getsrok();

    double dohod = 0;

    if (vkl > 100) a = 1.03; else a = 1.02;
    if (vkl > 100) b = 1.08; else b = 1.06;
    if (vkl > 100) c = 1.15; else c = 1.12;

    if (srok<=30) dohod = vkl*0.9;
    if (srok>30 && srok<121) dohod = vkl * a;
    if (srok>120 && srok<241) dohod = vkl * b;
    if (srok>240 && srok<366) dohod = vkl * c;

    cout <<endl << "Доход: " << dohod;
    return 0;
}

