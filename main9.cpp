#include <iostream>
#include <cmath>

using namespace std;

 int zero(int &d, int ye)
{
        double s = ye;
        s = s/100*90;
        return s;
}

 int one(int &d, int ye)
{
        int s = ye;
        double p;
        if (d == 1){
            p = 0.02;
        }
        if (d == 2){
            p = 0.03;
        }
        s = s+s*p;
        return s;
}

 int two(int &d, int ye)
{
        int s = ye;
        cout << d<< endl;
        double p;
        if (d == 1){
            p=0.6;
        }
        if (d == 2){
            p = 8*(pow(10,-2));
        }
        s = s+s*p;
        return s;
}

 int three(int d, int ye)
{
        int s;
        s = ye;
        double p;
        if (d == 1){
            p=0.12;
        }
        if (d == 2){
            p=0.15;
        }
        s = s+s*p;
        return s;

}

 int main ()
{
        setlocale(LC_ALL, "rus");
        int ye,date,d,c;
        cout << "Введите срок вклада:" <<endl;
        cin >> date;
        cout << endl;
        while((date>366)||(date<=0))
        {
            cout << "больше 365" <<endl;
            cin >> date;
            cout << endl;
        };
        cout << "Введите сумму вклада:" <<endl;
        cin >> ye;
        cout << endl;

        while(ye<10000)
        {
            cout << "нужно больше 10000" <<endl;
            cin >> ye;
            cout << endl;
        };

        cout << "Cуммa вклада на момент окончания срока составляет:." <<endl;

        if (date <= 30) c = zero(d,ye);
        if ((date <= 120) && (date >= 31)) c = one(d,ye);
        if ((date <= 240) && (date >= 121)) c = two(d,ye);
        if ((date <= 365) && (date >= 241)) c = three(d,ye);

        cout << "Final summ:"<< c <<endl;
        return 0;
 }
