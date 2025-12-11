#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
  string username;
  cin>>username;
  int lt=1;
  sort(username.begin(),username.end());
  for(int i = 1;i < username.length();i++)
  {
    if(username[i]==username[i-1])
      continue;
    else
      lt++;
  }
  if(lt%2==0) cout<<"CHAT WITH HER!"<<endl;
  else cout<<"IGNORE HIM!"<<endl;

}