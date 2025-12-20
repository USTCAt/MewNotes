#include<iostream>
using namespace std;
long long pow(long long n,long long t,long long mod)
{
  long long ans=1;
  while(t){
    if(t%2)  ans=(ans%mod) * (n%mod) % mod;
    n=(n%mod)*(n%mod);
    t=t/2;
  }
  return ans;
}
int main()
{
  long long d,m,mod;
  cin>>d>>m>>mod;
  cout<<d<<"^"<<m<<" mod "<<mod<<"="<<pow(d,m,mod)<<endl;
}