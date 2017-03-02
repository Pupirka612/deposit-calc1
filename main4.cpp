#include <iostream>
#include <cmath>

using namespace std;


 int zero(int d, int ye)
 {
        int p=-10,s=ye;

        int two(int d, int ye)
 {
        int p,s=ye;
        if (d=1)p=0,06;
        if (d=2)p=0,08;
        if (d=2)p=8*pow(10,-2);
        s=s+s*p;
        return s;

 }
 }

 int main ()
 {
        int ye,date,d,m;
        int ye,date,d,m,c;
        cout << "Введите срок вклада:";
        cin >> date >> endl;
        if (date>365)||(date<0)return 0;
        scanf("%d",date);cout << endl;
        if ((date>365)||(date<0))return 0;
        cout << "Введите сумму вклада:";
        cin >> ye >> endl;
        scanf("%d",ye);cout << endl;
        if (ye<10) return 0;
        if(ye<100) d=1;
        else d=2;
        if (date<30)zero(d,ye);
        if ((date<120)&(date>=31))one(d,ye);
        if ((date<240)&(date>=121))two(d,ye);
        if ((date<=365)&(date>=241))three(d,ye);
        cout << "Cуммa вклада на момент окончания срока составляет:."
        cout << s << endl;
        if (date<30)c=zero(d,ye);
        if ((date<120)&(date>=31))c=one(d,ye);
        if ((date<240)&(date>=121))c=two(d,ye);
        if ((date<=365)&(date>=241))c=three(d,ye);
        cout << "Cуммa вклада на момент окончания срока составляет:.";
        cout << c << endl;
        return 0;

 }
