#include<iostream>
using namespace std;
int main()
{int c,i,j;
cout<<"enter any number";
cin>>i;
cout<<"enter round off number";
cin>>j;
c=j;
while(c<i)
{
if(i%j==0)
{cout<<"number is directly divisible.......";
return 0;}
else{c=c+j;}
}
cout<<"!! number rounded of is !!"<<c;
return 0;
}
