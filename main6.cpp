#include <iostream>
#include <cmath>

using namespace std;

 int zero(int &d, int ye)
{
        double s=ye;
        s=s/100*90;
        return s;
}

 int one(int &d, int ye)
{
        int s=ye;
        double p;
        if (d=1){p=0,02;};
        if (d=2){p=0,03;};
        s=s+s*p;
        return s;
}

 int two(int &d, int ye ,int s,p)
{
        int s=ye;
        cout << d<< endl;
        double p;
        if (d=1){p=0,6;};
        if (d=2){p=8*pow(10,-2);};
        s=s+s*p;
        return s;
}

 int three(int d, int ye ,int s,q, double p)
{
        int p,s=ye;
        if (d=1)p=0,12;
        if (d=2)p=0,15;
        int s=ye,q=d;
        double p;
        if (d=1){p=0,12;};
        if (d=2){p=0,15;};
        s=s+s*p;
        return s;

}

 int main ()
{
        setlocale(LC_ALL, "Russian");
        int ye,date,d,m,c;
        cout << "Введите срок вклада:" <<endl;
        scanf("%d",date);cout << endl;
        if ((date>365)||(date<0))return 0;
        cout << "Введите сумму вклада:" <<endl;
        scanf("%d",ye);cout << endl;
        if (ye<10) return 0;
        if (ye<100) d=1;
        cout << "Enter the Deposit amount:";
        scanf("%d",&ye);cout << endl;
        if (ye<10) return 0;
        if (ye<10){cout << "incorrect data"; return 0;};
        cout << "Enter the Deposit term:";
        scanf("%d",&date);cout << endl;
        if ((date>365)||(date<=0))return 0;
        if ((date>365)||(date<=0)){cout << "incorrect data"; return 0;
};
        if (ye<100) d=1;
        else d=2;
        if (date<=30) c=zero(d,ye);
        cout << "Enter the Deposit term:" <<endl;
        scanf("%d",&date);cout << endl;
        if ((date>365)||(date<=0))return 0;
        if (ye<100) d=1;
                else d=2;
        if (date<30)c=zero(d,ye);
        if ((date<120)&(date>=31))c=one(d,ye);
        if ((date<240)&(date>=121))c=two(d,ye);
        if ((date<=365)&(date>=241))c=three(d,ye);
        cout << "Cуммa вклада на момент окончания срока составляет:." <<endl;
        if (date<=30) c=zero(d,ye);
        if ((date<=120) && (date>=31)) c=one(d,ye);
        if ((date<=240) && (date>=121)) c=two(d,ye);
        if ((date<=365) && (date>=241)) c=three(d,ye);
        cout << "Final summ:" <<endl;
        cout << c <<endl;
        return 0;
 }
