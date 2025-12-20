#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  double ans;
  int n;
  cin>>n;
  for(int i = 0;i < n; ++i)
  {
    ans=0.0;
    int number;
    cin>>number;
    if(number==1)
    {
      cout<<1<<endl;
      continue;
    }
    for(int j = 2;j <= number; ++j)
    {
      ans+=log10((double)j);
    }
    cout<<int(ans)+1<<endl;
  }
}