#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
int main()
{
  int n;
  int sum=0;
  int max=-1;
  int min=11;
  cin>>n;
  for(int i = 0; i < n; ++i)
  {
    int num;
    cin>>num;
    if(num>max)
    {
      max=num;
    }
    else if(num<=min){
      min=num;
    }
    sum+=num;
  }
  cout<<fixed<<setprecision(2)<<(sum-max-min*1.0)/(n-2)<<endl;

}