#include<iostream>
using namespace std;
int fact(int);
int main()
{
int num,i;
i=0;
cout<<"Enter number";
cin>>num;
i=fact(num);
cout<<"factorial is "<<i;
}
int c=1;
int fact(int num)
{
if(num>0)
{c=c*num;
return fact(num-1);}
else return c;
}
