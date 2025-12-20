#include<iostream>
#include<vector>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n,m;
  cin>>n>>m;
  vector<int> nums(n);
  for(int i = 0;i < n; ++i)
  {
    cin>>nums[i];

  }
  vector<int> ans(m);
  for(int i = 0;i < m; ++i)
  {
    int target;
    cin>>target;
    int left=0;
    int right=n-1;
    int res=-1;
    while(left<=right)
    {
      int mid = left + ((right - left) >> 1);
      if(nums[mid]==target)
      {
        res=mid+1;
        right=mid-1;
      }
      else if(nums[mid] < target)
      {
        left=mid+1;
      }
      else{
        right=mid-1;
      }
      
    }
    ans[i]=res;
  }
  for(int num : ans)
  {
    cout<<num<<" ";
  }
}