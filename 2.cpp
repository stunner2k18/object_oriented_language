#include<iostream>
using namespace std;
int main()
{
int c,num,i;
cout<<"Enter the number"<<endl;
cin>> num;
c=0;
while(num>0)
{
  c=c+1;
  num=num/10;
}
cout<<"number of digits are"<<endl;
cout<<c;
return 0;
}
