#include<iostream>
using namespace std;
int main()
{
  //f0=1 f1=2 f2=0 f3=2 f4=2 f5=1 f6=0 f7=1 f8=1 f9=2 f10 = 0 f11 =2 f12 = 2 f13 = 1
  //1 2 0 2 2 1 0 1 1 2 0 2 2 1 0 1 1 2 0 2 2 1  
  int F[8]={1,2,0,2,2,1,0,1};
  int n;
  while(cin>>n)
  {
    if(n % 8 == 2 || n % 8 == 6)
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
  }
}