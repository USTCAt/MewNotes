#include<iostream>
using namespace std;
int main()
{
  long long n,m;
  cin>>n>>m;
  long long total=((m+1)*m/2)*((n+1)*n/2);
  long long z=0;
  for(int i = 1;i <=min(m,n);i++)
  {
    z+=(n+1-i)*(m+1-i);
  }
  cout<<z<<" "<<total-z<<endl;;
}