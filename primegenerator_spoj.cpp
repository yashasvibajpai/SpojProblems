#include <iostream>
using namespace std;

int main()
{
  int i,j,t;
  cin>>t;
  while(t)
  {
    int m,n,p;
    cin>>m>>n;
    for(i=m;i<=n;i++)
    {
      for(j=2;j<i/2;j++)
      {
        if(i%j==0)
          break;
      }
      if((i%j!=0||i==2)&&i!=1)
      cout<<i<<endl; 
    }
    t--;
  }
  return 0;
}