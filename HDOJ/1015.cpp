#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  string letters;
  int target;
  while(cin>>target>>letters){
    int v,w,x,y,z;
    if(target == 0 && letters == "END")
      break;
    sort(letters.begin(),letters.end());
    reverse(letters.begin(),letters.end());
    int n = letters.length();
    long long ans;
    bool found = false;
    for(int i = 0;i < n; ++i)
    {
      v=letters[i]-'A'+1;
      for(int j =  0;j < n; ++j)
      {
        w=letters[j]-'A'+1;
        if(v == w) continue;
        for(int k = 0;k < n; ++k)
        {
          x=letters[k]-'A'+1;
          if(x == v || x == w ) continue;
          for(int l = 0;l < n; ++l)
          {
            y=letters[l]-'A'+1;
            if(y == x || y == w || y ==v) continue;
            for(int m = 0; m < n; ++m)
            {
              z=letters[m]-'A'+1;
              
              if(z == v || z == w || z == x || z == y) continue;
              ans=v - w * w + x * x * x - y * y * y * y + z * z * z * z * z;
              if(ans==target){
                cout<<letters[i]<<letters[j]<<letters[k]<<letters[l]<<letters[m]<<endl;
                found=true;
                goto endloop;

                }

            }
          }
        }
      }
    }
    endloop:
      if(!found)  cout<<"no solution"<<endl;
  }
}