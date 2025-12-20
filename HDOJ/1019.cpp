#include<iostream>
using namespace std;
int gcd(int l,int s)
{
  int tmp;
  while(s)
  {
    tmp=l%s;
    l=s;
    s=tmp;
  }
  return l;
}
int main()
{
  int n;
  cin>>n;
  while(n--)
  {
    int t;
    cin>>t;
    int cur;
    int la=1;
    while(t--)
    {
       cin>>cur;
       la=la/gcd(la,cur)*cur;  
    }
    cout<<la<<endl;
  }
}