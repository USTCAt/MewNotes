#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int x)
{
  if(x==1) return false;
  if(x==2 || x==3) return true;
  for(int i = 5;i < sqrt(x); ++i)
  {
    if(x%i==0)
      return false;
  }
  return true;
}
int main()
{
  int n;
  cin>>n;
  for(int i = 2;i < sqrt(n);i++)
  {
    if(isPrime(i) && n%i==0)
    {
      if(isPrime((n/i))&&n>=i)
      {  cout<<n/i<<endl;
        break;}
    }
  }
}