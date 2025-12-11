#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i = 0;i < t;i++)
    {
        int alice,n;
        cin>>n>>alice;
        int smaller=0;
        int bigger=0;
        for(int j = 0;j < n;j++)
        {
            int score;
            cin>>score;
            if(score<alice)
                smaller++;
            if(score>alice)
                bigger++;

        }
        cout << (smaller > bigger ? alice - 1 : alice + 1) << endl;
    }
}