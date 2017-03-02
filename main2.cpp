#include <iostream>
#include <cmath>


int zero(int d, int ye)
{
        int p=-10,s=ye;
        s*=0,9;
        return s;
}

int one(int d, int ye)
{
        int p,s=ye;
        if (d=1)p=0,02;
        if (d=2)p=0,03;
        s=s+s*p;
        return s;
}

int two(int d, int ye)
{


}

int three(int d, int ye)
{


}

int main ()
{
        int ye,date,d,m;
        cout << "Введите срок вклада:"<< endl;
        cin >> date >> endl;
        cout << "Введите сумму вклада"<< endl;
        if (date>365)||(date<0)return 0;
        cout << "Введите сумму вклада:"<< endl;
        cin >> ye >> endl;
        if (ye<10) return 0;
        if(ye<100) d=1;
                else d=2;
        if (date<30)zero(d);
        if ((date<120)&(date>=31))one(d);
        if ((date<240)&(date>=121))two(d);
        if ((date<365)&(date>=241))three(d);
        if (date<30)zero(d,ye);
        if ((date<120)&(date>=31))one(d,ye);
        if ((date<240)&(date>=121))two(d,ye);
        if ((date<=365)&(date>=241))three(d,ye);


        return 0;
}
