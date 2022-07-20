#include<iostream.h>
#include<conio.h>
class dr
{
public:
int d;
dr()
{
d=10;
}

dr(int d)
{
this->d=d;
}

dr dhruv(dr d)
{
this->d=d.d;
return *this;
}

void disp()
{
cout<<d<<endl;
}
};
int main()
{
dr t;
dr p(5);
dr dhruv;
clrscr();


t.disp();
p.disp();
dhruv=dhruv.dhruv(p);
dhruv.disp();
return 0;
}
